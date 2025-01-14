//////////////1.12(и)
#include <iostream>
#include <cmath>
using namespace std;

int is_greater_mod(bool a[], bool b[], int n){
    for (int i = 1; i < n; i++){
        if ((a[i] == true) && (b[i] == false))
            return 1;
        else if ((a[i] == false) && (b[i] == true))
            return -1;
    }
    return 0;

}

void minus_mod(bool a[], bool b[], bool res[], int n){ //a обязательно больше б по модулю
    for (int i = n-1; i > 0; i--){
        if (((a[i] == true) && (b[i] == true)) || ((a[i] == false) && (b[i] == false))) {
            res[i] = false;
        }
        else if ((a[i] == true) && (b[i] == false)){
            res[i] = true;
        }
        else {
            res[i] = true;
            for (int j = i-1; j > 0; j--){
                if (a[j] == true){
                    a[j] = false;
                    break;
                }
            }
        }
    }

}
void plus_mod(bool a[], bool b[], bool res[], int n){
    bool temp = 0;
    for (int i = n-1; i > 0; i--){
        if ((a[i] == true) && (b[i] == true)){
            if (temp == false){
                temp = true;
                res[i] = false;
            } else {
                res[i] = true;
            }   
        }
        else if ((a[i] == false) && (b[i] == false)){
            if (temp == true){
                temp = false;
                res[i] = true;
            }
        }
        else {
            if (temp == false){
                res[i] = true;
            } else {
                res[i] = false;
            }
        }
    }
}





void my_minus(bool a[], bool b[], bool res[], int n){
    if ((a[0] == false) && (b[0] == false)){
        if (is_greater_mod(b, a, n) > -1){
            res[0] = true;
            minus_mod(b, a, res, n);
        } else {
            res[0] = false;
            minus_mod(a, b, res, n);
        }
    }
    else if ((a[0] == true) && (b[0] == true)){
        if (is_greater_mod(a, b, n) > -1){
            res[0] = true;
            minus_mod(a, b, res, n);
        } else {
            res[0] = false;
            minus_mod(b, a, res, n);
        }
    }
    else if ((a[0] == true) && (b[0] == false)){
        res[0] = true;
        plus_mod(a, b, res, n);
    }
    else {
        res[0] = false;
        plus_mod(a, b, res, n);
    }

}

void negative(bool a[], bool res[], int n){
    for (int i = 1; i < n; i++){
        if (a[i] == true)
            res[i] = false;
        else
            res[i] = true;
    }
    res[0] = a[0];
}
void scale(bool a[], int scale, bool res[], int n){
    for (int i = 1 ; i < n-scale; i++){
        res[i] = a[i+scale];
    }
    for (int i = n-scale; i < n; i++){
        res[i] = false;
    }
    res[0] = a[0];
}




void get(bool a[], int n, char message){
    cout << "input mass " << message << ":";
    char x = 0;
    cin >> x;
    if (x == '-')
        a[0] = false;
    else 
        a[0] = true;
    for (int i = 1; i < n; i++){
        cin >> x;
        if (x == '1')   
            a[i] = true;
        else    
            a[i] =  false;
    }
}

void print_bin(bool a[], int n){
    cout << "binary: ";
    if (a[0] == false)
        cout << '-';
    else 
        cout << '+';
    for (int i = 1; i < n; i++){
        if (a[i] == false)
            cout << 0;
        else    
            cout << 1;
    }
    cout << endl;
}
void print_dec(bool a[], int n){
    cout << "decimal: ";
    if (a[0] == false)
        cout << '-';
    else 
        cout << '+';
    int res = 0;
    int two_pow = 1;
    for (int i = n-1; i > 0; i--){
        res += two_pow*a[i];
        two_pow *= 2;
    }
    cout << res << endl;
}

char dec_to_hex(int res){
    if (res <= 9)
        return char(res + 48);
    else if (res == 10)
        return 'A';
    else if (res == 11)
        return 'B';
    else if (res == 12)
        return 'C';
    else if (res == 13)
        return 'D';
    else if (res == 14)
        return 'E';
    else if (res == 15)
        return 'F';
    
    return '0';
}
void print_hex(bool a[], int n){
    cout << "hex: ";
    if (a[0] == false)
        cout << '-';
    else 
        cout << '+';
    int scale = (n-1)%4;
    if (scale != 0){
        int res = 0;
        for (int i = 1; i <= scale; i++){
            if (a[i] == true)
                res += pow(2, scale-i);
        }
        cout << dec_to_hex(res);
    }
    int count = 0;
    int res = 0;
    for (int i = 1 + scale; i < n; i += 1){
        if (a[i] == true)
            res += pow(2, 3-count)*a[i];
        count++;
        if (count == 4){
            count = 0;
            cout << dec_to_hex(res);
            res = 0;
        }
    }
    cout << endl;
}




void f(bool x[], bool y[], bool z[], bool res[], const int n){
    bool x_neg[n] = {false}, y_neg[n] = {false}, z_neg[n] = {false};
    negative(x, x_neg, n);
    negative(y, y_neg, n);
    negative(z, z_neg, n);

    bool res_temp[n] = {false}, res_temp_1[n] = {false}, res_temp_2[n] = {false};

    ///////////
    my_minus(x, y, res_temp, n);
    negative(res_temp, res_temp, n);
    scale(res_temp, 3, res_temp, n);
    /////////
    my_minus(x_neg, y_neg, res_temp_1, n);
    scale(res_temp_1, 2, res_temp_1, n);
    ////////
    my_minus(res_temp, res_temp_1, res_temp_2, n);

    //////////////////////////////////////
    bool res_temp_3[n] = {false}, res_temp_4[n] = {false}, res_temp_5[n] = {false};

    ///////////
    my_minus(x, z_neg, res_temp_3, n);
    scale(res_temp_3, 4, res_temp_3, n);
    /////////
    my_minus(y, z, res_temp_4, n);
    negative(res_temp_4, res_temp_4, n);
    scale(res_temp_4, 3, res_temp_4, n);
    ////////
    my_minus(res_temp_3, res_temp_4, res_temp_5, n);
    scale(res_temp_5, 1, res_temp_5, n);

    ///////////////////////////
    my_minus(res_temp_2, res_temp_5, res, n);

}

int main(){
    const int n = 5;
    bool x[n] = {false}, y[n] = {false}, z[n] = {false}, res[n] = {false};
    get(x, n, 'x');
    get(y, n, 'y');
    get(z, n, 'z');
    f(x, y, x, res, n);
    print_bin(res, n);
    print_dec(res, n);
    print_hex(res, n);


    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //1
    int c[5] = {0};
    for (int i = 0; i < 5; i++){
        cin >> c[i];
    }
    for (int i = 0; i < 5; i++){
        cout << c[i] << " ";
    }
    cout << endl;

    //2
    int n;
    cout << "input n: ";
    cin >> n;
    double res = 0, a[n] = {0}, b[n] = {0};

    cout << "input ai: \n";
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << "input bi: \n";
    for (int i = 0; i < n; i++){
        cin >> b[i];
        res += a[i]*b[i];
    }

    cout << "res: " << res << endl;

    //3(1b)
    int n;
    cout << "input n: ";
    cin >> n;
    double res = 0,b_mod = 0, a_mod = 0, a[n] = {0}, b[n] = {0};

    cout << "input ai: \n";
    for (int i = 0; i < n; i++){
        cin >> a[i];
        a_mod += pow(a[i], 2);
    }
    cout << "input bi: \n";
    for (int i = 0; i < n; i++){
        cin >> b[i];
        b_mod += pow(b[i], 2);
        res += a[i]*b[i];
    }

    cout << "res: " << res/(pow(a_mod, 0.5)*pow(b_mod, 0.5)) << endl;


    //3(11вг)
    /////////(в)
    double b[32] = {0}, a[32] = {0};

    cout << "input bi: \n";
    for (int i = 0; i < 32; i++){
        cin >> b[i];
    }
    for (int i = 0; i < 32; i+=3){
        a[i] = b[i+1];
        a[i+1] = b[i+2];
        a[i+2] = b[i];

        cout << a[i] << " " << a[i+1] << " " << a[i+2] << " ";
    }
    cout << endl;

    ////////////(г)

    int n;
    cout << "input 2n: ";
    cin >> n;
    double b[n] = {0}, a[n] = {0};

    cout << "input bi: \n";
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }
    a[0] = b[n-1];
    cout << a[0] << " ";
    for (int i = 1; i < n-1; i+=2){
        a[i] = b[i+1];
        a[i+1] = b[i];

        cout << a[i] << " " << a[i+1] << " " ;
    }
    a[n-1] = b[0];
    cout << a[n] << endl;


    //4 (6, 11ab)

    ///////6
    int n;
    cout << "input n: ";
    cin >> n;
    double x[n], y[n-1], z[n-1];

    cout << "input xi: \n";
    for (int i = 0; i < n; i++){
        cin >> x[i];
    }
    cout << "y[i]: \n";
    for (int i = 0; i < n-1; i++){
        if (x[i]*x[i+1] < 0) y[i] = 1;
        else y[i] = 0;

        cout << y[i] << " ";
    }

    cout << "\nz[i]: \n";
    for (int i = 0; i < n-1; i++){
        if (x[i] > x[i+1]) z[i] = 1;
        else z[i] = 0;

        cout << z[i] << " ";
    }
    cout << endl;


    ////////////11a

    int n;
    cout << "input n: ";
    cin >> n;
    double b[n] = {0}, a[n] = {0};

    cout << "input bi: \n";
    for (int i = 0; i < n; i++){
        cin >> b[i];
        a[n-1-i] = b[i];
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << " " ;
    }
    cout << endl;


    ///////////11b

    int n;
    cout << "input n: ";
    cin >> n;
    double x[n] = {0}, y[n] = {0}, z[n] = {0};

    cout << "input xi: \n";
    for (int i = 0; i < n; i++){
        cin >> x[i];
    }
    y[n-1] = x[0];
    z[0] = x[n-1];

    cout << "y[i]: \n";
    for (int i = 0; i < n-1; i++){
        y[i] = x[i+1];
        cout << y[i] << " " ;
    }
    cout << y[n-1] << "\nz[i]: \n" << z[0] << " ";
    for (int i = 1; i < n; i++){
        z[i] = x[i-1];
        cout << z[i] << " " ;
    }
    cout << endl;



    //5 (номер 4)

    int n, k, l, m;
    cout << "input n, k, l, m: ";
    cin >> n >> k >>  l >>  m;
    double x[n] = {0};

    cout << "input xi: \n";
    for (int i = 0; i < n; i++){
        cin >> x[i];
    }

    //a
    double min_lm = x[l], max_lm = x[l];
    for (int i = l-1; i < m; i++){
        if (x[i] < min_lm) min_lm = x[i];
        if (x[i] > max_lm) max_lm = x[i];
    }
    cout << "task a: min = " << min_lm << ", max = " << max_lm << endl;

    //b
    int max_i_first = 0, max_i_last = 0;
    for (int i = 0; i < n; i +=k){
        if (x[i] > x[max_i_first])
            max_i_first = i;
        if (x[i] >= x[max_i_last])
            max_i_last = i;
    }
    cout << "task b: max_i_first = " << max_i_first+1 << ", max_i_last = " << max_i_last+1 << endl;

    //c
    int min_i = 0, counter = 0;
    for (int i = 0; i < n; i ++){
        if (x[i] < x[min_i]){
            min_i = i;
            counter = 1;
        } else if (x[i] == x[min_i])
            counter++;
    }
    cout << "task c: min count = " << counter << endl;

    //d
    int min_i = 0, min_i_prev = 0;
    for (int i = 0; i < n; i ++){
        if (x[i] < x[min_i]){
            min_i = i;
            min_i_prev = i;
        } else if (x[i] == x[min_i]){
            min_i_prev = min_i;
            min_i = i;
        }
    }
    cout << "task c: min_i previous than last = " << min_i_prev+1 << endl;


//////я пишу везде плюс 1 в ответе потому что по заданию там индексация с 1 начинается а не с 0


    //6
    int n;
    cout << "input n: ";
    cin >> n;
    double s[n],t[n], u[n], temp = 0, temp_2 = 1, temp_3 = 0;

    cout << "s[i]:\n";
    for (int i = 0; i < n; i++){
        temp += 1.0/(pow(i+2, 3)*pow(i+3, 2));
        temp_2 *= (double)(i+1)*(i+1)/((2*(i+1))*(2*(i+1) - 1));
        temp_3 += temp_2;
        s[i] = pow(10-temp, 0.5);
        t[i] = (27*temp_3 - 36)/(2*pow(3, 0.5));
        u[i] = s[i] - t[i];
        cout << s[i] << " ";
    } 
    cout << "\nt[i]:\n";
    for (int i = 0; i < n; i++){
        cout << t[i] << " ";
    }
    cout << "\nu[i]:\n";
    for (int i = 0; i < n; i++){
        cout << u[i] << " ";
    }
    cout << endl;


    


    //7
    ///// фотку задачи она не скинула :)




    return 0;
}
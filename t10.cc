#include <iostream>
#include <cmath>
using namespace std;

bool even(int n){
    bool flag = false;
    if (n%2 == 0)
        flag = true;
    return flag;
}

bool is_prime(int n){
    bool flag = true;
    for (int i = 2; (i < pow(n, 0.5) + 1) && (i < n); i++){
        if (n%i == 0)
            flag = false;
    }
    return flag;
}


bool is_sorted(int mas[], int n){
    bool flag = true;
    for (int i = 0; (i < n-1) && flag; i++){
        if (mas[i] >= mas[i+1])
            flag = false;
    }
    return flag;
}

int unique(int mas[], int n){
    int count = 0;
    for (int i = 0; i < n; i++){
        int flag = true;
        for (int j = 0; j < n; j++){
            if ((j!=i) && (mas[i] == mas[j])){
                flag = false;
            }
        }
        if (flag)
            count++;

    }
    return count;
}
bool is_equal(int mas1[], int mas2[], int n){
    bool flag = true;
    for (int i = 0; i < n; i++){
        if (mas1[i] != mas2[i])
            flag = false;
    }
    return flag;
}

bool is_progression(int mas[], int n){
    bool flag = true;
    int d = mas[1] - mas[0];
    for (int i = 2; i < n; i++){
        if (mas[i] - mas[i-1] != d)
            flag = false;
    }
    return flag;
}

int length(int mas[], int n){
    int len = 2;
    int d = mas[1]/mas[0];
    int flag = true;
    for (int i = 2; (i < n)&&(flag); i++){
        if (mas[i]/mas[i-1] == d)
            len++;
        else    
            flag = false;
    }
    return len;
}

bool is_same_my(int mas[], int n){
    bool res_flag = false;
    for (int i = 0; i < n; i++){
        int flag = true;
        for (int j = 0; j < n; j++){
            if ((j!=i) && (mas[i] == mas[j])){
                flag = false;
            }
        }
        if (!flag)
            res_flag = true;

    }
    return res_flag;
}

int main(){
    const int n = 3;
    int mas[n] = {0};
    for (int i = 0; i < n; i++)
        cin >> mas[i];


// ////////////1
//     bool flag = false;
//     for (int i = 0; (i < n)&& (flag == false); i++){
//         flag = even(mas[i]);
//     }
//     cout << flag << endl;

// ////////////2
//     bool flag = is_prime(2);
//     cout << flag << endl;

// ////////////3
//     bool flag = is_sorted(mas, n);
//     cout << flag << endl;

// ////////////4
//     int c = unique(mas, n);
//     cout << c << endl;

// ////////////5
//     int mas2[n] = {0};
//     for (int i = 0; i < n; i++)
//         cin >> mas2[i];

//     bool flag = is_equal(mas, mas2, n);
//     cout << flag << endl;

// ////////////6
//     bool flag = is_progression(mas, n);
//     cout << flag << endl;

// ////////////7
//     int c = length(mas, n);
//     cout << c << endl;

////////////////////////////////////////////////////////

// ////////////1
//     bool flag = is_same_my(mas, n);
//     cout << flag << endl;

////////////2
    bool flag = is_same_my(mas, n);
    cout << flag << endl;


    return 0;
}
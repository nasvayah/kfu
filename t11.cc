#include <iostream>
#include <cmath>
using namespace std;

const int n = 3;
void mul_matr(int a[n][n], int b[n][n], int c[n][n]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            c[i][j] = 0;
            for (int k = 0; k < n; k++){
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
}

void copy_matr(int a[n][n], int b[n][n]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            b[i][j] = a[i][j];
        }
    }
}

void matr_pow(int a[n][n], int p, int b[n][n]){
    int c[n][n] = {{0}};
    copy_matr(a, b);
    for (int i = 0; i < p-1; i++){
        mul_matr(a, b, c);
        copy_matr(c, b);
    }
}

void print_matr(int a[n][n]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
void read_matr(int a[n][n]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
}


void em(int b[n][n]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            b[i][j] = (i == j) ? 1 : 0;
        }
    }
}


void sum_matr(int a[n][n], int b[n][n], int c[n][n]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }    
}


void task_2(int a[n][n], int m, int res[n][n]){
    em(res);
    for (int i = 1; i < m; i++){
        sum_matr(a, res, res);
    }

}

int dist(int a[n][n], int k, int l){
    int res = 0;
    for (int j = 0; j < n; j++)
        res += abs(a[k][j])*abs(a[l][j]);
    return res;
}


int task_3(int a[n][n]){
    int res = 1;
    int res_dist = dist(a, 0, 1);
    for (int i = 1; i < n; i++){
        res = dist(a, 0, i) > res_dist ? i : res;
        res_dist = dist(a, 0, i) > res_dist ? dist(a, 0, i) : res_dist;
    }
    return res + 1;
}


int haract(int a[n][n], int k){
    int res = 0;
    for (int i = 0; i < n; i++){
        if (a[k][i] > 0)
            res += a[k][i];
    }
    return res;
}
void perestanovka(int a[n][n], int k, int l){
    if (((haract(a, k) > haract(a, l)) && (k<l)) || ((haract(a, k) < haract(a, l)) && (k>l))){
        for (int i = 0; i < n; i++){
            int temp = a[k][i];
            a[k][i] = a[l][i];
            a[l][i] = temp;
        }
    }  
}

int main(){

    int a[n][n] = {{0}};
    read_matr(a);
    perestanovka(a, 0, 2);
    print_matr(a);

}

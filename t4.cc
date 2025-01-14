#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // //34a
    // int n, k;
    // cin >> n >> k;
    // double y;
    // cin >> y;
    // double s = 0;
    // for (int i = 2; i <= n; i++){
    //     for (int j = 0; j <= k; j++) {
    //         s += log(i+cos(j*y));
    //     }
    // }
    // cout << s;

    // //34b
    // int n, k;
    // cin >> n >> k;
    // double y;
    // cin >> y;
    // double s = 0;
    // for (int i = 2; i <= n; i++){
    //     double temp = 1;
    //     for (int j = 0; j <= k; j++) {
    //         temp *= log(i+cos(j*y));
    //     }
    //     s += temp;
    // }
    // cout << s;

    //     //34g
    // int n, k;
    // cin >> n >> k;
    // double y;
    // cin >> y;
    // double u = 0;
    // for (int i = 2; i <= n; i++){
    //     double temp = 0;
    //     for (int j = 0; j <= k; j++) {
    //         temp += log(i+cos(j*y));
    //     }
    //     u *= temp;
    // }
    // cout << u;



    // //35

    // double a = 0, b = 1.5, s = 0, min, temp, x = 2, flag = 0;
    // for (int j = 1; j <= 40; j++){
    //     for (int i = 1; i <= 20; i++) {
    //         temp = sin(i*x - M_PI/4) + cos(j*x + i*x);
    //         if (temp > a && temp < b){
    //             if (!flag){
    //                 min = temp;
    //                 flag = 1;
    //             } else if (flag && temp <= min)
    //                 min = temp;
                
    //             s += temp;
    //         }   
    //     }
    // }
    // cout << s;


    // //2
    // double a, s = 0, i = 1, temp;
    // cin >> a;
    // while(a != 0){
    //     temp = 1;
    //     for (int j = 1; j <= i; j++)
    //         temp *= a;
    //     s += temp;

    //     i++;
    //     cin >> a;
    // }
    // cout << s << endl;


    // //3
    // double a, s = 0, n, m, temp;
    // cin >> n >> m;
    // for (int i = 1; i <= n; i++){
    //     temp = 1;
    //     for (int j = 1; j <= m; j++){
    //          cin >> a;
    //          temp *= a;
    //     }
    //     s += temp;
    // }
    // cout << s << endl;

    //     //4
    // double a, s = 1, n, m, min;
    // cin >> n >> m;
    // for (int i = 1; i <= n; i++){
    //     cin >> a;
    //     min = a;
    //     for (int j = 2; j <= m; j++){
    //          cin >> a;
    //          if (a < min) min = a;
    //     }
    //     s *= min;
    // }
    // cout << s << endl;

    // //5
    // double a, s = 1, n, m, max;
    // cin >> n >> m;
    // for (int i = 1; i <= n; i++){
    //     cin >> a;
    //     double min = a;
    //     for (int j = 2; j <= m; j++){
    //          cin >> a;
    //          if (a < min) min = a;
    //     }
    //     if (i == 1)
    //         max = min;
    //     else if (i > 1 && min >= max)
    //         max = min;
    // }
    // cout << max << endl;



    // //6 
    // int counter = 2, i = 5; 

    // cout << "2 3 ";

    // while (counter < 100){
    //     int flag = 1;
    //     for (int j = 2; j < i/2 + 1; j++){
    //         if (i%j == 0) flag = 0;
    //     }
    //     if (flag) {
    //         cout << i << " ";
    //         counter ++;
    //     }
    //     i++;
    // }

    // //7
    // int n;
    // double s = 0;
    // cin >> n;
    // for (int i = 1; i <= n; i++){
    //     int temp = 1;
    //     for (int j = 1; j <= i*i; j++){
    //         temp *= j;
    //     }
    //     cout << temp << endl;
    //     s += 1.0/temp;
    // }
    // cout << s;


    //     //8
    // int a;
    // cin >> a;
    // while (a != 0) {
    //     if (a > 0){
    //         for (int j = 1; (j <= a); j++){
    //             cout << "+";
    //         }
    //         cout << "; ";
    //     }
    //     cin >> a;
    // }


    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    const int n = 5;
    int a[n] = {0};
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    ////////////////////////раскоммитить необходимое
    // //13a
    // int counter = 1;
    // for (int i = 1; i < n; i++){
    //     if (a[i-1] != a[i])
    //         counter++;
    // }
    // cout << counter << endl;

    // //13б
    // int y[n] = {0};
    // y[0] = a[0];
    // cout << y[0] << " ";
    // for (int i = 1; i < n; i++){
    //     if (a[i-1] != a[i])
    //         y[i] = a[i];
    //         cout << y[i] << " ";
    // }
    // cout << endl;

    // //13в
    // int counter = 1, v[n] = {0};
    // for (int i = 1; i < n; i++){
    //     if (a[i-1] != a[i]){
    //         v[counter-1]++;
    //          counter = 1;
    //     } else {
    //         counter++;
    //     }
    // }
    // v[counter-1]++;
    // for (int i = 0; i < n; i++) {
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    // //13г
    // int counter = 1, v[n] = {0}, i_temp = 0;
    // v[i_temp] = 0;
    // for (int i = 1; i < n; i++){
    //     if (a[i-1] != a[i]){
    //         v[i_temp]++;
    //         i_temp++;
    //     } else {
    //         v[i_temp]++;
    //     }
    // }
    // v[i_temp]++;
    // for (int i = 0; i < n; i++) {
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    // //13д
    // int counter = 1, first[n] = {0}, last[n] = {0}, i_first = 0, i_last = 0;
    // first[0] = 1;
    // for (int i = 1; i < n; i++){
    //     if (a[i-1] != a[i]){
    //         i_first++;
    //         first[i_first] = i+1;
    //         last[i_last] = i;
    //         i_last++;
    //     } 
    // }
    // last[i_last] = n;
    // for (int i = 0; i < n; i++) {
    //     cout << first[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < n; i++) {
    //     cout << last[i] << " ";
    // }
    // cout << endl;

    // //13е
    // int counter = 1, res = 0;
    // for (int i = 1; i < n; i++){
    //     if (a[i-1] != a[i]) {
    //         if (counter == 1) res++;
    //         counter = 1;
    //     } else
    //         counter ++;
    // }
    // if (counter == 1) res++;
    // cout << res << endl;

    // //13ж
    // int counter = 1, v[n] = {0};
    // for (int i = 1; i < n; i++){
    //     if (a[i-1] != a[i]) {
    //         if (counter == 1) v[i-1] = a[i-1];
    //         counter = 1;
    //     } else
    //         counter ++;
    // }
    // if (counter == 1) v[n-1] = a[n-1];

    // for (int i = 0; i < n; i++) {
    //     cout << v[i] << " ";
    // } 
    // cout << endl;

    // //13з
    // int counter = 1, v[n] = {0}, i_temp = 0;
    // for (int i = 1; i < n; i++){
    //     if (a[i-1] != a[i]) {
    //         if (counter > 1) v[i_temp] = a[i_temp];
    //         counter = 1;
    //         i_temp = i;
    //     } else
    //         counter ++;
    // }
    // if (counter > 1) v[i_temp] = a[i_temp];

    // for (int i = 0; i < n; i++) {
    //     cout << v[i] << " ";
    // } 
    // cout << endl;

/////////////////14
    // //14a
    // int y[n] = {0}, counter = 1;
    // y[0] = a[0];
    // for (int i = 1; i < n; i++){
    //     if (a[i-1] != a[i]){
    //         y[i] = a[i];
    //         counter++;
    //     }

    // }
    // int z[counter] = {0}, i_temp = 0;
    // for (int i = 0; i < n; i++){
    //     if (y[i] != 0){
    //         z[i_temp] = y[i];
    //         cout << z[i_temp] << " ";
    //         i_temp++;
    //     }
    // }
    // cout << endl;

    // //14б
    // int counter = 1, v[n] = {0}, temp = 0;

    // for (int i = 1; i < n; i++){
    //     if (a[i-1] != a[i]) {
    //         if (counter != 1){
    //             v[temp] = a[i-1];
    //             temp++;
    //         }
    //         counter = 1;
    //     } else
    //         counter ++;
    // }
    // if (counter != 1){
    //     v[temp] = a[n-1];
    // }
    // for (int i = 0; i < n; i++) cout << v[i] << " ";
    // cout << endl;


    // //14в
    // int counter = 1, v[n] = {0}, temp = 0;

    // for (int i = 1; i < n; i++){
    //     if (a[i-1] != a[i]) {
    //         if (counter == 1){
    //             v[temp] = a[i-1];
    //             temp++;
    //         }
    //         counter = 1;
    //     } else
    //         counter ++;
    // }
    // if (counter == 1){
    //     v[temp] = a[n-1];
    // }
    // for (int i = 0; i < n; i++) cout << v[i] << " ";
    // cout << endl;






    return 0;
}
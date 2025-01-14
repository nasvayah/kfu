#include <iostream>
#include <cmath>
using namespace std;

int main() {
//     //1
//     double sum = 0, x, e, temp;
//     cin >> x >> e;
//     sum = temp = x/2;
//     for (int k = 1; fabs(temp) > e; k++){
//         temp *= -(x*x/4)/(k * (k+1));
//         sum += temp;
//     }
//     cout << sum;


//     //2
//     double sum = 0, x, e, temp;
//     cin >> x >> e;
//     sum = temp = 1/x;
//     for (int i = 1; fabs(temp/(2*i - 1)) > e; i++){
//         temp *= -(x*x)/((2*i)*(2*i+1));
//         sum += temp/(2*i - 1);
//     }
//     cout << sum;

//     //3
//     double sum = 0, x, e, temp = 1;
//     cin >> x >> e;

//     for (int i = 1; fabs(temp) > e; i++){
//         temp *= x*x/(2*i);
//         sum += temp;
//     }
//     cout << sum;

//     //4
//     double sum = 0, x, e, temp = 1;
//     cin >> x >> e;

//     for (int i = 1; fabs(temp) > e; i++){
//         temp = 1/(sqrt(fabs(x))+ i*i);
//         sum += temp;
//     }
//     cout << sum;


    // //5
    // double sum = 0, x, e, temp = 1;
    // cin >> x >> e;
    // for (int i = 1; fabs(temp*(i+1)) > e; i++){
    //     temp *= -x/3;
    //     sum += temp*(i+1);
    // }
    // cout << sum;

// /////////////////6
//     //a
//     double sum = 0, x, e, temp = 1;
//     cin >> x >> e;
//     double temp1 = temp*x/2;
//     for (int i = 1; !((fabs(temp*1) < e) && (i>10)); i++){
//         temp = temp1;
//         sum += temp*(i+1);
//         temp1 = temp*x/((2*i-1)*(2*i));
//     }
//     cout << sum;

// //     //b
//     double sum = 0, x, e, temp = 1*2*3;
//     cin >> x >> e;
//     double temp1 = temp*(4);
//     for (int i = 2; !((fabs(x/(sqrt(i+1)*temp1)) < e) && (i>10)); i++){
//         temp = temp1;
//         sum += x/(sqrt(i)*temp);
//         temp1 = temp*(i+3);
//     }
//     cout << sum;


//     //c
//     double sum = 0, x, e, temp;
//     cin >> x >> e;
//     temp = -x*x/6;
//     double temp1 = -temp*x*x*1/4;
//     for (int i = 2; !(((fabs(temp1)) < e) && (i>10)); i++){
//         temp = temp1;
//         sum += temp;
//         temp1 = -temp*x*x*(i-1)/(i+3);
//     }
//     cout << sum;


//     //////7

//     //a
//     double sum = 0, e, temp;
//     cin >> e;
//     temp = 2/(sqrt(5) - sqrt(3));
//     double temp_prev = 1/(sqrt(3) - 1);
//     for (int i = 3; fabs(temp-temp_prev) >= e; i++){
//         temp_prev = temp;
//         temp = i/(sqrt(i*i+1) - sqrt(i*i-1));
//     }
//     cout << temp;

//     //b
//     double sum = 0, e, temp;
//     cin >> e;
//     temp = (1-1.0/2)*(1 - 1.0/3);
//     double temp_prev = (1-1.0/2);
//     for (int i = 3; fabs(temp-temp_prev) >= e; i++){
//         temp_prev = temp;
//         temp *= (1-1.0/(i+1));
//     }
//     cout << temp;

//         //c
//     double sum = 0, e, temp;
//     cin >> e;
//     temp = (1-1.0/2)*(1 + 1.0/6);
//     double fact = 6;
//     double temp_prev = (1-1.0/2);
//     for (int i = 3; fabs(temp-temp_prev) >= e; i++){
//         temp_prev = temp;
//         fact *= -(i+1);
//         temp *= (1+1.0/fact);
//     }
//     cout << temp;


//     //d
//     double sum = 0, e, temp;
//     cin >> e;
//     double sqrtt = sqrt(0.5 + 0.5*sqrt(0.5));
//     temp = sqrt(0.5);
//     double temp_prev = sqrt(0.5)*sqrtt;
//     for (int i = 3; fabs(temp-temp_prev) >= e; i++){
//         temp_prev = temp;
//         sqrtt = sqrt(0.5 + 0.5*sqrtt);
//         temp *= sqrtt;
//     }
//     cout << temp;




    return 0;
}
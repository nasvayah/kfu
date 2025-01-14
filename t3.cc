#include <iostream>
#include <cmath>
using namespace std;

int main() {
// //31
// double e, a = M_PI/4, b = 5*M_PI/4, c;
// cin >> e;
// while (a-b>=e){
//     c = (a+b)/2;
//     if (sin(c) + cos(c )== 0)
//         break;
//     else if ((sin(c) + cos(c) )*(sin(a) + cos(a) <=0))
//         b = c;
//     else
//          a = c;
// }
// cout << c << endl;

// //32
// double e, a = 0, x_prev, x;
// e = 0.0001;
// x = -log(x_prev+3);
// while (fabs(x-x_prev)>=e){
//     x_prev = x;
//     x = -log(x_prev+3);
// }
// cout << x << endl;

// // 30
// double e, a = 1.0, b = 1.1, x_prev, x, z;
// e = 0.0001;
// if ((pow(a, 5) - a -0.002)*(20*a*a*a) > 0)
//     x_prev = a;
// else
//     x_prev = b;
// double delta = (pow(x_prev, 5) - x_prev - 0.002)/(5*pow(x_prev, 4) - 1);
// x = x_prev - delta;
// while (fabs(delta)>e){
//     delta = (pow(x, 5) - x - 0.002)/(5*pow(x, 4) - 1);
//     x_prev = x;
//     x = x - delta;
// }
// cout << x << endl;

// //28
// double e, a, b, x;
// e = 0.0001;
// cin >> x;
// a = x;
// b = 1.0 -x;
// while (fabs(b)>e){
//     a = a*(1+b/2);
//     b = b*b*(3+b);
// }
// cout << a << endl;

// //27
// double e, a, b, x;
// e = 0.0001;
// cin >> x;
// a = 1;
// b = 1.0 -x;
// while (fabs(b)>e){
//     a = a*(1+b);
//     b = b*b;
// }
// cout << a << endl;


// //25
// double e, y, y_prev, x;
// e = 0.0001;
// cin >> x;
// if (x>=1)
//     y_prev = x/3.0;
// else 
//     y_prev = x;
// y = y_prev - (y_prev - x/(y_prev*y_prev))/3.0;
// while (fabs(y-y_prev)>e){
//     y_prev = y;
//     y = y - (y - x/(y*y))/3.0;
// }
// cout << y << endl;


//26
double e, y = 0, a = 0, b = 1, x;
e = 0.0001;
cin >> x;
a = x;


do{
a = a*a;

if (a>=2)
    y = y+b;
b =  b/2;
} while(b > e);
cout << y << endl;


//33
double e, a = M_PI/4, b = M_PI, z, fz;
e = 1;
double x_prev = a;
double fa = sin(a) + cos(a), fb = sin(a) + cos(b);
z = b;
fz = fb;
double x = x_prev- (x_prev-z)/(sin(x_prev) + cos(x_prev) - fz);

while (fabs(x - x_prev)>=e){
    if ((cos(x) + sin(x))*fz >=0){
        if (fz == fa){
            fz = fb;
            z = b;
        } else {
            fz = fa;
            z = a;
        }
    }
    x_prev = x;
    x = x_prev- (x_prev-z)/(sin(x_prev) + cos(x_prev) - fz);
}
cout << x << endl;


// //23
// double x = 3, sum = 0, v = 1.5, v_prev = 1, a = 1, b = 10;
// while (v > a && v < b){
//     double temp = v;
//     v = v + v_prev;
//     v_prev = temp;
//     sum+=log(v*x);
// }
// cout << sum;


// //24
// double x = 3, n = 1, m = 10, e = 0.001, temp = sin(x*n)/1, fact = 1, sum = temp;
// while (!((n > m ) && fabs(temp) <e)){
//     n++;
//     fact*=n;
//     temp = sin(x*n)/fact;
//     sum += temp;
// }
// cout << sum;




return 0;
}
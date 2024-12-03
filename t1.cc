#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // 1
    int n, b, c, a;
    b = 1, c = 1, a = 1;
    int x = a;
    cin >> n;
    for (int i = 1; i <= n; i++){
        x = x*b + c;
    }
    cout << x << endl;


    //2
    int n, b = 1, c = 1, a = 1, x, x_prev, d = 1, temp;
    x_prev = a;
    x = b;
    cin >> n;
    for (int i = 2; i <= n; i++){
        temp = x;
        x = c*x + d*x_prev;
        x_prev = temp;
    }
    cout << x << endl;

    //3
    int n, b = 1, c = 1, a = 1, x, x_prev, x_prev_prev, d = 1, temp;
    x_prev_prev = a;
    x_prev = a;
    x = a;
    cin >> n;
    for (int i = 2; i <= n; i++){
        temp = x;
        x = b*x + c*x_prev_prev;
        x_prev_prev = x_prev;
        x_prev = temp;
    }
    cout << x << endl;

    //4
    int n, b = 1, c = 1, a = 1, x, y, d = 1, e = 1, temp;
    y = a;
    x = a;
    cin >> n;
    for (int i = 1; i <= n; i++){
        temp = x;
        x = b*x+c*y;
        y = d*temp + e*y;
    }
    cout << x << y << endl;

    //5
    int n, b = 1, c = 1, a = 1, x, x_prev, x_prev_prev, y, y_prev, d = 1, tempx, tempy, g = 1, h = 1, e = 1;
    x_prev_prev = a;
    y_prev = a;
    x_prev = b;
    y = b;
    tempy = y;
    y = g*y + h*y_prev;
    y_prev = tempy;
    cin >> n;
    for (int i = 23 i <= n; i++){
        tempy = y;
        y = g*y + h*y_prev;

        tempx = x;
        x = d*x + e*y_prev + f*x_prev_prev;

        x_prev_prev = x_prev;
        x_prev = tempx;


        y_prev = tempy;
    }
    cout << x << endl;


    //1
    int a0 = 1, a1 = 1, n, temp, two = 2;
    cin >> n;
    for (int i = 2; i<= n; i++){
        temp = a1;
        a1 = a0 + a1/two;
        two = two*2;
        a0 = temp;

    }
    cout << a0;

    //2
    double x = 1, y = 1, n, temp, two = 2;
    cin >> n;
    for (int i = 2; i<= n; i++){
        temp = x;
        x = 0.3*x;
        y = y + temp;

    }
    cout << x << " " << y;


    //3
    double a1 = 0, a2 = 0, a3 = 1.5, n, temp;
    cin >> n;
    for (int i = 4; i<= n; i++){
        temp = a3;
        a3 = (double)(i+1)/(i*i+1)*a3 - a2*a1;
        a1 = a2;
        a2 = temp;

    }
    cout << a3;







    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;



//////////////////ps за правильность ну ваще не отвечаю мне очень впадлу напрягаться и проверять


// /////////////////////////////////func_n_2

double f(double x){
    return fabs(sin(x)) + exp(x);
}

double g(double x, double y){
    return log(f(x)*f(y) + f(x+y));
}

////////////////////////////////func_n_3

double sum0(double a[], double u, int n){
    double res = 0;
    for (int i = 0; i < n; i++){
        res += a[i] + u;
    }
    return res;
}
double sum1(double a[], double b[], int n){
    double res = 1;
    for (int i = 0; i < n; i++){
        res *= (a[i] - b[i]);
    }
    return res;
}

double sum1(double a[], double u, int n){
    double res = 1;
    for (int i = 0; i < n; i++){
        res *= (a[i] - u);
    }
    return res;
}

double sum2(double a[], double b[], int n){
    double res = 0;
    for (int i = 0; i < n; i++){
        res += a[i]*b[i];
    }
    return res;
}
double sum3(double a[], double b[], double u, int n){
    double res = 1;
    for (int i = 0; i < n; i++){
        res *= (a[i]*b[i] + u);
    }
    return res;
}
double sum4(double a[], double b[], double u[], int scale, int n){
    double res = 0;
    for (int i = 0; i < n; i++){
        res += a[i]*(pow(u[i], scale) + b[i]);
    }
    return res;
}



/////////////////////func_n_4

double dist(double x1, double y1, double x2, double y2){
    return sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
}
double perimeter(double x1, double y1, double x2, double y2, double x3, double y3){
    return dist(x1, y1, x2, y2) + dist(x3, y3, x2, y2) + dist(x1, y1, x3, y3);
}

void find_max(double a, double b, double c) { ///// мне лень учитывать ситуации когда равно
    int flag_a = 0, flag_b = 0, flag_c = 0;
    if ((a >= b) && (a >= c))
        cout << "num 1 is the max\n";
    else if ((b >= c) && (b >= a))
        cout << "num 2 is the max\n";
    else
        cout << "num 3 is the max\n";
}

//////////////////////func_n_6

double area(double x1, double y1, double x2, double y2, double x3, double y3){
    return 0.5*fabs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2));
}

void find_max_1(double a, double b, double c, double d) { ///// мне лень учитывать ситуации когда равно
    int flag_a = 0, flag_b = 0, flag_c = 0;
    if ((a >= b) && (a >= c) && (a >= d))
        cout << "num 123 is the max\n";
    else if ((b >= c) && (b >= a) && (b >= d))
        cout << "num 234 is the max\n";
    else if ((c >= d) && (c >= a) && (c >= b))
        cout << "num 134 is the max\n";
    else 
        cout << "num 124 is the max\n";
    
}

///////////////////////////////////////5 из файлика

double g1(double a, double b) {
    return (a*a + b*b)/((a+b)*(a+b) + 2*b*b +4);
}

///////////////////////////////////////6 из файлика
double t(double x) {
    double temp1 = x, temp2 = 1;
    double sum1 = temp1, sum2 = temp2;
    for (int i = 1; i <= 10; i++){
        temp1 *= x*x/(2*i*(2*i+1));
        temp2 *= x*x/(2*i*(2*i-1));
        sum1 += temp1;
        sum2 += temp2;
    }
    return sum1/sum2;
}

int main(){
//////////////////////////////////////////////
    // //2a
    // const int n = 3;
    // double u[n], w[n];
    // for (int i = 0; i < n; i++){
    //     cin >> u[i];
    // }
    // for (int i = 0; i < n; i++){
    //     cin >> w[i];
    // }
    // cout << "punkt a\n";
    // for (int i = 0; i < n; i++){
    //     double res_i = (pow(g(u[i], w[i]), 2) - g(u[i]+w[i], u[i] - w[i]))/g(w[i], 2.7);
    //     cout << res_i << " ";
    // }
    // //2b
    // cout << "\npunkt b\n";
    // for (int i = 0; i < n; i++){
    //     double res_i = g(f(g(u[i], f(u[i]))), u[i]);
    //     cout << res_i << " ";
    // }
///////////////////////////////////////////////////

    // /////////3
    // const int n = 3;
    // double a[n], b[n], y;
    // for (int i = 0; i < n; i++){
    //     cin >> a[i];
    // }
    // for (int i = 0; i < n; i++){
    //     cin >> b[i];
    // }
    // // //a
    // // if (sum2(a, b, n) > 0)
    // //     y = sum2(a, a, n);
    // // else  
    // //     y = sum1(b, b, n);

    // // //b
    // // double u, v;
    // // cout << "input u, v\n";
    // // cin >> u >> v;
    // // if (sum3(a, a, u*v, n) > 2.3)
    // //     y = sum3(a, b, u, n);
    // // else 
    // //     y = sum3(a, b, v, n);

    // // //в
    // // double u[n];
    // // cout << "input u[i]\n";
    // // for (int i = 0; i < n; i++){
    // //     cin >> u[i];
    // // }
    // // if (sum4(a, a, u, 1, n) > 0)
    // //     y = sum4(a, b, u, 2, n);
    // // else  
    // //     y = sum4(b, a, u, 3, n);
    
    // // //г
    // // y = sum0(a, -pow(sum1(b, a, n), 2), n)*sum0(b, -pow(sum1(a, b, n), 2), n) + sum1(a, 2.5, n) + sum1(b, 2.5, n);


    // cout << y << endl;


///////////////////////////////////////

    // //4
    // //a см выше
    // //б см выше
    // //в
    // double p1, p2, p3;
    // double x1, y1, x2, y2, x3, y3;

    // cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    // p1 = perimeter(x1, y1, x2, y2, x3, y3);

    // cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    // p2 = perimeter(x1, y1, x2, y2, x3, y3);

    // cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    // p3 = perimeter(x1, y1, x2, y2, x3, y3);  

    // find_max(p1, p2, p3);



//////////////////////////

    //6
    //a см выше

    // //б 
    // double s1, s2;
    // double x1, y1, x2, y2, x3, y3;
    // cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    // s1 = area(x1, y1, x2, y2, x3, y3);

    // cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    // s2 = area(x1, y1, x2, y2, x3, y3);
    // if (s1 > s2) cout << "1st is bigger\n";
    // else if (s2 < s1) cout << "2nd is bigger\n";
    // else cout << "1st and 2nd are equal\n";

    // //в
    // double s1, s2, s3, s4;
    // double x1, y1, x2, y2, x3, y3, x4, y4;
    // cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    // s1 = area(x1, y1, x2, y2, x3, y3);
    // s2 = area(x4, y4, x2, y2, x3, y3);
    // s3 = area(x1, y1, x4, y4, x3, y3);
    // s2 = area(x4, y4, x2, y2, x1, y1);

    // find_max_1(s1, s2, s3, s4);

    // //г
    // double s1, s2, s3, s4;
    // double x1, y1, x2, y2, x3, y3, x4, y4;
    // cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    // s1 = area(x1, y1, x2, y2, x3, y3);
    // s2 = area(x4, y4, x2, y2, x3, y3);
    // s3 = area(x1, y1, x4, y4, x3, y3);
    // s2 = area(x4, y4, x2, y2, x1, y1);

    // if (s1 < s2 +s3 +s4) cout << "YES\n";
    // else cout << "NO\n";



// ////////////////////////////////////////////
//     //5 из файлика
//     double a = 1, b = 2, t, s;
//     cin >> t >> s;
//     cout << g1(1.2, s) + g1(t, s) - g1(2*s - 1, s*t);

////////////////////////////////////////////
    // //6 из файлика
    // double y;
    // cin >> y;
    // cout << 1.7*t(0.25) + 2*t(1+y)/(6-t(y*y-1));






    return 0;
}
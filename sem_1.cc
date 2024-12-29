///////////1.5(ж)п
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout << "input n: ";
    cin >> n;

    double xj[3], xi[12], yi[12];

    for (int i = 0; i < n; i++){
        xi[i] = 0.4*i - 3.6;
        if (xi[i] < 0)
            yi[i] = sin(xi[i] + 1);
        else
            yi[i] = sin(xi[i] + 1)*sin(xi[i] + 1);
    }

    for (int j = 0; j < 3; j++){
        cout << "input x" << j+1 << ": ";
        cin >> xj[j];
        int temp = 0;
        while ((temp < n-1)  && !((xj[j] >= xi[temp]) && (xj[j] < xi[temp+1]))){
            temp++;
        }
        cout << "y" << j+1 << " = " << yi[temp] * (xj[j] - xi[temp+1])/(xi[temp] - xi[temp+1]) + 
            yi[temp+1] * (xj[j] - xi[temp])/(xi[temp+1] - xi[temp]) << endl;
    }


    return 0;
}
#include <iostream>
#include <fstream>

using namespace std;

void task_1(){
    ifstream f;
    f.open("t12.txt");
    int x = 0, i = 0;
    while( !f.eof()){
        f >> x;
        i++;
    }
    cout << i; 
}

void task_2() {
    ifstream fin;
    fin.open("t12.txt");
    ofstream fout;
    fout.open("t12_res.txt");
    int x = 0;
    while( !fin.eof()){
        fin >> x;
        fout << x << " ";
    }
}

void task_3(){
    ifstream fin;
    fin.open("t12.txt");
    ifstream fin1;
    fin1.open("t12_1.txt");
    ofstream fout;
    fout.open("t12_res.txt");
    int x = 0;
    while( !fin.eof()){
        fin >> x;
        fout << x << " ";
    }
    while( !fin1.eof()){
        fin1 >> x;
        fout << x << " ";
    }
}

void task_4(){
    ofstream f;
    f.open("t12_res.txt");
    int n = 0, x1 = 1, x2 = 1, x3 = 2;
    cin >> n;
    f << x1 << " " << x2 << " ";
    for (int i = 0; i < n; i++){
        x3 = x1 + x2;
        x1 = x2;
        x2 = x3;
        f << x3 << " ";
    }
}

void task_5(){
    ifstream f;
    f.open("t12.txt");
    int x = 0;
    f >> x;
    int min = x, max = x;
    while( !f.eof()){
        f >> x;
        if (min > x)
            min = x;
        if (max <  x)
            max = x;
    }
    cout <<"min: " << min << ", max: " << max << endl;
}

void task_6(){
    ifstream fin;
    fin.open("t12.txt");
    ifstream fin1;
    fin1.open("t12_1.txt");

    ofstream fout;
    fout.open("t12_res.txt");

    int x1 = 0, x2 = 0, x_prev = 0;
    fin >> x1;
    fin1 >> x2;
    // //пересечение
    // while(!fin.eof() && !fin1.eof()){
    //     if (x1 == x2){
    //         if (x1 != x_prev){
    //             fout << x1 << " ";
    //             x_prev = x1;
    //         }
    //         fin >> x1;
    //         fin1 >> x2;
    //     }
    //     else if (x1 > x2)
    //         fin1 >> x2;
    //     else
    //         fin >> x1;
    // }
}

int main(){
   task_6();



}
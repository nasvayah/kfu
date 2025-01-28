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
        //объединение
    bool fin_eof = false;
    bool fin1_eof = false;
    while (!fin_eof || !fin1_eof) {
        if (((x1 <= x2) || (fin1_eof)) && !fin_eof){
            if (x1 != x_prev) {
                fout << x1 << " ";
                x_prev = x1;
            }
            fin_eof = fin.eof();
            fin >> x1;
        } else {
            if (x2 != x_prev) {
                fout << x2 << " ";
                x_prev = x2;
            }
            fin1_eof = fin1.eof();
            fin1 >> x2;
        }   
    }
    fin.close();
    fin1.close();
    fout.close();


}

void task_7(){
    ifstream fin;
    fin.open("t12_1.txt");
    ofstream fout;
    fout.open("t12_res.txt");
    int x_prev, x;
    fin >> x_prev;
    fout << x_prev << " ";
    while (!fin.eof()){
        fin >> x;
        if (x != x_prev)
            fout << x << " ";
        x_prev = x;
    }
    fin.close();
    fout.close();
}

void task_8(){
    ifstream fin;
    ofstream fout_plus;
    ofstream fout_minus;
    fin.open("t12_1.txt");
    fout_plus.open("t12_1_plus.txt");
    fout_minus.open("t12_1_minus.txt");
    int x;
    while (!fin.eof()){
        fin >> x;
        if (x >= 0)
            fout_plus << x << " ";
        else 
            fout_minus << x << " ";
    }
    fin.close();
    fout_plus.close();
    fout_minus.close();


    ifstream fin_plus;
    ifstream fin_minus;
    fin_plus.open("t12_1_plus.txt");
    fin_minus.open("t12_1_minus.txt");

    fin_plus >> x;
    while (!fin_plus.eof()){
        
        cout << x << " ";
        fin_plus >> x;
    }
    cout << endl;
    fin_minus >> x;
    while (!fin_minus.eof()){
        cout << x << " ";
        fin_minus >> x;
    }
    cout << endl;
    fin_plus.close();
    fin_minus.close();



}

int main(){
   task_8();



}

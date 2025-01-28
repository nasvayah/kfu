#include <iostream>
using namespace std;


int n = 5;
void enter_mas(int a[]){
    cout << "vvedite massiv a:\n";
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
}

void output_mas(int a[]){
    cout << "sorted mas:\n";
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void task_1(){
    int a[n] = {0};
    enter_mas(a);
    bool b = false;
    int n_copy = n-1;
    while(!b){
        b = true;
        for (int i = 0; i < n_copy; i++){
            if (a[i] > a[i+1]){
                swap(a[i], a[i+1]);
                b = false;
            }
        }
        n_copy--;
    }
    output_mas(a);
}


void task_2(){
    int a[n] = {0};
    enter_mas(a);
    int start = 0;
    for (int i = 0; i < n-1; i++){
        int minimal = i;
        for (int j = start; j < n; j++){
            if (a[j] < a[i])
                minimal = j;
        }
        swap(a[i], a[minimal]);

        start++;
    }
    output_mas(a);    
}

void task_3(){
    int a[n] = {0};
    enter_mas(a);
    for (int i = 1; i < n; i++){
        if (a[i-1] >  a[i]){
            int j = i-1;
            while ((j>0) && (a[j-1] > a[i]))
                j--;
            int temp = a[i];
            for(int k = i-1; k >=j; k--)
                a[k+1] = a[k];
            a[j] = temp;
        }
    }
    output_mas(a);    
}



int main(){
    task_3();


    return 0;
}

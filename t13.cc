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

void task_4(){
    cout << "enter k:\n";
    int k;
    cin >> k;
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
    cout << a[k-1];       
}


void task_5(){
    int a[n] = {0};
    enter_mas(a);
    int pivot;
    cout << "enter pivot:\n";
    cin >> pivot;

    int l = 0;
    int r = n-1;
    while (l < r){
        cout << a[l] << " " << l << " "  << a[r] << " " << r << endl;
        if (a[l] < pivot)
            l++;
        else if (a[r] > pivot)
            r--;
        else{
            swap(a[l], a[r]);
        }
    }       
    output_mas(a);
}

void task_6(){
    int a[n] = {0};
    enter_mas(a);
    int target;
    cout << "enter target:\n";
    cin >> target;

    bool flag = false;
    for (int i = 0; (i < n) && !flag; i++){
        if (a[i] == target)
            flag = true;
    }
    if (flag)
        cout << "YES\n";
    else    
        cout << "NO\n";
}

void task_7(){
    int a[n] = {0};
    enter_mas(a);
    int target;
    cout << "enter target:\n";
    cin >> target;

    bool flag = false;
    for (int i = 0; (i < n) && a[i] <= target; i++){
        if (a[i] == target)
            flag = true;
    }
    if (flag)
        cout << "YES\n";
    else    
        cout << "NO\n";
}




int main(){
    task_7();


    return 0;
}

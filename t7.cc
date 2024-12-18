#include <iostream>
#include <cmath>
using namespace std;

int main(){

    const int n = 5;
    int a[n] = {0};
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    // //1
    // int i = 0, x;
    // cin >> x;
    // for(; (i < n)&&(a[i] < x); i++){
    // }
    // if (a[i] == x)  cout << i << endl;
    // else cout << "NO" << endl;

    // //2
    // int l = 0, r = n-1, x;
    // cin >> x;
    // int flag = 1, mid;
    // while (flag && (l<=r)){
    //     mid = (l + r) / 2;
    //     if (a[mid] > x)
    //         r = mid-1;
    //     else if (a[mid] < x)
    //         l = mid+1;
    //     else
    //         flag = 0;
    // }
    // if (a[mid] == x)  cout << mid << endl;
    // else cout << "NO" << endl;


    // //3
    // const int m = 6;
    // int b[m] = {0}, c[m+n] = {0};
    // for (int i = 0; i < m; i++){
    //     cin >> b[i];
    // }
    // int ia = 0, ib = 0, ic = 0;
    // for (; ib < m; ib++){
    //     while ((ia < n) && (a[ia] <= b[ib])){
    //         if ((ic == 0) || ((ic != 0) && (a[ia] != c[ic-1]))){
    //             c[ic] = a[ia];
    //             ic++;
    //         }
    //                         ia++;
    //     }
    //     if ((ic == 0) || ((ic != 0) && (b[ib] != c[ic-1]))){
    //         c[ic] = b[ib];
    //         ic++;
    //     }
    // }
    // for(int i=0;i<ic;i++)
    //     cout<<c[i]<<' ';

    // //4
    // const int m = 6;
    // int b[m] = {0}, c[m+n] = {0};
    // for (int i = 0; i < m; i++){
    //     cin >> b[i];
    // }
    // int ia = 0, ib = 0, ic = 0;
    // for (; ib < m; ib++){
    //     while ((ia < n) && (a[ia] < b[ib])){
    //                         ia++;
    //     }
    //     if ((a[ia] == b[ib]) && ((ic == 0) || ((ic != 0) && (a[ia] != c[ic-1])))){
    //             c[ic] = a[ia];
    //             ic++;
    //         }
    // }
    // for(int i=0;i<ic;i++)
    //     cout<<c[i]<<' ';

    // //5
    // const int m = 6;
    // int b[m] = {0}, c[m+n] = {0};
    // for (int i = 0; i < m; i++){
    //     cin >> b[i];
    // }
    // int ia = 0, ib = 0, ic = 0;
    // for (; ib < m; ib++){
    //     while ((ia < n) && (a[ia] < b[ib])){
    //         ia++;
    //     }
    //     if ((a[ia] != b[ib])&& ((ic == 0) || ((ic != 0) && (b[ib] != c[ic-1])))){
    //         c[ic] = b[ib];
    //         ic++;
    //     }
    // }
    // for(int i=0;i<ic;i++)
    //     cout<<c[i]<<' ';

    //6
    const int m = 6;
    int b[m] = {0}, c[m+n] = {0};
    for (int i = 0; i < m; i++){
        cin >> b[i];
    }
    int ia = 0, ib = 0, ic = 0;
    for (; ib < m; ib++){
        while ((ia < n) && (a[ia] <= b[ib])){
            if ((a[ia] != b[ib]) && ((ic == 0) || ((ic != 0) && (a[ia] != c[ic-1])))){
                c[ic] = a[ia];
                ic++;
            }
            ia++;
        }
        if ((((ic != 0) && (a[ia-1] != b[ib]) )|| (ic == 0))&& ((ic == 0) || ((ic != 0) && (b[ib] != c[ic-1])))){
            c[ic] = b[ib];
            ic++;
        }

    }
    for (; ia < n; ia++){
        c[ic] = a[ia];
        ic++;
    }
    for(int i=0;i<ic;i++)
        cout<<c[i]<<' ';








    return 0;
}
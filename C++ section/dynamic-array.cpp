//dynaminc array input 
#include <bits/stdc++.h>
using namespace std;
int *fun(){
    int *a =new int[5];//dynamic array input
    for(int i =0;i < 5;i++){
        cin >> a[i];
    }
    return a;
}
int main (){
    int *p =fun () ;
    for(int i =0; i < 5;i++){
        cout <<p[i]<<" ";
    }
    
    return 0;

}
#include <bits/stdc++.h>
using namespace std;
int  *get_array(int n){
    int *s = new int[n];
    for(int i = 0 ;i < n ; i++){
       cin >> s[i];
    }
    return s;
}
int main ()
{ 
int n;
cin >> n;
int *p = get_array(n);
for(int i =0; i < n ; i++){
    cout << p[i] << " ";
}

return 0;
}
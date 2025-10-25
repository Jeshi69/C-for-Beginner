//solve using swap function
#include <bits/stdc++.h>
using namespace std;
int main ()
{ 
int n;
cin >> n;
int a[n];
for (int i = 0; i < n ; i++){
    cin >> a[i];
}

for(int i =0; i < n /2; i++){//ordhek array porjonto nibo
    swap(a[i],a[n-i-1]);//swap kortese
}
for (int i = 0; i < n ; i++){
    cout << a[i] <<" ";//array print
}

return 0;
}
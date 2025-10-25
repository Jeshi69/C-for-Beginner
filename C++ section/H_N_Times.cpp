//using funtion
#include <bits/stdc++.h>
using namespace std;
void fun(int r,char s){
   for(int i =0 ; i < r ; i ++ ){
    cout << s<< " ";
   } 
   cout << endl;
}
int main ()
{ 
int t ;
cin >> t;
while(t--){
    int n ;
    cin >> n;
    char ch;
    cin >> ch;
    fun(n,ch);
}
return 0;
}
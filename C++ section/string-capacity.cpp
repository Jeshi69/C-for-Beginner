#include <bits/stdc++.h>
using namespace std;
int main ()
{ 
string s= "Hello world";
cout << s.size()<< endl;
cout << s.capacity()<<endl;
cout <<s.max_size()<<endl;
// s.clear();
// cout << s.size()<<endl;
// s.resize(14);
// cout << s.size()<<endl;
cout << *s.begin()<<endl;
cout << *(s.end()-1  )<<endl;
return 0;
}
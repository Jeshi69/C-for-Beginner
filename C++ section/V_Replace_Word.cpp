#include <bits/stdc++.h>
using namespace std;

int main() 
{ 
    string s;
    cin >> s;

    string target = "EGYPT";
    string replacement = " ";

    size_t pos;
    while ((pos = s.find(target)) != string::npos) {
        s.replace(pos, target.size(), replacement);
    }

    cout << s << endl;

    return 0;
}

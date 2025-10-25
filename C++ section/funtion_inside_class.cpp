#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll;
    student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }
    void hello()
    {
        cout << "Hello" << name <<endl;;
    }
};
int main()
{
    student rakib("Rakib Ahmed", 10);
    rakib.hello();
    student sakib("sakib Ahmed", 20);
    sakib.hello();
    return 0;
}
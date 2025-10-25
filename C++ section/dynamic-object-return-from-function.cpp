// constructor use kore student data

#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int roll;
    int cls;
    double gpa;

    student(int roll, int cls, double gpa) // create constructor
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
student* fun() // return function;
{
    student* karim = new student(2, 5, 4.24);//dynamic memory
    
    return karim;
}
int main()
{

    student* p= fun();

    cout << p->roll << " " << p->cls<< " " << p->gpa << " ";
    return 0;
}
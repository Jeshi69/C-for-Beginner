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
int main()
{
    student rahim(45, 5, 3.2);

    student karim(2, 5, 4.24);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << " " << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << " ";
    return 0;
}
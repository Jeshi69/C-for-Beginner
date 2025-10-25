#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;
    // constructor
    student(string n, int r, char sec, int m, int c)
    {
        name = n;
        roll = r;
        section = sec;
        math_marks = m;
        cls = c;
    }
};
int main()
{ // 3 object create
    student s1("jeshi", 5, 'A', 95, 5);
    student s2("jannat", 3, 'A', 45, 5);
    student s3("jaid", 1, 'A', 75, 5);

    student topper = s1; // assume first is topper
    if (s2.math_marks > topper.math_marks)
    {
        topper = s2;
    }
    if (s3.math_marks > topper.math_marks)
    {
        topper = s3;
    }

    cout  << topper.name <<" "<< topper.math_marks  << endl;



    return 0;
}
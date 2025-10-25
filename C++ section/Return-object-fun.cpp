//  return  object function

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
student fun ()//return function;
{
  student karim(2, 5, 4.24);  
  return karim;
}
int main()
{
    student rahim(45, 5, 3.2);
student obj=fun ();
   

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << " " << endl;
    cout << obj.roll << " " << obj.cls << " " << obj.gpa << " ";
    return 0;
}
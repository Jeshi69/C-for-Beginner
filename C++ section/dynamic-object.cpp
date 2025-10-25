// constructor use kore dynamic object

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

    student rahim(45,5,3.2);//static object 
     student* karim = new student(10,4,4.46);//dynamic object
cout << rahim.roll << " "<<rahim.cls<< " "<<rahim.gpa << " "<< endl;
cout << karim->roll << " "<<karim->cls<< " "<<karim->gpa << " "<<endl;   
 return 0;
}
//constructor use kore student data

#include <bits/stdc++.h>
using namespace std;
class student{
    public:
    int roll;
    int cls;
    double gpa;

    student(int r,int c,double g) //create constructor
    { 
        roll = r;
        cls = c;
        gpa = g;

    }

};
int main ()
{ 
    int r;
    int c;
    double g;
    cin >> r >> c>> g;

student rahim( r,c,g);

cin >>r >> c >> g;
student karim(r,c,g);


cout << rahim.roll << " "<<rahim.cls<< " "<<rahim.gpa << " "<< endl;
cout << karim.roll << " "<<karim.cls<< " "<<karim.gpa << " "<<endl;
return 0;
}
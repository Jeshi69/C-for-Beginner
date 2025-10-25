//use class and object

#include <bits/stdc++.h>
using namespace std;
class student{     //class create
    public:
    char name[100]; // 100byte 
    int roll;       // b4yte
    double cgpa;    //8 byte
};
int main (){
student a, b;//stdudent class er 2 ta variable declare
cin.getline(a.name,100);  /* শুরুতে প্রথম অবজেক্টের নাম ইনপুট নেয়া হচ্ছে।
                          নামের মধ্যে স্পেস থাকতে পারে তাই গেটলাইন দিয়ে ইনপুট নেওয়া হয়েছে। */
cin>>a.roll >>a.cgpa;
getchar();     /* প্রথম অবজেক্টের রোল এবং সিজিপিএ 
             ইনপুট দেওয়ার পর একটি এন্টার দেওয়া হবে তারপর দ্বিতীয়
            অবজেক্টের নাম ইনপুট দেওয়া হবে। সেই এন্টারটি ইগনোর করার জন্য getchar() ইউজ করা হয়েছে। */

cin.getline(b.name,100);// দ্বিতীয় অবজেক্টের নাম ইনপুট নেয়া হyecehe.
cin >> b.roll>>b.cgpa;

cout <<a.name <<" "<<a.roll <<" "<<a.cgpa<<endl;
cout <<b.name <<" "<<b.roll <<" "<<b.cgpa<<endl;
}

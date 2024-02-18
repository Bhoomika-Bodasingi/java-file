#include<iostream>
using namespace std;
class Student
{
    public:
    string fullName;
    int rollNum;
    double semPerentage;
    string collegeName;
    int collegeCode;
    Student()
    {
    cout<<"Student class initialized!!\nIam a student\n";
    }
    ~Student(){}
};
int main()
{
    Student bhoomi;
    cout<<"Enter your name : ";
    cin>>bhoomi.fullName;
    cout<<"Enter your roll number : ";
    cin>>bhoomi.rollNum;
    cout<<"Enter your sem percentage : ";
    cin>>bhoomi.semPerentage;
    cout<<"Enter your college name : ";
    cin>>bhoomi.collegeName;
    cout<<"Enter your college code : ";
    cin>>bhoomi.collegeCode;
    cout<<"Name : "<<bhoomi.fullName<<endl;
    cout<<"RollNum : "<<bhoomi.rollNum<<endl;
    cout<<"SemPercentage : "<<bhoomi.semPerentage<<endl;
    cout<<"CollegeName : "<<bhoomi.collegeName<<endl;
    cout<<"CollegeCode : "<<bhoomi.collegeCode<<endl;
    return 0;
}




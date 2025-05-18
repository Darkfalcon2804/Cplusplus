#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class  Subject{
    public:
    string subjname;
    int credit;
    float gradepoint;
    //constructor
    Subject(string name,int cr,float gp){
        subjname=name;
        credit=cr;
        gradepoint=gp; 
    }
};
class Student{
public:
string name;
vector<Subject>subjects;
//constructor
Student(string student_name){
    name=student_name;
}
void addSubjects(string subjname,int credit,float gradepoint){
    Subject newSubject(subjname,credit,gradepoint);
    subjects.push_back(newSubject);
}
float calculatecgpa(){
    int totalcredit=0;
    float weightgradepoint=0;
    for(const Subject & subject:subjects){
    totalcredit+=subject.credit;
    weightgradepoint+=subject.credit*subject.gradepoint;
    }
    return (totalcredit>0)?(weightgradepoint/totalcredit):0;
}
void displaycgpa(){
cout<<"Student name: "<<name<<endl;
float cgpa=calculatecgpa();
cout<<"CGPA: "<<cgpa<<endl;
}
//void addSubject(string subjectname,int credit,float gradepoint);
};
int main(){
    string student_name;
    cout<<"Enter student name: ";
    getline(cin,student_name);
    int numsub;
    cout<<"Enter the number of subjects: ";
    cin>>numsub;
    Student student(student_name);
    for(int i=0;i<numsub;i++){
        string subjname;
        int credit;
        float gradepoint;
        cout<<"Enter the subject's name: ";
        cin.ignore();
        getline(cin,subjname);
        cout<<"Enter the credit"<<" for "<<subjname<<": ";
        cin>>credit;
        cout<<"Enter the gradepoint"<<" for "<<subjname<<": ";
        cin>>gradepoint;
        student.addSubjects(subjname,credit,gradepoint);
    }
    student.displaycgpa();
}
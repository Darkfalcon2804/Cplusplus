//////Q.Take input percentage of a student and print the grade according to marks??
////1)81-100 very good
////2)61-80 good
////3)41-60 Average
////4)<=40 Fail


#include<iostream>
using namespace std;
int main(){
    int percent;
    cout<<"Enter your percentage: ";
    cin>>percent;
    if(percent>=81) cout<<"Very Good"<<endl;
    else if(percent>=61) cout<<"Good"<<endl;
    else if(percent>=41) cout<<"Average"<<endl;
    else if (percent<=40) cout<<"Fail"<<endl;
}
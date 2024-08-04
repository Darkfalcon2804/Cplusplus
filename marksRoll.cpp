//////Write a program to store roll number and marks obtained by n students side by side in a matrix???
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    int arr[n][2];
    cout<<"Enter the Marks of student: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<<"The marks of student are: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cout<<" "<<arr[i][j];
        }
        cout<<endl;
}}
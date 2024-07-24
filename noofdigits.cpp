//////Q.Write an program to check no for digit??
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int no,count;
    count=0;
    while(n>0){
     n/=10;
     count++;
    }
    cout<<"Numbers of digits: "<<count<<endl;
}
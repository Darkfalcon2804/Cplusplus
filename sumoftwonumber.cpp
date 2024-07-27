//////Print the sum of two number??
#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int main(){
    int x;
    cout<<"Enter first number: ";
    cin>>x;
    int y;
    cout<<"Enter second number: ";
    cin>>y;
    int m=sum(x,y);
    cout<<"Sum of two number is "<<m<<endl;
}
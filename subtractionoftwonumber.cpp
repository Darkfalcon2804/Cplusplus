//////Print subtraction of two number??
#include<iostream>
using namespace std;
int sub(int x,int y){
    return x-y;
}
int main(){
    int a;
    cout<<"Enter the first number: ";
    cin>>a;
    int b;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"The subtraction of two number is: "<<sub(a,b)<<endl;

}
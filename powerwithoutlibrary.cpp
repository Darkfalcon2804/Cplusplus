///////Make a function which calculates'a' raised to the power 'b' using recursion??
#include<iostream>
using namespace std;
int pow(int x,int y){
    if(y==0) return 1;
    else return x*pow(x,y-1);
}
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    int b;
    cout<<"Enter the power you want to raise number by: ";
    cin>>b;
    cout<<pow(a,b)<<endl;    }

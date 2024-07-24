//////Wap to print sum of all the even digits of a given number??
#include<iostream>
using namespace std;
int main(){
    int n,sum;
    cout<<"Enter the number: ";
    cin>>n;
    sum=0;
    while(n>0){
        int ld=n%10;
        n/=10;
        if(ld%2==0){
        sum+=ld;}
    }
    cout<<"Sum of digit: "<<sum<<endl;
}
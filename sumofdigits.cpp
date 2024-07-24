//////WAP to print sum of digits of a given number??
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
        sum+=ld;
    }
    cout<<"Sum of digit: "<<sum<<endl;
}
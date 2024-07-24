//////Q.WAP to print the product of all  digits of a given number???
#include<iostream>
using namespace std;
int main(){
    int n,pro;
    cout<<"Enter the number: ";
    cin>>n;
    pro=0;
    while(n>0){
        int ld=n%10;
        n/=10;
        pro+=ld;
    }
    cout<<"Product of digit: "<<pro<<endl;
}

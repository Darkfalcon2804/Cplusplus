//////Q.Wap to print reverse a given number??
#include<iostream>
using namespace std;
int main(){
    int ld,rev,n;
    cout<<"Enter the number: ";
    cin>>n;
    rev=0;
    while(n>0){
        int ld=n%10;
        n/=10;
        rev*=10;
        rev+=ld;
    }
    cout<<"Reverse of given number: "<<rev<<endl;
}
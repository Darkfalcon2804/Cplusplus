//Fibonacci Series without Recursion
#include<iostream> 
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the number: ";
    cin >>n;
    int a=0;
    int b=1;
    cout<<a<<" "<<b;
    for(int i=1;i<=n;i++){
        int nextNumber=a+b;
        a=b;
        b=nextNumber;
        cout<<" "<<nextNumber;
    }
    cout<<endl;
    }

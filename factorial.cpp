//////Q.WAP to the factorial of a given number 'n'??

#include<iostream>
using namespace std;
int main(){
    int fact,n;
    cout<<"Enter the number: ";
    cin>>n;
    fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    cout<<fact<<endl;
}
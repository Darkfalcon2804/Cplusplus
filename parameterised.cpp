//////Print sum from 1to n(parameterised)??
#include<iostream>
using namespace std;
void sum(int n,int add){
    if(n==0){
        cout<<add<<endl;
        return;
    }
    sum(n-1,add+n);
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    sum(n,0);
}
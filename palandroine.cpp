//////Q.Wap to print paladroine number??
#include<iostream>
using namespace std;
int main(){
    int n,rev,ld,t;
    cout<<"Enter the number: ";
    cin>>n;
    rev=0,t=n;
    while(n>0){
    ld=n%10;
    rev=rev*10+ld;
    n/=10;
    }
    if(rev==t) cout<<"Number is paladroine"<<endl;
    else cout<<"Number is not paladroine"<<endl;
}
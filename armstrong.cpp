//////WAP to check a no is armstrong or not???

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,ld,count=0,AS=0,t;
    cout<<"Enter the number: ";
    cin>>n;
    t=n;
    while(n>0){
        ld=n%10;
        n/=10;
        count++;
    }
    n=t;
    while(n>0){
        ld=n%10;
        AS+=pow(ld,count);
        n/=10;
    }
    if(AS==t) cout<<"Arm Strong"<<endl;
    else cout<<"Not arm strong"<<endl;
}
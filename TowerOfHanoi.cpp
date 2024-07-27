//////Tower Of Hanoi??
#include<iostream>
#include<cmath>
using namespace std;
int p(int a,int n){
    return pow(a,n)-1;
}
void tower(int n,char s ,char h,char d){
    if(n==0) return;
    tower(n-1,h,s,d);
    cout<<s<<" => "<<d<<endl;
      tower(n-1,h,s,d);
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The minimum moves will be: "<<p(2,n)<<endl;
    tower(n,'A','B','C');
}
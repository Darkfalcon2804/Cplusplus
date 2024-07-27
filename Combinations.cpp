//////WAP to print Combinations??
#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
     return f;
}
int ncr(int n,int r){
    return fact(n)/(fact(r)*(fact(n-r)));
}
int main (){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int r;
    cout<<"Enter r: ";
    cin>>r;
    cout<<"The combination of "<<n<<" with respect to "<<r<<" is "<<ncr(n,r)<<endl;
}
//////WAP to print permutation??
#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}
int npr(int n,int r){
    return fact(n)/(fact(n-r));
    }
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int r;
    cout<<"Enter the r: ";
    cin>>r;
    cout<<"The permutation of "<<n<<" with respect to "<<r<<" is "<<npr(n,r)<<endl;
}
//////WAP to print pascaltriangle???
#include<iostream>
using namespace std;
int fact(int n){
int f=1;
for(int i=1;i<=n;i++) f*=i;
return f;
}
int ncr(int n,int r){
    return fact(n)/(fact(r)*(fact(n-r)));
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n-i;j++) cout<<" ";
        for(int k=0;k<=i;k++){
            cout<<" "<<ncr(i,k);
        }
         cout<<endl;
}
    }
   
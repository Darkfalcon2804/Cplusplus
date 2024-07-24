//////Print the star diamond??
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){cout<<" ";}
        for(int k=1;k<=i;k++) cout<<"*";
        for(int s=1;s<=i-1;s++) cout<<"*";
        cout<<endl;
    }
    for(int a=1;a<=n-1;a++){
        for(int b=1;b<=a;b++)cout<<" ";
        for(int c=1;c<=7-(2*a);c++) cout<<"*";
        cout<<endl;
    }
}
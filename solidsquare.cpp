//////Q.WAP to print square with n sides??

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter side of square: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
//////Print reverseright side star triangle??
#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"Enter number of rows of triangle: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int k=1;k<=n+1-i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}
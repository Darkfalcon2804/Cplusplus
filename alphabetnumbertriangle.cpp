//////Alphabet & Number Triangle??
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows of triangle: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
          if(i%2==0) 
          cout<<(char)(i+96);
          else 
          cout<<j;
        }
        cout<<endl;}
}
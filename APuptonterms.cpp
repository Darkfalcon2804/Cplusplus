//////Display this Ap-1,3,5,7,9 upto 'n' terms??
//// Ap-a1+(n-1)d
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1;i<=2*n-1;i=i+2){
        cout<<i<<" ";
    }
    cout<<endl;
}
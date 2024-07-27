//////Print even or odd number??
#include<iostream>
using namespace std;
void oddeven(int x){
    if(x%2==0) cout<<x<<" is even"<<endl;
    else cout<<x<<" is odd"<<endl;
}


int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    oddeven(a);
}
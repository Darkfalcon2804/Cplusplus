#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number:";
    cin>>x;
    if(x>=0){
        cout<<"Aboslute value: ";
        cout<<x<<endl;
    }
    else {
        x*=(-1);
        cout<<"Abosulte value: ";
        cout<<x<<endl;
    }
}
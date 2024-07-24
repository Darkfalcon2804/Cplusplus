//////Take 3 number input and tell if they can be the sides of a triangle??

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the value of one side : ";
    cin>>x;
    int y;
    cout<<"Enter the value of second side: ";
    cin>>y;
    int z;
    cout<<"Enter the value of third side: ";
    cin>>z;
    if(x+y>z && y+z>x && x+z>y) cout<<"Valid Triangle"<<endl;
    else cout<<"Invalid Triangle"<<endl;
}
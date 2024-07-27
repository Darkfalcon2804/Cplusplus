// //////Swap 2 numbers?? there are 2 methods 


// //////method 1= with the help of third variable

// #include<iostream>
// using namespace std;
// int swap(int x, int y){
// int temp=x;
// x=y;
// y=temp;
// cout<<"After swaping we get a="<<x<<" and b="<<y<<endl;
// }

// int main(){
// int a;
// cout<<"Enter the number: ";
// cin>>a;
// int b;
// cout<<"Enter the second number: ";
// cin>>b;
// swap(a,b);
// }

// //////Method 2=without third variable
#include<iostream>
using namespace std;
int swap(int x,int y){
    x=x+y;
    y=x-y;
    x=x-y;
    
    cout<<"After swaping number are "<<x<<" and "<<y<<endl;
}
    
    int main(){
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    int y;
    cout<<"Enter the second number: ";
    cin>>y;
    swap(x,y);
    }
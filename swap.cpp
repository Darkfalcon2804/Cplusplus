//////Swap 2 no by using function??
#include<iostream>
using namespace std;
void swap(int *x,int *y){
    int c=*x;
    *x=*y;
    *y=c;
}
int main(){
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    int y;
    cout<<"Enter the number: ";
    cin>>y;
   cout<<"Before swaping the number "<<x<<" and "<<y<<endl;
   swap(&x,&y);
    cout<<"After swaping the number are "<<x<<" and "<<y<<endl;
}
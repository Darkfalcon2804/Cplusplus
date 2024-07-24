#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"Enter length of rectangle: ";
    cin>>l;
     int b;
    cout<<"Enter breadth of rectangle: ";
    cin>>b;
    int area,perimeter;
    area=l*b;
    perimeter=2*(l+b);
    if(area>perimeter) cout<<"The area of rectangle is greater than its perimeter"<<endl;
    else cout<<"The perimeter of rectangle is greater than its area"<<endl;
}
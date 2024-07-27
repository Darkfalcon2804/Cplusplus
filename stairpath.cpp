//////Stair path?? condition single step,double step, triple step??
#include<iostream>
using namespace std;
int stair(int x){
    if(x<=2) return x;
    if(x==3) return 4;
    else return (stair(x-1)+stair(x-2)+stair(x-3));
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The number ways to climb stair is: "<<stair(n)<<endl;
}
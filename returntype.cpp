//////Return type??
#include<iostream>
using namespace std;
int min(int x,int y){
  if(x<y) return x;
  else return y;
}
int main(){
   int a;
   cout<<"Enter first number: ";
   cin>>a;
   int b;
   cout<<"Enter second number: ";
   cin>>b;
   int m=min(a,b);
   cout<<"Minimum between first number and second number is "<<m <<endl;

}
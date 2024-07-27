//////Print n to 1 using recursion??
#include<iostream>
using namespace std;
void count(int n){
    if(n==0) return;
    cout<<n<<endl;
    count(n-1);
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
 count(n);
}
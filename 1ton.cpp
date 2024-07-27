//////Print 1 to n using recursion???

////Method 1=Using extra parameter
// #include<iostream>
// using namespace std;
// void counting(int n,int x){
//     if(n>x) return;
//     else cout<<n<<endl;
//     counting(n+1,x);
// }
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     counting(1,n);
// }

//////Method 2=Without using extra parameter
#include<iostream>
using namespace std;
void cont(int n){
    if(n==0) return;
    cont(n-1);
    cout<<n<<endl;
}
 int  main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cont(n);
 }
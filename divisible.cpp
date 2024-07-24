////Q1.Take positive integer input and tell if it is divisible by 5 and 3??

// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter a number: ";
//     cin>>x;
//     if(x%5==0 && x%3==0){
//         cout<<"Divisible by 5 and 3"<<endl;
//     }
//     else cout<<"Not divisible by 5 and 3"<<endl;
// }

////Q2.Take positive integer input and tell if it is divisible by 5 or 3??
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    if(x%5==0 || x%3==0) cout<<"Divisible by 5 or 3"<<endl;
    else cout<<"Not divisible by 5 or 3"<<endl;
}
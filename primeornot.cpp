//////Q.Wap to check if a number is prime or not??
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int check=1;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){check=0;
        break;}
    }
    if(n==1) cout<<"Neither prime nor composite"<<endl;
    else if (check==1) cout<<"prime no"<<endl;
}
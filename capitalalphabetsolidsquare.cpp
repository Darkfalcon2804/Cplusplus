//////capital Alphabet solid square?? if we print j+64 we get ABCDE\nABCDE and we print i+64 we get AAAAA\nBBBBB

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
         cout<<(char)(i+64);
        }
        cout<<endl;
    }
}
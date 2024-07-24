//////Q.Wap to print the number solid square??//////if we print j we get 12345\n12345 but if we print i we get 11111\n222
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the side of square: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
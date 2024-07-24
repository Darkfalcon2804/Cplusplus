////If cost price and selling price of an item is input through the keyword,write a program to determine whether the seller has made profit 
////or incurred loss or no profit no loss.Also determine how much profit or loss he made???
#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter cost price:";
    cin>>cp;
    int sp;
    cout<<"Enter selling price:";
    cin>>sp;
    if(sp>cp){
        cout<<"profit of "<<sp-cp<<endl;
    }
   else if(cp>sp){
        cout<<"loss of "<<cp-sp<<endl;
    }
    else cout<<"No profit no loss"<<endl;
}
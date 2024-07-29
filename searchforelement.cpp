//////Search for an element in array??
#include<iostream> 
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter number you want search in array: ";
    cin>>x;
    for(int i=0;i<n;i++){
        if(arr[i]==x) {cout<<x<<" Exist in array"<<endl ;
        break;}
        if(i==4) {cout<<x<<" Not exist in array"<<endl;}
    }
    
}
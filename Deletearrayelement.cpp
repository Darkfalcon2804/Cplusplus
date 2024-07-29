//////Q)WAP to delte an array element from array??
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
    int loc;
    cout<<"Enter the location you want to delete element: ";
    cin>>loc;
    if(loc>n+1){cout<<"Delete not possible";}
    for(int i=loc-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    cout<<"After deleting the element: ";
    for(int i=0;i<n-1;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
}
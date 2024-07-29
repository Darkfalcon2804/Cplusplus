///////Find the second smallest element in array??
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(min>arr[i]) min=arr[i];
    }
    cout<<"Minimum element: "<<min<<endl;
    int smin=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]!=min && smin>arr[i])
        smin=arr[i];}
        cout<<"Second smallest: "<<smin<<endl;
}
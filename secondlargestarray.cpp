////Find the secondlargest element in given array??
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
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]) max=arr[i];
    }
    cout<<"Maximum element: "<<max<<endl;
    int smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=max && smax<arr[i])
        smax=arr[i];}
        cout<<"Second largest: "<<smax<<endl;
}
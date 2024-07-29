//////Given an integer n. Create an array containing squares of all natural numbers till n and print the elements of the array??
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        arr[i-1]=i*i;
    }
    cout<<"The array which contain squares of all natural number: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    }
//////Count the number of elements in given array greater than a given number X??
#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the number you want to compare: ";
    cin>>x;
    for(int i=0;i<n;i++){
        if(x<arr[i]) count++;
    }
    cout<<count<<endl;
}
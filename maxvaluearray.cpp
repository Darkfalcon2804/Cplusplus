//////Find the max value out of all the elements in the array??
//Method 1=By taking first element as max
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the total number of element of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx=arr[0];
    for(int i=0;i<n;i++){
        // if(arr[i]>max) max=arr[i];
        mx=max(mx,arr[i]);
    }
    cout<<"Maximum elements: "<<mx<<endl;
}
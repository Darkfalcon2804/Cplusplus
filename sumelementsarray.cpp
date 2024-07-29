//////Calculate the sum of all the elements in the given array??
#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"Enter the total number of element of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
       
    }
    cout<<"The array is: ";
    for(int i=0;i<n;i++){
        sum+=arr[i];
        cout<<arr[i]<<endl;
    }
    cout<<"The sum of array element is:"<<sum<<endl;
}
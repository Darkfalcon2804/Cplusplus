//////Calculate the product of all the elements in the given array??
#include<iostream>
using namespace std;
int main(){
    int n;
    int product=1;
    cout<<"Enter the total number of element of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
       
    }
    cout<<"The array is: ";
    for(int i=0;i<n;i++){
        product*=arr[i];
        cout<<arr[i]<<endl;
    }
    cout<<"The sum of array element is:"<<product<<endl;
}
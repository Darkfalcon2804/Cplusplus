///////WAP to Short array element in ascending order?
#include<iostream>
using namespace std;
int main(){
    int n,temp;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"The sorting element in acesending order: ";
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;

}
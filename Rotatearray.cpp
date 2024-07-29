//////Rotate the array??
////Rotate the given array 'a' by K steps where k is non negative???
#include<iostream>
using namespace std;
void reverse (int arr[],int si,int ei){
    for(int i=si,j=ei;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
   int k;
   cout<<"Enter the number by which you want to rotate array: ";
   cin>>k;
   int arr[n];
   cout<<"Enter the elements of array: ";
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   if(k>n) k%=n;
   reverse(arr,0,n-1);
   reverse(arr,0,k-1);
   reverse (arr,k,n-1);
   cout<<"Enter the elements after rotating: ";
   for(int i=0;i<n;i++){
    cout<<" "<<arr[i];
   }   
   cout<<endl;
}
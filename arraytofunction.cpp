//////Passing array to function??? Array pass by refrence hota hai
#include<iostream>
using namespace std;
void change(int x []){
    x[2]=90;
}
int main(){
    int n;
    cout<<"Enter number of element of array: ";
    cin>>n; 
int arr[n];
cout<<"Enter the element of array: ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
change(arr);
cout<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
}
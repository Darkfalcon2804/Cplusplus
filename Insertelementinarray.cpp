//////WAP to insert element in array??
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int loc;
    cout<<"Enter the location where you want to inseret element: ";
    cin>>loc;
    if(loc<1 || loc>n) cout<<"Insert of element not possible";
    int x;
    cout<<"Enter the number you want to insert in array: ";
    cin>>x;
    for(int i=n-1;i>loc-1;i--){
        arr[i+1]=arr[i];
    }
    arr[loc-1]=x;
    n++;
    cout<<"Element "<<x<<" inserted at position "<<loc<<"=";
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
    }
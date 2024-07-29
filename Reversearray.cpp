// //////Q)WAP to copy the contents of one array into another in the reverse order??
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of the array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of array: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int arr2[n];
//     cout<<"The elements of second array are: ";
//     for(int i=0;i<n;i++){
//         arr2[i]=arr[n-1-i];
//     }
//     for(int j=0;j<n;j++){
//         cout<<" "<<arr2[j];
//     }
//     cout<<endl;
// }





/////////Q)WAP to reverse the array without using an extra array??
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];}
        int i=0;
        int j=n-1;
        while(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;}
            for(int i=0;i<n;i++){
                cout<<" "<<arr[i];
            }
            cout<<endl;
}
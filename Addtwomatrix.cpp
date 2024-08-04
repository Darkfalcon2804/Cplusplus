///////Write a program to add matrix???
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int m;
    cout<<"Enter the number of columns: ";
    cin>>m;

    int arr1[n][m];
    cout<<"Enter the elements of first matrix: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr1[i][j];
        }
    }
    int arr2[n][m];
    cout<<"Enter the elements of two matrix: ";
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr2[i][j];
        }
    }

    int arr[n][m];
    cout<<"The sum of two matrix is: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        arr[i][j]=arr1[i][j]+arr2[i][j];
        cout<<" "<<arr[i][j];
        }
        cout<<endl;
    }

}
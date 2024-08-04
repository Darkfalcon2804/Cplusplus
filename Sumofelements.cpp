////////Find the sum of a given matrix of n*m??
#include<iostream>
using namespace std;
 int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int m;
    cout<<"Enter the number of columns: ";
    cin>>m;
    int sum=0;
    int arr[n][m];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            sum+=arr[i][j];
        }
    }
        cout<<"The sum of elements of matrix is: "<<sum<<endl;
 }
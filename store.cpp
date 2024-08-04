//////Wap to store n at every index of a 2D matrix with 5 rows and 5 columns??
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number you want at every index of 2D matrix: ";
    cin>>n;
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            arr[i][j]=n;
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<" "<<arr[i][j];
        }
        cout<<endl;
    }
}

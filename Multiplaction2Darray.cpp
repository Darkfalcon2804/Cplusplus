//////Wap to print the multiplication of two matrices given by the user??
#include<iostream>
using namespace std;
int main(){
    //////First array index
    int n;
    cout<<"Enter the number of rows of first array: ";
    cin>>n;
    int m;
    cout<<"Enter the number of columns of first array:  ";
    cin>>m;
    int arr[n][m];
    cout<<"Enter the elements of first array: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    //////Second array index
    int p;
    cout<<"Enter the number of rows of second array: ";
    cin>>p;
    int q;
    cout<<"Enter the number of columns of second array: ";
    cin>>q;
    int arr2[p][q];
    cout<<"Enter the elements of second array: ";
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++)
        {
            cin>>arr2[i][j];
        }
    }

    if(m!=p) cout<<"Matrix cannot get multiply"<<endl;
    else{
        ////Multiplication
        int res[n][q];
        for(int i=0;i<n;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k<m;k++){
                    res[i][j]+=arr[i][k]*arr2[k][j];
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<" "<<res[i][j];
            }
            cout<<endl;
        }
    }
    }

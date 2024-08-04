/////Find the max element of 2D array and also tell its location??
#include<iostream>
using namespace std;
 int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int m;
    cout<<"Enter the number of columns: ";
    cin>>m;
    int arr[n][m];
    cout<<"Enter the elements of array: ";
    for (int i = 0; i <n; i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int mx=arr[0][0];
    int mxrow=0;
    int mxcolumn=0;
    for (int i = 0; i <n; i++){
        for(int j=0;j<m;j++){
            // mx=max(mx,arr[i][j]);         ///////If you want to find maximum only then use this 
            if(arr[i][j]>mx)                 ///////If you max element + location of the element use if cndition  
             {
                mx=arr[i][j];
            mxrow=i;
            mxcolumn=j;}
        }
    }
    cout<<"Maximum element of array is: "<<mx<<endl;
    cout<<"The location of element is: "<<mxrow+1<<" "<<mxcolumn+1<<endl; ////////Here +1 is used because we start indexing with 0in array but for non coder personn it starts from 1.
 }
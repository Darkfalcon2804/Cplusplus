/////Find the min element of 2D array and also tell its location??
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
    int mi=arr[0][0];
    int mirow=0;
    int micolumn=0;
    for (int i = 0; i <n; i++){  
        for(int j=0;j<m;j++){
            // mi=min(mi,arr[i][j]);       ///////If you want to find maximum only then use this 
            if(arr[i][j]<mi)                 ///////If you max element + location of the element use if cndition  
             {
                mi=arr[i][j];
            mirow=i;
            micolumn=j;}
       }
     }
    cout<<"Minimum element of array is: "<<mi<<endl;
    cout<<"The location of element is: "<<mirow+1<<" "<<micolumn+1<<endl; ////////Here +1 is used because we start indexing with 0in array but for non coder personn it starts from 1.
 }
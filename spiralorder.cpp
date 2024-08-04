//////Given an n*m matrix 'a',print all elements of the matrix in spiral order??(leetcode-54)
/////Spiral order mean=
#include<iostream>
using namespace std;
int main(){
    //////First array index
    int m;
    cout<<"Enter the number of rows of array: ";
    cin>>m;
    int n;
    cout<<"Enter the number of columns of array:  ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the elements of first array: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int minr=0,maxr=m-1,minc=0,maxc=n-1,tne=m*n,count=0;
    while(count<tne){
        for(int j=minc;j<=maxc;j++){
            cout<<" "<<arr[minr][j];
            count++;
        }
        minr++;
        if(count>=tne) break;
        for(int i=minr;i<=maxr;i++){
            cout<<" "<<arr[i][maxc];
            count++;
        }
        maxc--;
        if(count>=tne) break;
        for(int j=maxc;j>=minc;j--){
            cout<<" "<<arr[maxr][j];
            count++;
        }
    maxr--;
    if(count>=tne) break;
    for(int i=maxr;i>=minr;i--){
        cout<<" "<<arr[i][minc];
        count++;
    }
    minc++;
    if(count>=tne) break;
    }
    cout<<endl;
    }



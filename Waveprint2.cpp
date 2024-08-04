//////Wave print 2??
//////Wave print??
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
        }}

//////Wave print 
cout<<"The wave print of matrix is: "<<endl;
for(int j=0;j<m;j++){
    if(j%2==0){
    for(int i=m-1;i>=0;i--){
        cout<<" "<<arr[j][i];
    }
    }
else{
    
    for(int i=0;i<m;i++){
        cout<<" "<<arr[j][i];}
}
cout<<endl;
}

}

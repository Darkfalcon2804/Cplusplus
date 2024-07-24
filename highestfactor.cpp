//////Q.Find the highest factor of a given number 'n'??
////method1
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     int hf=1;
//     for(int i=1;i<=n-1;i++){
//         if(n%i==0) hf=i;
//     }
//     cout<<"Highest factor is "<<hf<<endl;
// }

////method 2
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int hf=1;
    for(int i=n/2;i>=1;i--){
        if(n%i==0){hf=i;
        break;
        }
    }
    cout<<hf<<endl;
}
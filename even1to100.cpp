////Q)Print all the even number from 1 to 100??
////method 1
// #include<iostream>
// using namespace std;
// int main()
// {
//  for(int i=1;i<=100;i++){
//     if(i%2==0) cout<<" "<<i;
//  }
//  cout<<endl;
// }

////method 2
#include<iostream>
using namespace std;
int main(){
    for(int i=2;i<=100;i=i+2){
        cout<<" "<<i;
    }
    cout<<endl;
}
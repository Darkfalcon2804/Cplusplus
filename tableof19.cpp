////Q.print table of 19??
////method 1
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=190;i++){
//         if(i%19==0){
//             cout<<" "<<i;
//         }
//     }
//     cout<<endl;
// }
////method 2
#include<iostream>
using namespace std;
int main(){
    for(int i=19;i<=190;i+=19){
        cout<<" "<<i;
    }
    cout<<endl;
}
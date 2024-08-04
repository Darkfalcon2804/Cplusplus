//////Input a string and count all the vowwels in the given string??


#include<iostream>
using namespace std;
int main(){
    int count=0;
string str;
cout<<"Enter the string: ";
getline(cin,str);
int n=str.length();
for(int i=0;i<n;i++){
    if(str[i]=='a' || str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A' || str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U') {
        count++;
    }
}
cout<<"The count of vowels in the given string is: "<<count<<endl;
}
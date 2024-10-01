// Calculate power of a number
#include<iostream>
using namespace std;
 int main()
 {
    int num,power;
    cout<<"Enter number:";
    cin>>num;
    cout<<"Enter power:";
    cin>>power;
    int n;
  n=num;
    for(int i=1;i<power;i++){
    num=num*n;
 
    }
       cout<<num;
 }

// Print Sum of cube of first n natural number
#include<iostream>
using namespace std;
  int main()
  {
    int num,sum=0;
    cout<<"Enter number:";
    cin>>num;
    for(int i=0;i<=num;i++){
sum=sum+i*i*i;
    }
    cout<<"Sum of cube of natural number:"<<sum;
  }
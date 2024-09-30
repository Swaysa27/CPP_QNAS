// Print n’th Fibonacci number.
#include<iostream>
using  namespace std ;
int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;
int num1=0,num2=1,num3;
cout<<num1<<"  "<<num2<<"  ";
for(int i=2;i<num;i++){
    num3=num1+num2;
    num1=num2;
    num2=num3;
     cout<<num3<<"  ";
}
cout<<endl;
cout<<num3;
}
 
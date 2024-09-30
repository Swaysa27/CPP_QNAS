// Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.
#include<iostream>
using namespace std;
 int main()
 {
    int month;
    cout<<"Enter month bbetween 1 to 12:";
    cin>>month;
    if(month==1){
        cout<<"JANUARY";
    }
    else if(month==2){
        cout<<"FEBRUARY";
    }
    else if(month==3){
        cout<<"MARCH";
    }
    else if(month==4){
        cout<<"APRIL";
    }
    else if(month==5){
        cout<<"MAY";
    }
    else if(month==6){
        cout<<"JUNE";
    }
    else if(month==7){
        cout<<"JULY";
    }
    else if(month==8){
        cout<<"AUGUST";
    }
    else if(month==9){
        cout<<"SEPTEMBER";
    }
    else if(month==10){
        cout<<"OCTOBER";
    }
    else if(month==11){
        cout<<"NOVEMBER";
    }
    else if(month==12){
        cout<<"DECEMBER";
    }
 }
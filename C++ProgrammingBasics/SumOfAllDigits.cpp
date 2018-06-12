#include <iostream>
using namespace std ; 
int main(){
    int a,b,rem , sum = 0; 
     cout<<"Enter the number"<<endl  ; 
     cin>>a ;
     b = a ;  
     while(b>0){
rem = b%10 ; 
sum = sum + rem ; 
b = b/10 ; 
     }
  
     cout<<"The sum of the digits of "<<a<<" is "<<sum<<endl  ; 
     return 0 ; 
}
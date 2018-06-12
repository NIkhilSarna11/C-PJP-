#include <iostream>
using namespace std ; 
int main(){

int a , num1 , num2 = 0 ; 
cout<<"Enter a number"<<endl ; 
cin >>a ; 
while(a>0){

num1 = a%10 ; 
num2 = num2  + (num1  + 1) ; 
a = a/10 ;  

}

cout<<"Result is "<<endl<<num2<<endl ; 


    return 0 ; 
}
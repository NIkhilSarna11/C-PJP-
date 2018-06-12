#include <iostream>
using namespace std ; 
int main(){

    int a ,b, rev = 0 , rem ; 
    cout<<" Enter the number"<<endl  ; 
    cin>>a ;
 b =a ; 
if(b>9){
         while(b>0)
         {
rem = b%10 ; 
rev = (rev*10)  + rem ; 
b = b/10 ; 
         }

  
if(rev==a){
    cout<<"Number is Palindrome"<<endl ; 
}
else{
    cout<<"Number is not palindrome"<<endl ; 
}
}
else{
    cout<<"Enter the two digit number"<<endl ; 
}
}
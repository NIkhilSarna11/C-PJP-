#include <iostream>
using namespace std ; 
int main()
{
    int a , b ; 
    int  fact = 1 ; 
    cout<<"Enter the number"<<endl ; 
    cin>>a ;
    b = a ;  
    if(b == 0){
        cout<<"Factorial is 1"<<endl ; 
    }
    else{
    while(b>0){
fact = fact*b ; 
 b-- ; 

    }
    cout<<"Factorial of "<<a<<" is "<<fact<<endl ; 
    }
return 0 ; 
}
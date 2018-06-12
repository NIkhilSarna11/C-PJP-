#include <iostream>
using namespace std ; 
int main()
{
    int a, rem , rev = 0 ; 
    cout<<"Enter the number"<<endl ; 
    cin>>a ; 
    while(a>0){
    rem = a%10 ; 
    rev = (rev*10) + rem ; 
    a = a/10 ; 
    }
    cout<<"Reversed number is"<<endl<<rev<<endl ; 
    return 0 ;  
}
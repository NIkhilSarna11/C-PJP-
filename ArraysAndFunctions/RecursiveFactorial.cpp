#include<iostream>
using namespace std ; 

int fact(int a) ;  

int main(){

int a ; 
cout<<"Enter the positive number"<<endl ; 
cin>>a ; 
int f = fact(a) ; 
cout<<"Factorial of "<<a<<" is "<<f<<endl ; 

return 0 ; 
}

int fact(int a){

    if(a == 0 || a==1){
        return 1 ; 
    }
    else{
        return (a*fact(a-1)) ; 
    }
}

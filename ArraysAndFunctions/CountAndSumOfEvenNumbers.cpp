#include <iostream>
using namespace std ; 
int main(){
    int a[20] ,sum = 0, c = 0 ; 
    cout<<"Enter the 20 elements"<<endl ; 
     for(int i = 0 ; i  < 10 ; i++){
         cin>>a[i] ;
     }
     for(int i = 0 ; i < 10 ; i++){
         if(a[i]%2 == 0){
          
          sum = sum + a[i]  ;
            
             c++ ; 
         }
     }
cout<<"Number of even integers are "<<endl<<c<<endl ;
cout<<"Sum of the even numbers are "<<endl<<sum<<endl ; 

    return 0 ; 
}
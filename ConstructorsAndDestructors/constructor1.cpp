#include<iostream>
using namespace std ; 
class Rectangle {
      
      public: 
      int i,j,arr ; 
      Rectangle(int length,int breadth){
          i =length ; 
          j = breadth ;
      }
      int area() { 

           arr = i*j ;
           return arr ;  
      }
      

} ; 
int main(){

    Rectangle r1 = Rectangle(10,20) ;
    cout<<r1.area()<<endl ;  

    return 0 ; 
}
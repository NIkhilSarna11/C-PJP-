#include<iostream>
using namespace std ; 
int main(){

    int a , temp,temp2 , b ; 
    int z = 3245 ;
    int arr1[4] , arr2[4] ;
    
    int c,d , i = 0 ;
    
    cin>>a ; 
    b= a ; 

     while(b>0){
        c = b%10 ;
        temp = c ; 
        b = b/10 ; 
        arr1[i] = temp ;
        i++ ;  
     } 
    
      for(int l = 0 ; l < 4 ; l++){
          for(int j = 0 ; j < 4 ; j++){
                 if(arr1[l]<arr1[j]){
                         temp2 = arr1[l];  
                         arr1[l] = arr1[j] ; 
                         arr1[j] = temp2  ;
                 }

          }
      }
      

      int largest = arr1[3] ; 
      cout<<"The largest number is "<<largest<<endl ; 


}
#include <iostream>
#include<string.h>
#include<stdio.h>
using namespace std ; 
int main(){

    char name[10][10] , t[10]  ; 
    for(int i = 0 ; i < 10 ; i++){
    cin>>name[i] ; 
    }
    
    for(int i = 0 ; i  < 10; i++){
        for(int j = 0 ; j < 10 ; j++){
                 if(strcmp(name[j-1] , name[j])>0){
                     strcpy(t , name[j-1]); 
                     strcpy(name[j-1] , name[j]) ; 
                     strcpy(name[j] , t) ; 
 
                 }
        }
    }
    for(int i = 0 ; i < 10 ; i++){
        cout<<name[i] ; 
    }

}
    // int arr[10] , a = 0  , b=0  , c=0 , d=0  , e=0 ,f=0 , g=0  , h=0 , i=0  , j=0 , k=0 , l=0 ,m=0,n=0,o=0,p,q,r,s,t,u,v,w,x,y,z ; 
    // for(int i = 0 ; i < name.size() ; i++){

    //     if((name[i] = 'A') || (name[i] = 'a') && ((name[i] = 'B')|| (name[i]  = 'b')) && ((name[i] = 'C') || (name[i]  = 'c')) && ((name[i] = 'D')|| (name[i]  = 'd')))
    //                    a = 1 , b = 2 , c = 3 , d = 4 ;  
    //     }
   
    
        // int result = a+b+c+d+e+f+g+h+i+j+k+l+m ; 
        // cout<<result<<endl ; 

    

     
#include <iostream>
using namespace std  ; 
int main(){
    int a[10] ,elm, b ; 
    cout<<"Enter the size of Array"<<endl ;
    cin>>b;  
    cout<<"Enter the elements"<<endl ; 
    for(int i = 0 ; i  < b ; i++){
        cin>>a[i] ; 
    }
    cout<<"Enter the element to search"<<endl ; 
    cin>>elm ; 
    for(int i = 0 ; i < b ; i++){
    if(a[i] == elm){
        cout<<"***Element "<<elm<<" Found and its index is "<<i<<"***"<<endl ; 
    }
    }

    return 0 ; 
}
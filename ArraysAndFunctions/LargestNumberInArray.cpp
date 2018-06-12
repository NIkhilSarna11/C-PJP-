#include <iostream>
using namespace std ; 
int main(){
int a[20], b , temp = 0 ;
cout<<"Enter the number of elements of the array"<<endl ; 
cin>>b ; 
cout<<"Enter "<<b<<" elements of the array"<<endl ; 
for(int i = 0 ; i < b ; i ++){
    cin>>a[i] ; 
}
for(int j = 0 ; j <= b  ; j++){
for(int i = 0 ; i < b ; i++){
if(a[i]>a[i+1]){
temp = a[i] ;
a[i] = a[i+1] ; 
a[i+1] = temp ; 
}
}
}

cout<<"The Largest element is "<<a[b]<<endl ; 

return 0 ; 

}
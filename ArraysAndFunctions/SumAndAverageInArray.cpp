#include<iostream>
using namespace std ; 
int main(){
int n , a[10] , sum = 0 ;
float avg ;  
cout<<"Enter the size "<<endl ; 
cin>>n; 
 cout<<"Enter the "<<n<<" elements"<<endl ; 
for(int i = 0 ; i  < n ; i++){
    cin>>a[i] ; 
}

for(int i= 0 ; i < n ; i++){
    sum = sum + a[i] ;       // For  Sum
}
avg = sum/n ;   // For Average
cout<<"sum is "<<endl<<sum<<endl ; 
cout<<"Average is "<<endl<<avg<<endl ; 
return 0 ; 
} 

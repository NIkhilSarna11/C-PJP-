#include<iostream>
using namespace std ; 
int main(){

int a ; 
cout<<"How many rows are to be printed"<<endl ; 
cin>>a ; 
for(int i = a ; i  > 1 ; i--){
    for(int j = 1 ; j <=i ; j++){
        cout<<" * " ; 
    }
    cout<<" "<<endl ; 
}

return 0 ; 
}
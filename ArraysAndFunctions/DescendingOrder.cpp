#include<iostream>
using namespace std ; 
int main()
{
    int a[20] , b , temp = 0 ; 
    cout<<"Enter the number of elements"<<endl ; 
    cin>>b ; 
    cout<<"Enter the numbers"<<endl ; 
    for(int i = 0 ; i <b ; i++){
        cin>>a[i] ; 
    }
    for(int i = 0 ; i <b ; i++)
    {
        for(int j = 0 ; j <b-i-1; j++){
            if(a[j]<a[j+1]){
                temp = a[j] ; 
                a[j] = a[j+1] ; 
                a[j+1] = temp ; 
            }
        }
    }

cout<<"The numbers arranged in the descending order are given below "<<endl ; 
    for(int i = 0 ; i < b ; i++){
        cout<<a[i]<<endl ; 
    }
    return 0 ; 
}
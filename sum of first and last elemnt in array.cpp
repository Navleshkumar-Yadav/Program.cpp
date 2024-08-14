#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array elemet: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array element: ";
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    int firstele = arr[0];
   
    int lastele = arr[n-1];
    int sum = firstele+lastele;
    cout<<sum<<endl;
   
} 

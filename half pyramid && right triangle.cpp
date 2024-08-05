#include<iostream>
using namespace std;

void pattern3(int n){
    for(int row =0;row<n ; row++){
        for(int col=0;col<row+1;col++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number n : ";
    cin>>n;

 
    pattern3(n);
}



#include<iostream>
using namespace std;

void pattern3(int n){
    for(int row =0;row<=n; row++){
        for(int col=0;col<n-row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number n : ";
    cin>>n;

 
    pattern3(n);
}

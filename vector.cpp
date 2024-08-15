#include<bits/stdc++.h>
using namespace std;
void explainVector(){
    vector<int> ans = {7,8};
    ans.push_back(1);
    ans.push_back(2);
    ans.push_back(3);
    for(int i =  1; i<ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
    
    
    iterating the first element.
    vector<int>::iterator beginitr = ans.begin();
    vector<int>::iterator enditr = ans.end();
    // vector<int>::iterator endItr = ans.end();
    cout<<*beginitr<<endl;
      cout<<*enditr<<endl;
    cout<<*endItr<<" "<<endl;
    for(vector<int>::iterator i=beginitr; i<enditr; i++){
        cout<<*i<<" ";
    }
    
    
    another c++ keyword auto
    iteration
    for(auto i : ans){
        cout<<i<<" ";
    }
    cout<<endl;
    
    
    vector<int>:: iterator beginItr = ans.begin();
    cout<<*beginItr<<" ";
    cout<<endl;
    
    vector<int>:: iterator endItr = ans.end();
    cout<<*endItr<<" ";
    cout<<endl;
    
    
    reversed iterator
    
    
  // print all element
    for(auto i: ans){
        cout<<i<<" ";
    }
    
    
    
    vector<int> dupAns(ans);
    for(auto i: dupAns){
        cout<<i<<" ";
    }
    auto reverseBegin = ans.rbegin();
    auto reverseEnd = ans.rend();
    
    for(auto i = reverseBegin ; i<reverseEnd; i++){
        cout<<*i<<" ";
    }
    
    
    
}

int main(){
    explainVector();
    
}

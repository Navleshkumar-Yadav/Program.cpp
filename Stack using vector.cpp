#include<bits/stdc++.h>
using namespace std;
void explainStack(){
    stack<int> ans;
    ans.push(10);
    ans.push(20);
    // cout<<ans.top()<<" ";
    // ans.pop();
    // cout<<ans.top()<<" ";
    
    ans.push(30);
    ans.push(40);
    ans.push(50);
    ans.push(60);
    while(ans.empty() != true){
        cout<<ans.top()<<" ";
        ans.pop();
    }
}
int main(){
    explainStack();
    return 0;
}

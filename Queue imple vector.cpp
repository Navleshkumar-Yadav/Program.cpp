QUeue is FIFO

#include<bits/stdc++.h>
using namespace std;
void explainQueue(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(50);
    q.push(60);
    while(q.empty()==false){
        cout<<q.front()<<" ";
        q.pop();
    }
    
    // cout<<ans.top()<<" ";
    // ans.pop();
    // cout<<ans.top()<<" ";
    
 
}
int main(){
    explainQueue();
    return 0;
}




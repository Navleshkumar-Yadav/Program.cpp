

#include<bits/stdc++.h>
using namespace std;
void explainPQ(){
    // print minimum element in priority of queue;
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(10);
    pq.push(5);
    pq.push(30);
    pq.push(50);
    pq.push(20);
    
    while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();
        
    }
}
int main(){
    explainPQ();
    return 0;
    
    
}

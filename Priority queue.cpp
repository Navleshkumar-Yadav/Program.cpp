
Priority queue in cpp
print maximum element in queue;

#include<bits/stdc++.h>
using namespace std;
void explainPQ(){
    priority_queue<int> pq;
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



#include<bits/stdc++.h>
using namespace std;
void explainSet(){
    // print minimum element in priority of queue;
    set<int> st;
    st.insert(10);
    st.insert(5);
    st.insert(30);
    st.insert(30);
    st.insert(30);
    for(auto i: st){
        cout<<i<<" ";
    }
   
}
int main(){
    explainSet();
    return 0;
    
}

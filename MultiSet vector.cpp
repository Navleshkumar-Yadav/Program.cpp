Multiset in vector;


#include<bits/stdc++.h>
using namespace std;
void explainMultiSet(){
    multiset<int> ms;
    ms.insert(10);
    ms.insert(20);
    ms.insert(20);
    ms.insert(20);
    
    ms.insert(30);
    ms.insert(40);
    ms.insert(2);
    auto i = ms.erase(ms.find(20));
    for(auto i: ms){
        cout<<i<<" ";
    }
    // cout<<endl;
    // auto i = st.upper_bound(30);
    // cout<<*i;
    
    
}
int main(){
    explainMultiSet();
    return 0;
    
    
}

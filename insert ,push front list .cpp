Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void explainVector(){
    vector<int> ans ={7,8};
    ans.push_back(1);
    ans.push_back(2);
    ans.push_back(3);
    // for(int i =0 ; i<ans.size() ; i++){
    //     cout<<ans[i]<<" ";
    // }
    ans.erase(ans.begin()+2);
    
    for(auto i: ans){
        cout<<i<<" ";
    }
    cout<<endl;
    ans.erase(ans.end()-2);
    for(auto i: ans){
        cout<<i<<" ";
    }
}


int main() {
    explainVector();
    return 0;
 
}




swap the vector


#include<bits/stdc++.h>
using namespace std;
void explainVector(){
    
    vector<int> ans1={7,8};
   
    vector<int> ans2= {6,4};
    swap(ans1, ans2);
    for(auto i: ans1){
        cout<<i<<" ";
    }
    
}
int main(){
    explainVector();
    return 0;
    
}




Insert element at vector
#include<bits/stdc++.h>
using namespace std;
void explainVector(){
    
    vector<int> ans1={7,8,10,11,12,19};
  // insert index 2
    // ans1.insert(ans1.begin()+2,4);
    // cout<<endl;
    
    // insert index -2
    ans1.insert(ans1.end()-1, 4);
  
    for(auto i: ans1){
        cout<<i<<" ";
    }
    
}
int main(){
    explainVector();
    
    return 0;
}



// vector in a List

#include<bits/stdc++.h>
using namespace std;
void explainList(){
    list<int> ans={7,8};
    ans.push_front(1);
    
    for(auto i: ans){
        cout<<i<<" ";
    }
    cout<<endl;
    ans.insert(ans.begin()+1 , 4)
    for(auto i: ans){
        cout<<i<<" ";
    }
    
    
}

int main(){
    explainList();
    return 0;
}


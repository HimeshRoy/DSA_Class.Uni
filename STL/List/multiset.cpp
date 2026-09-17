#include<bits/stdc++.h>
using namespace std;

// duplicated data in sorted order

int main(){
     multiset <int> st;

     st.insert(10);
     st.insert(14);
     st.insert(15);
     st.insert(10);
     st.insert(11);
     st.insert(9);
     st.insert(20);
     st.insert(27);

     auto itr = st.find(10);

     if(itr != st.end()){
          st.erase(10);
     }

     cout<<st.count(10)<<endl;

     st.erase(10);

     cout<<st.count(10)<<endl;

     for(auto x:st){
          cout<<x<<" ";
     }

     cout<<endl;

     if(st.find(20) != st.end()){
          cout<<"Found"<<endl;
     } else{
          cout<<"Not Found"<<endl;
     }

     return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
     unordered_set <int> st;

     st.insert(10);
     st.insert(14);
     st.insert(15);
     st.insert(10);
     st.insert(11);
     st.insert(9);
     st.insert(20);
     st.insert(27);

     for(auto x:st){
          cout<<x<<" ";
     }

     return 0;
}

// set

#include<bits/stdc++.h>
using namespace std;

int main(){
     deque <int> dq;

     dq.push_back(10);
     dq.push_back(20);
     dq.push_back(8);
     dq.push_front(5);
     dq.push_front(25);

     cout<<dq[0]<<" "<<dq[1]<<" "<<dq[2]<<" "<<dq[3]<<" "<<dq[4]<<" ";
     cout<<endl;

     dq.pop_front();
     cout<<dq[0];
     cout<<endl;

     for(auto x: dq){
          cout<<x<<" ";
     }

     cout<<endl;
     for(auto it=dq.begin(); it != dq.end(); it ++){
          cout<<(*it)<<" ";
     }

     cout<<endl;

     cout<<dq.size()<<endl;
     cout<<dq.front()<<endl;
     cout<<dq.back()<<endl;

     return 0;
}

// set

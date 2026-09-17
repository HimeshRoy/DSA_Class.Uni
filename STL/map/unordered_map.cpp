#include<bits/stdc++.h>
using namespace std;

int main(){
     unordered_map <int,int> mp;

     mp[20]=2;
     mp[30]=3;
     mp[10]=1;
     mp[60]=6;
     mp[40]=4;
     mp[50]=5;

     mp[40]=7;

     for(auto x: mp){
          cout<<x.first<<" "<<x.second<<endl;
     }

     for(auto it=mp.begin(); it != mp.end(); it++){
          cout<<it->first<<" "<<it->second<<endl;
     }

     cout<<"Size of the unordered map = "<<mp.size()<<endl;
     cout<<mp.count(50)<<endl;

     mp.erase(10);

     for(auto x: mp){
          cout<<x.first<<" "<<x.second<<endl;
     }

     auto it=mp.find(400);

     if(it !=mp.end()){
          cout<<"Element found"<<endl;
     } else{
          cout<<"Not found"<<endl;
     }

     mp.clear();
     
     if(mp.empty()){
          cout<<"It is empty"<<endl;
     }else{
          cout<<"Not empty"<<endl;
     }

     return 0;
}
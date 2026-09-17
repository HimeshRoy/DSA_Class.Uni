#include <bits/stdc++.h>
using namespace std;

int main()
{
     map<string, int> mp;

     mp["Raj"] = 10;
     mp["Ayush"] = 70;
     mp["Ankit"] = 20;
     mp["Arya"] = 50;
     mp["Ayan"] = 70;

     for(auto x: mp){
          cout<<x.first<<" "<<x.second<<endl;
     }

     cout<<">"<<endl;

     for(auto it = mp.begin(); it != mp.end(); it++){
          cout<<it->first<<" "<<it->second<<endl;
     }

     return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
     vector <int> v;

     v.push_back(10);
     v.push_back(3);
     v.push_back(16);
     v.push_back(45);
     v.push_back(20);
     v.push_back(1);

     if(binary_search(v.begin(),v.end(),188)){
          cout<<"Element found"<<endl;
     } else{
          cout<<"not found"<<endl;
     }

     auto mn= min_element(v.begin(), v.end());
     auto mx= max_element(v.begin(), v.end());


     cout<<"Max element: "<<(*mx)<<endl;
     cout<<"Min element: "<<(*mn)<<endl;


     //lower bound
     auto it = lower_bound(v.begin(),v.end(), 16);
     int index = it-v.begin();
     cout<<v[index]<<endl;


     //upper bound
     auto i = upper_bound(v.begin(),v.end(), 16);
     int index1 = it-v.begin();
     cout<<v[index1]<<endl;


     return 0;

}


// lower bound --> greater then or equal to x
// upper bound --> which is greater then 

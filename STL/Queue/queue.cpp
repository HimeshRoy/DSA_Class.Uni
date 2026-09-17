#include <bits/stdc++.h>
using namespace std;

int main(){
     queue<int> q;
     
     q.push(10);
     q.push(12);
     q.push(13);
     q.push(14);
     q.push(15);
     q.push(16);
     q.push(17);
     q.push(18);

     cout << q.front() << endl;
     cout << q.size() << endl;

     q.pop();

     cout << q.front() << endl;
     cout << q.size() << endl;

     if (q.empty()){
          cout << "Queue is empty" << endl;
     } else {
          cout << "Queue is not empty" << endl;
     }

     while (!q.empty()){
          cout << q.front() << endl;
          q.pop();
     }

     return 0;
}
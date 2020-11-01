#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
   int n,k;
   cin >>n>>k;

   queue<int> q;
   vector<int> v;
   for(int i =1; i<=n; i++){
      q.push(i);
   }
   
   while(!q.empty()){
      for(int i = 0; i<k-1; i++){
         int a = q.front();
         q.pop();
         q.push(a);
      }
      v.push_back(q.front());
      q.pop();
   }
   cout<<"<";
   for(int i = 0; i<v.size(); i++){
      cout<<v[i];
      if(i!=v.size()-1)
         cout<<", ";
   }
   cout<<">";
}
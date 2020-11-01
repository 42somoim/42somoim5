#include <iostream>
#include <string>
#include <deque>
using namespace std;

int strcmp(string s1, string s2){
   int i = 0;
   while(s1[i] && s2[i]){
      if(s1[i]!=s2[i])
         break;
      i++;
   }
   return (s1[i] - s2[i]);
}

int main(){
   int n;
   cin >>n;
   deque<int> dq;
   while(n--){
      string str;
      cin >>str;
      if(strcmp(str, "push_front") == 0){
         int x;
         cin >> x;
         dq.push_front(x);
      }
      if(strcmp(str, "push_back") == 0){
         int x;
         cin >> x;
         dq.push_back(x);
      }
      if(strcmp(str, "pop_front") == 0){
         if(dq.empty())
            cout<<"-1\n";
         else
         {
            cout<<dq.front()<<"\n";
            dq.pop_front();
         }
      }
      if(strcmp(str, "pop_back") == 0){
         if(dq.empty()){
            cout<<"-1\n";
         }
         else{
            cout<<dq.back()<<"\n";
            dq.pop_back();
         }
      }
      if(strcmp(str, "size") == 0){
         cout<<dq.size()<<"\n";
      }
      if(strcmp(str, "empty") == 0){
         if(dq.empty())
            cout<<"1\n";
         else
            cout<<"0\n";
      }
      if(strcmp(str, "front") == 0){
         if(!dq.empty()){
            cout<<dq.front()<<"\n";
         }
         else{
            cout<<"-1\n";
         }
      }
      if(strcmp(str, "back") == 0){
         if(!dq.empty()){
            cout<<dq.back()<<"\n";
         }
         else{
            cout<<"-1\n";
         }
      }
   }
}
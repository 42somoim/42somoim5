#include <iostream>
using namespace std;
typedef long long ll;
ll dp[201][201];

int main(){
   int n,k;
   cin >>n>>k;

   for(int i=0; i<=n; i++){
      dp[1][i]=1;
   }
   for(int i=1; i<=k; i++){
      for(int j=0; j<=n; j++){
         for(int l=0; l<=j; l++){
            dp[i][j] += dp[i-1][j-l];
            dp[i][j] %= 1000000000;
         }
      }
   }
   cout<<dp[k][n]<<"\n";

}
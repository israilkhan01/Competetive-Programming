#include<iostream>
#include<queue>
#include<bits/stdc++.h> 
#include<algorithm>
using namespace std;
typedef long long ll;
int main(){
   int n,m;
   cin>>n>>m;
   ll arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];  
   }
   sort(arr,arr+n);
   queue<ll>que;
   int count_m=0;
   int end_p=n-1;
   while(m--){
         int curr_m;
         cin>>curr_m;
         int ans;
         for(;count_m<curr_m;count_m++){
              if(end_p>=0 &&(que.empty()||arr[end_p]>=que.front())){
                   ans=arr[end_p];
                   end_p--;

              }else
              { 
                ans=que.front();
                que.pop();

              }
              que.push(ans/2);
              
         }
         cout<<ans<<endl;
   }
       
   return 0;
}
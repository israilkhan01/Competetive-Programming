#include<iostream>
#include<bits/stdc++.h> 
#include<algorithm>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t>0){   
       int a[2];
       for(int i=0;i<2;i++){
           cin>>a[i];
       }
       int n=a[0];
       int k=a[1];
       int perm[n];
       int srr[n];
       for(int i=0;i<n;i++){
           cin>>perm[i];
       }
       for(int i=0;i<n;i++){
           srr[i]=perm[i];
       }
       sort(srr,srr+n);
       int ans[3];
       int x=0;
        for(int i=0;i<n;i++){
        //    cout<<srr[i]<<":";
       }
       cout<<endl;
       for(int i=0;i<n;i++){
           if((srr[i]!=perm[i])){
            
                  if(x<3){
                    ans[x]=i+1;
                    x++;
                  }
           }
       }
       for(int i=0;i<3;i++){
           cout<<ans[i]<<" ";
       }
       t--;
   }
   

    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<vector>
using namespace std;
void printPalString(string s){
    map<char,vector<int> > index_map;
    for(int i=0;i<s.length();i++){
        index_map[s[i]].push_back(i+1);
    }
    int odd_freq_count=0;
    map<char,vector<int> >::iterator it;
    for(it=index_map.begin();it!=index_map.end();it++){
        cout<<it->first<<"::::";
        for(int i=0;i<it->second.size();i++){
            cout<<it->second[i]<<",";
        }
        cout<<endl;
        if(it->second.size()%2!=0){
            odd_freq_count++;
        }
    }
    if(odd_freq_count>1){
        cout<<"-1";
    }
   vector<int>ans;
   for(int i=0;i<s.length();i++){
       ans.push_back(0);
   }
   int j=s.length();
   for (int i = 0; i<j; i++){
         for(it=index_map.begin();it!=index_map.end();it++){
            cout<<it->first<<"::::";
           if(it->second.size()%2==0){
            for(int k=0;k<it->second.size();k++){
                 ans[i]=it->second[k];
                 k++;
                 ans[j]=it->second[k];
                
            }
           }
        
    }
   }
   
    
}
int main(){
    int t;
    cin>>t;
    while (t--){
        string s;
        cin>>s;
        printPalString(s);
        cout<<endl;
    }
    
    return 0;
}
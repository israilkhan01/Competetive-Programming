#include<iostream>
#include<utility>
#include<set>
#include<map>
using namespace std;
int main(){
    //pair
    // pair<int,char> p;
    // p=make_pair(2,'x');
    // pair<int,char> p2(1,'a');
    // cout<<p.first<<" "<<p.second<<endl; 
    // cout<<p2.first<<" "<<p2.second<<endl; 

    //set
    // set<int> s;
    // int arr[]={1,2,3,4,5,3,2};
    // for(int i=0;i<7;i++){
    //     s.insert(arr[i]);
    // }
    // set<int>::iterator it;
    // for(it=s.begin();it!=s.end();it++){  
    //     cout<<*it<<endl;
    // }

    // if(s.find(5)==s.end()){
    //     cout<<"not found"<<endl;
    // }else
    // {
    //     cout<<"found";
    // }
    
//maps  these take log(n) for insertion, del ,finding where unordered_map take O(1);
   int arr[]={1,2,3,4,5,3,2}; 
   map<int,int>m;
   for(int i=0;i<7;i++){
       m[arr[i]]++;
   }
   map<int,int>::iterator it;
    for(it=m.begin();it!=m.end();it++){  
        cout<<it->first<<":"<<it->second<<endl;
    }
   return 0;
}
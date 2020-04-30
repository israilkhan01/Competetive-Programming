#include<iostream>
#include<vector>
#include<string>
#include<utility>
#include<set>
#include<map>
// #include<bits>
using namespace std;
int main(){

    // vector<int>v;
    // for(int i=0;i<5;i++){
        
    //         v.push_back(i+1);
    // }
    // vector<int>::iterator it;
    // for(it=v.begin();it<v.end();it++){
    //     cout<<*it<<endl;
    // }
      
//    string a="ISrail";
//    string s1(a,2,4);
//    cout<<a<<endl;
//    cout<<s1<<endl;
  
//   string s2=a.substr(1,4);
//   cout<<s2;
//    return 0;

    // pair<int,char> p;
    // p=make_pair(1,'a');
    // pair<int,char> p2(1,'c');
    // cout<<p.first<<' '<<p.second<<endl;
    // cout<<p2.first<<' '<<p2.second<<endl;


// set
//     set<int>s;
//     int arr[]={1,2,3,4,5,6,7};
//     for(int i=0;i<7;i++){
//         s.insert(arr[i]);
//     }
//     set<int>::iterator it;
//     for(it=s.begin();it!=s.end();it++){
//         cout<<*it<<endl;
//     }
//     if(s.find(7)==s.end()){
//         cout<<" Element not found";
//     }
//   else{
//       cout<<"Element found";
//   }


// Map
   int arr[]={1,2,3,4,5,6,5};
   map<int,int>m;
   for(int i=0;i<7;i++){
       m[arr[i]]+=1;

   }
   m.erase(2);
   map<int,int>::iterator it;
   for(it=m.begin();it!=m.end();it++){
       cout<<it->first<<":"<<it->second<<endl;
   }
  
    return 0;

}
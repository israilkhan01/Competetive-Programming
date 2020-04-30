
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    // vector<int> v; //v(5)
    // for(int i=0; i<5;i++){
    //     // v[i]=i+1;
    //         v.push_back(i+1);
    // }
    // vector<int>::iterator it;
    // for( it=v.begin(); it!=v.end() ; it++){
    //   cout<<*it<<endl;
    // }
    string s="Israil";
    string s1(s,1,4);
    cout<<s1<<endl;
    string s2=s.substr(1,4);
    cout<<s2<<endl;
    if(s1.compare(s2)==0){
        cout<<s1<<" equal to"<<s2;
    }else{
        cout<<s1<<" not equal to"<<s2;
    }
    return 0;
}
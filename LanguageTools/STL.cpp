
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; //v(5)
    for(int i=0; i<5;i++){
        // v[i]=i+1;
            v.push_back(i+1);
    }
    vector<int>::iterator it;
    for( it=v.begin(); it!=v.end() ; it++){
      cout<<*it<<endl;
    }

    cout<<"helloo";
    return 0;
}
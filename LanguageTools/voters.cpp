#include<iostream>
#include<bits/stdc++.h> 
#include<vector>
using namespace std;
vector<int> getvoters(int arr[] ,int total){
    sort(arr,arr+total);
    vector<int>voters;
    int count=1;
    int num=arr[0];
    for(int i=1;i<total;i++){
        if(num==arr[i]){
            count++;
        }
        else if(num!=arr[i]){
            if(count>1){
                voters.push_back(num);
            }
            count=1;
            num=arr[i];
        } 
    }
    return voters;
}
int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int total=n1+n2+n3;
    int arr[total];
    for (int i=0 ; i<total ; i++){
           cin>>arr[i];
    }
    vector<int> voters=getvoters(arr,total);
    vector<int>::iterator it;
    cout<<voters.size()<<endl;
    for(it=voters.begin();it<voters.end();it++){
        cout<<*it<<endl;
    }
    return 0;
}
#include<iostream>
#include<string>
#include<unordered_map>

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
        int q=a[1];
        // cout<<n<<":"<<q;
        string S;
        cin>>S;

        unordered_map <char,int> m;
        for(int i=0;i<n;i++){
            m[S[i]]++;
        }
        unordered_map <char,int>::iterator it;
          for(it=m.begin();it!=m.end();it++){  
        cout<<it->first<<":"<<it->second<<endl;
            }
        while(q>0){
            int c;
            int output=0;
            cin>>c;
            int max=0;
            for(it=m.begin();it!=m.end();it++){
                if(max<it->second){
                    max=it->second;  
                }
            }
            cout<<"max"<<max<<endl;
            if(max<=c){
                output=0;
            }else{
                for(it=m.begin();it!=m.end();it++){
                 if(it->second>c){
                     output=output+(it->second-c);
                 }
                }
            }
        //     for(it=m.begin();it!=m.end();it++){  
        // cout<<it->first<<":"<<it->second<<endl;
        //     }
            cout<<output<<endl;
            q--;
        }   
        t--;
    }
    return 0;
}
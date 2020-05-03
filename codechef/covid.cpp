#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
            int n;
            cin>>n;
            int arr[n];
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
            int wi=1;
            int li=1;
            int least=1;
            for(int i=1;i<n;i++){
                if(abs(arr[i]-arr[i-1])<=2){
                    li++;
                }else
                {  
                if(wi<li){
                    wi=li;
                    
                    }  
                if((least==1)||(least>li)){
                    least=li;
                    li=1;
                }
                li=1;
                }
                    
        }
        if(wi<li){
                wi=li;
                }  
        cout<<least<<" "<<wi;

        t--;
    }
    return 0;
}
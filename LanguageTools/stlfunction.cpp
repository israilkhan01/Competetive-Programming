#include<iostream>
#include<algorithm>
#include<cmath>
#include<utility>
using namespace std;

struct Interval
{
   int st;
   int et;
};
bool compare(Interval i1,Interval i2){
    return i1.st<i2.st;
     
}

int main(){
    // Interval arr[]={{6,4},{4,6},{3,4},{8,13}};
    // sort(arr,arr+4,compare);
    // for(int i=0;i<4;i++){
    //     cout<<arr[i].st<<":"<<arr[i].et<<endl;
    // }
   int arr[]={2,4,1,3,4,6};
   sort(arr,arr+6);
   for(int i=0;i<6;i++){
       cout<<arr[i]<<" "; 
   }

   cout<<endl<<binary_search(arr,arr+6,5)<<endl;
   cout<<lower_bound(arr,arr+6,4)-arr<<endl;
   cout<<upper_bound(arr,arr+6,4)-arr-1<<endl;
   cout<<__gcd(10,15)<<endl;
   cout<<pow(2,3)<<endl;
   int x=10;
   int y=2;
   swap(x,y);
   cout<<x<<","<<y<<endl;
    return 0;
}
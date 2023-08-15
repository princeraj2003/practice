#include <bits/stdc++.h>
using namespace std;

vector<int>pairsum(vector<int>arr,int sum){
// logic
unordered_set<int> s;
vector<int>result;
for(int i=0;i<arr.size();i++){
    int x=sum-arr[i];
    if(s.find(x)!=s.end()){
        result.push_back(x);
        result.push_back(arr[i]);
        return result;
    }
    //insert the current no in the set
    
    s.insert(arr[i]);

}
return{};

}

int main()
{
    
    vector<int> arr={5,-1,3,2,9,11,10,-6};


    int s=4;
    
    auto p=pairsum(arr,s);
    
    if(p.size()==0){
        cout<<"no such pair"<<endl;
    }
    else{
        cout<<p[0]<<" ," <<p[1]<<endl  ;
          }
    
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //  --->simple array input output
    // int n;
    // cin>>n;
    // int a[n]={3,2};
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<endl;
    // }
    // cout<<endl;


// array<int,4>a={1,2,3,4};
// int size=a.size();
// for(int i=0;i<size;i++){
//     cout<<a[i]<<endl;
// }
// cout<<"ELEMENT AT SECOND INDEX "<<a.at(2)<<endl;
// cout<<"EMPTY OR NOT "<<a.empty()<<endl;
// cout<<"FIRST "<<a.front()<<endl;;
// cout<<"last "<<a.back()<<endl;



vector<int>v;
cout<<"capacity "<<v.capacity()<<endl;
v.push_back(1);
cout<<"capacity "<<v.capacity()<<endl;
v.push_back(2);
cout<<"capacity "<<v.capacity()<<endl;
v.push_back(3);
cout<<"capacity "<<v.capacity()<<endl;
cout<<"SIZE "<<v.size()<<endl;
cout<<"ELEMENT AT SECOND INDEX "<<v.at(2)<<endl;
cout<<"EMPTY OR NOT "<<v.empty()<<endl;
cout<<"FIRST "<<v.front()<<endl;
 v.pop_back();
 cout<<"last "<<v.back()<<endl;
 
 
    return 0;
}

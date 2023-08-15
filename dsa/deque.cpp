#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(1);
      d.push_front(2);
    for(int i:d){
        cout<<i<<" ";
    }
    // cout<<endl;
    //  d.pop_back();
    //   for(int i:d){
    //       cout<<i<<" ";
    //  }
    //  cout<<endl;
    //  d.pop_front();
    //  for(int i:d){
    //     cout<<i<<" ";
    //  }
cout<<endl;

    cout<<"ELEMENT AT SECOND INDEX "<<d.at(1)<<endl;
 cout<<"EMPTY OR NOT "<<d.empty()<<endl;
 cout<<"FIRST "<<d.front()<<endl;;
 cout<<"last "<<d.back()<<endl;



    cout<<endl;
    d.erase(d.begin(),d.begin()+2);
 cout<<d.size()<<endl;
 return 0;
}
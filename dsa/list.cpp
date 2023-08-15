#include<iostream>
#include<list>
using namespace std;
int  main(){
    list<int>l;
    l.push_back(5);
    l.push_front(2);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
//    l. pop_front();
//      for(int i:l){
//         cout<<i<<" ";
//     }
// }

l.erase(l.begin());
 for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<l.size()<<endl; 
    cout<<"empty or not "<<l.empty(); 
}
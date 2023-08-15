#include<iostream>
using namespace std;
int main(){
    int i=10;
    int *p=&i;
     cout<<p<<endl;
    // cout<<*p<<endl;
    // i+1;
    // cout<<i<<endl;
    // cout<<p<<endl;
    // int *g=p;
    //  cout<<i<<endl;

    p+1;
    cout<<p<<endl;
    //  p-1;
    //  cout<<p<<endl;
    return 0;
}
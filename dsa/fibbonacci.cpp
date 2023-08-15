#include <bits/stdc++.h>
using namespace std;

int main()
{ 
    int n=10;

    int a=0;
    int b=1;
    cout<<a<<endl;
    cout<<b<<endl;
    for(int i=0;i<n;i++){
        int nxt=a+b;
        cout<<nxt<<endl;
        a=b;
        b=nxt;
    }
    return 0;
}

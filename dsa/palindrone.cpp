#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n!=0){
        int ld=n%10;
        int rev=rev*10+ld;
        n=n/10;
        
    
        
        if(rev==n){
            cout<<"yes"<<endl;
        }
        else
        cout<<"no"<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{ 
    int x;
    cin>>x;
    int ans=0;
    
    while(x!=0){
       
        
        int digit=x%10;
        int ans=(ans*10)+digit;
        x=x/10;
        cout<<ans<<endl;

    }
return ans;
}

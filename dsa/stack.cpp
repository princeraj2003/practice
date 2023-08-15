#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string>s;
    s.push("prince");
    s.push("raj");
    s.push("kumar");
    cout<<s.top()<<endl;
    s.pop();
     cout<<s.top()<<endl;
     cout<<s.size()<<endl;
     cout<<s.empty();
     
}
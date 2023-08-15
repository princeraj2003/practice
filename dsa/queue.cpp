#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string>q;
    q.push("prince");
    q.push("raj");
    q.push("kumar");
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.empty()<<endl;
    cout<<q.size()<<endl;

}
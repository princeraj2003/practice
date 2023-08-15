#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int>g[N];
bool vis[N];
//take action on vertex after entering the vertex
void dfs(int vertex){
    vis[vertex]==true;
    for(int child:g[vertex]){
        if(vis[child])continue;
        //take action on the child before entering the child node
        dfs(child);
        //take action on the child node after entering the child node
    }
    //take action on the vertex before existing the vertex
}

int main()
{
int n,m;
cin>>n>>m;
for(int i=0;i<m;i++){
    int v1,v2;
    cin>>v1>>v2;
    g[v1].push_back(v2);
    g[v2].push_back(v1);

}
    return 0;
}

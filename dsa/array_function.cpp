#include<iostream>
using namespace std;
void test(int c,int b[]){
    cout<<c<<endl;
    cout<<b[0]<<endl;
}
int main(){
int input[1000]={1,2,3};
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     cin>>input[i];
int a = 6;
    test(a,input);
return 0;
}
#include<iostream>
using namespace std;
int main(){
    int a[8]={1,2,3,5,4,2,3,1};
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(a[i]==a[j])
            a[i]=a[j]=-1;
        }
    }
    for(int i=0;i<8;i++){
        if(a[i]>0)
        cout<<a[i]<<endl;
    }
}
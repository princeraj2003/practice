#include<iostream>
using namespace std;
int main(){
    int arr[]={4,5,6,7,10};
    int targetsum=11;
    int pairs=0;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]+arr[j]==targetsum){
                pairs++;
            }
        }
    }
    cout<<pairs<<endl;
}
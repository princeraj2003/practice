#include<iostream>
using namespace std;
int getmax(int num[],int n){
    int max=INT16_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>max)
        max=num[i];

    }
    return max;
}

int getmin(int num[],int n){
    int min=INT_FAST16_MAX;
    for(int i=0;i<n;i++){
        if(num[i]<min)
        min=num[i];

    }
    return min;
}



int main(){
    int size;
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"THE MAXIMUM NO IN THE AARAY IS :"<<getmax(num,size)<<endl;
    cout<<"THE MINIMUM NO IN THE ARRAY IS  :"<<getmin(num,size)<<endl;
    return 0;
}
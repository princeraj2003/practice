#include<iostream>
using namespace std;
bool linearsearch(int arr[],int size,int key){
    if(size==0){
        return false;
    }
    if(arr[0]==key)
    return true;
    else{
        bool remainingpart=linearsearch(arr+1,size-1,key);
        return remainingpart;
    }
}



int main(){
    int arr[5]={2,4,6,8,10};
    int size=5;
    int key=19;
    bool ans=linearsearch(arr,size,key);
    if(ans){
        cout<<"present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }
}
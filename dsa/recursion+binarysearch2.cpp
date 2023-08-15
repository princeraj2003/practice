#include<iostream>
using namespace std;
bool binarysearch(int arr[],int s,int e,int target){
    //base case
    if(s>e)
    return false;
    int mid=s+((e-s)/2);
    //second base case
    if(arr[mid]==target)
    return mid;
    if(arr[mid]<target)
    return binarysearch(arr,mid+1,e,target);
    else
    return binarysearch(arr,s,mid-1,target);
}
int main(){
    int arr[4]={1,3,5,6};
 int ans=binarysearch(arr,0,3,10);
 if(ans){
    cout<<"found"<<endl;
 }
 else{
    cout<<"not found"<<endl;
 }

}
#include<iostream>
using namespace std;
int firstlargestindex(int arr[],int size){
    int max=INT_FAST16_MIN;
    int maxindex=1;
    for(int i=0;i<size;i++){
        if(arr[i]>max)
        max=arr[i];
        maxindex=i;
    }
    return maxindex;
}
int main(){
    int arr[]={3,1,2,5,6,7};
    int size=6;
    int firstlar=firstlargestindex(arr,6);
    cout<<arr[firstlargestindex]<<endl;

}
#include <iostream>
using namespace std;

int minn(int arr[],int size){
    int start=0,end=size-1;
    int mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]<arr[mid-1]){
            return mid;
        }
        else if (arr[start]>arr[mid]){
            end=mid-1;
        }
        else if (arr[start]<arr[mid]){
            start=mid+1;
        }
    }

}
int main(){
    int arr[8]={7,8,9,10,1,2,3,4};
    int index=minn(arr,8);
    cout<<index;

}
#include <iostream>
using namespace std;

int minn(int arr[],int size){
    int start=0,end=size-1;
    int mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(mid>0 && arr[mid]<arr[mid-1]){
            return mid;
        }
        else if (arr[0]>arr[mid]){
            end=mid;
        }
        else{
            start=mid+1;
        }
    }

}
int main(){
    int arr[]={10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int index=minn(arr,10);
    cout<<index;

}
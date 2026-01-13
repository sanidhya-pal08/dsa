#include <iostream>
using namespace std;
int binary_search(int arr[],int size,int target){
    int start=0,end=size-1;
    for(start=0;start<=end;){
        int mid=(start+end)/2;
        if(arr[mid]>target){
            end=mid-1;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else{
            return mid;
        }


    }
    return -1;

}
int main(){
    int arr[6]={4,8,16,22,34,43};
    int index=binary_search(arr,5,41);
    cout<<"the target element is at the index "<<index;

}
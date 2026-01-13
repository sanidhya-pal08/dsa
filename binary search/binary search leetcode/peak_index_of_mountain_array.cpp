
/* 852. Peak Index in a Mountain Array
Medium
Topics
premium lock icon
Companies
You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

Return the index of the peak element.

Your task is to solve it in O(log(n)) time complexity.*/
#include <iostream>
using namespace std;
int peak_of_mountain(int arr[],int size){
    int start=0,end=size-1;
    int mid = start+(end-start)/2;
    while(start!=end){
        if ((mid==0)||(arr[mid-1] < arr[mid] && arr[mid] < arr[mid+1])){
            start=mid+1;
        }
        else if((mid==size-1)||(arr[mid-1] > arr[mid] && arr[mid] > arr[mid+1])){
            end=mid-1;
        }
        else if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
            return mid;
        }
        mid = start+(end-start)/2;
    }
    return start;

}
int main(){
    int arr[8]={13,45,77,29,20,19,15};
    cout<<peak_of_mountain(arr,8);
    return 0;
}
#include <iostream>
using namespace std;
int index_search(int arr[],int size,int target){
    if(arr[0]<=arr[size-1]){
        int start1=0,end1=size-1;
    int mid1=start1+(end1-start1)/2;
    while(start1<=end1){
        if(arr[mid1]<target){
            start1=mid1+1;
        }
        else if(arr[mid1]>target){
            end1=mid1-1;
        }
        else{
            return mid1;
        }
        mid1=start1+(end1-start1)/2;
    }
    return -1;
    }
    if(size==1){
        return arr[0]==target?0:-1;
    }
    cout<<"hi";
    int start=0,end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
       
            if (arr[start] <= arr[mid]) {
                if(target>=arr[start]&&target<arr[mid]){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
            // right half sorted
            else {
                if (arr[mid] < target && target <= arr[end]) {
                    start = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main() {
    int arr[] = {5, 6, 7, 8, 9, 1, 2, 3, 4};
    int target = 9;
    int size = sizeof(arr) / sizeof(arr[0]);


    cout << index_search(arr, size, target);
    return 0;
}
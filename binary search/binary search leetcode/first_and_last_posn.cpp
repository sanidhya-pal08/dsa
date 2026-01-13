// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.

#include <iostream>
using namespace std;
// void first_last_posn(int arr[],int size,int target,int positions[]){
//     positions[0] = -1;
//     positions[1] = -1;
//     int start=0,end=size-1;
//     int mid;
//     while(start<=end){
//         mid=(start+end)/2;
//         if(arr[mid]<target){
//             start=mid+1;
//         }
//         else if(arr[mid]>target){
//             end=mid-1;
//         }
//         else if((arr[mid]==target) && (mid==0 || arr[mid-1]<arr[mid])){
//             positions[0]=mid;
//             break;
//         }
//      }
//      int start1=0,end1=size-1;
//     int mid1;
//     while(start1<=end1){
//         mid1=(start1+end1)/2;
//         if(arr[mid1]<target){
//             start1=mid1+1;
//         }
//         else if(arr[mid1]>target){
//             end1=mid1-1;
//         }
//         else if((arr[mid1]==target) && (mid1==size-1 || arr[mid1+1]>arr[mid1]  ) ){
//             positions[1]=mid1;
//             break;
//         }
//      }
     



// }



//--------------------Alternate-Solution------------------------------------------------------
int first_occurrence(int arr[],int size,int key){
    int start=0,end=size-1;
    int mid= start + (end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid= start + (end-start)/2;

    }
    return ans;
}
int last_occurrence(int arr[],int size,int key){
    int start=0,end=size-1;
    int mid= start + (end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid= start + (end-start)/2;

    }
    return ans;
}
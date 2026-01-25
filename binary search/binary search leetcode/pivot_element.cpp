#include <iostream>
using namespace std;
/*724. Find Pivot Index
Solved
Easy
Given an array of integers nums, calculate the pivot index of this array.

The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to
 the sum of all the numbers strictly to the index's right.

If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left.
 This also applies to the right edge of the array.

Return the leftmost pivot index. If no such index exists, return -1.*/



/*2 seperate loops use honge . first loop will get the sum of the array 
2nd loop will conatin prefix and suffix sum calculated separately for each iteration and they will be compared .
Then index will be returned accordingly*/


int pivot_index(int arr[],int size){
    int sum=0;
    int suffix_sum=0;
    int prefix_sum=0;
    for (int i=0;i<size;i++){
        sum+=arr[i];
    }
    for(int i=0;i<size;i++){
        if(i>0){
            prefix_sum+=arr[i-1];
        }
        suffix_sum=sum-prefix_sum-arr[i];
        if(prefix_sum==suffix_sum){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[6]={1,7,3,6,5,6};
    int index=pivot_index(arr,6);
    cout<<index;
}
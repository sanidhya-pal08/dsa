// 1011. Capacity To Ship Packages Within D Days
// Medium

// A conveyor belt has packages that must be shipped from one port to another within days days.

// The ith package on the conveyor belt has a weight of weights[i]. Each day, we load the ship with packages on the conveyor belt 
//(in the order given by weights). We may not load more weight than the maximum weight capacity of the ship.

// Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within days days.

 //packages are inside the arrays with value of their weights in them 
#include <iostream>
using namespace std;

int max_of_array(int arr[],int size){
    int maximum=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>maximum) maximum=arr[i];
    }
    return maximum;
}

int sum_of_array(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}

bool feasability_check(int arr[],int x,int size,int days){

    int days_used=1;
    int current_load=0;
    for(int i=0;i<size;i++){
        if(current_load+arr[i]>x){
            days_used++;
            current_load=arr[i];
        }
        else{
            current_load+=arr[i];
        }
    }
    return days_used<=days;
}

int required_function(int arr[],int size,int days){
    int start=max_of_array(arr,size);
    int end=sum_of_array(arr,size);
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(feasability_check(arr,mid,size,days)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;

}
int main(){
    int weights[]={1,2,3,4,5,6,7,8,9,10};
    int days=5;
    int size=10;
    int answer=required_function(weights,size,days);
    cout<<answer;
}


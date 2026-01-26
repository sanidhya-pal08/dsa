#include <iostream>
using namespace std;
int max_of_array(int arr[],int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }

    }
    return max;
}
int min_of_array(int arr[],int size){
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }

    }
    return min;
}

bool feasability_check(int arr[],int num_stalls,int x,int num_cows){

    int cow_number=1;
    int last_placed_cow=arr[0];
    for(int i=1;i<num_stalls;i++){
        if(arr[i]-last_placed_cow>=x){
            cow_number++;
            if(cow_number==num_cows) return true;
            last_placed_cow=arr[i];
        }
        
    }
    return false;
}
int reqd_function(int arr[],int num_stalls,int num_cows){
    int end=max_of_array(arr,num_stalls)-min_of_array(arr,num_stalls);
    int start=0;
    int ans=0;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(feasability_check(arr,num_stalls,mid,num_cows)){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    int arr[]={5, 10, 30, 40, 55};
    int asn=reqd_function(arr,5,2);
    cout<<asn;
}
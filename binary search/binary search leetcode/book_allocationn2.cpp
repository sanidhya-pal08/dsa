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
int sum_of_array(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
            sum+=arr[i];
    }
    return sum;
}
bool feasability_check(int arr[],int x,int num_students,int num_books){
    int student_number=0;
    int student_pages=0;
    int books=0;
    while(books<num_books){
        student_pages=0;
        while((books<num_books) &&((student_pages+arr[books])<=x)){
            student_pages+=arr[books];
            books++;
        }
        student_number++;
        if(student_number>num_students){
            return 0;
        }
    }
    return true;
}
int reqd_function(int arr[],int num_students,int num_books){
    if(num_students>num_books)return-1;
    int start=max_of_array(arr,num_books);
    int end=sum_of_array(arr,num_books);
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(feasability_check(arr,mid,num_students,num_books)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    int arr[]={10,12,11,13,8,11,12,27};
    int asn=reqd_function(arr,7,8);
    cout<<asn;
}
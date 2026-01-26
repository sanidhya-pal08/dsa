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
bool feasability_check(int arr[],int num_books,int x,int num_students){
    int book=0;
    int student_number=0;
    int student_pages=0;
    while(book<num_books){
        student_pages=0;
        while((book<num_books) && ((student_pages+arr[book])<=x)){
            student_pages+=arr[book];
            book++;

        }
        student_number++;
        if(student_number>num_students){
            return false;
        }
    }
    return true;

}
int reqd_function(int arr[],int num_books,int num_students){
    int start=max_of_array(arr,num_books);
    int end=sum_of_array(arr,num_books);
    int ans=0;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(feasability_check(arr,num_books,mid,num_students)){
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
    int arr[]={5, 10, 30, 20, 15};
    int asn=reqd_function(arr,5,3);
    cout<<asn;
}
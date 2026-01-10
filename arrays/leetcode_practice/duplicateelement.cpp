#include <iostream>
using namespace std;
int find_Duplicate(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    for(int i=1;i<size;i++){
        ans=ans^i;
    }
    return ans;
}
int main(){
    int arr[]={1,2,3,4,5,3,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int duplicate=find_Duplicate(arr,size);
    cout<<duplicate;
} 
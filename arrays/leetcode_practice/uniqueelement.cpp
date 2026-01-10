#include <iostream>
using namespace std;
int find_Unique(int arr[],int size){
    
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[]={2,3,3,4,5,2,4,5,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int unique=find_Unique(arr,size);
    cout<<unique;
}


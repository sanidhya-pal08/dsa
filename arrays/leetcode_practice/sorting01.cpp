#include <iostream>
using namespace std;
void sort01(int arr[],int size){
     int i=0,j=size-1;
     while(i<j){
        if(arr[i]==0){
            i++;
        }
        else  if(arr[j]==1){
            j--;
        }
        else if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }


     }
}
int main(){
    int arr[9]={1,1,0,0,0,0,0,1,0};
    sort01(arr,9);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<endl;
    }
}
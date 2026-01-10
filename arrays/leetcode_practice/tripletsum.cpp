#include <iostream>
using namespace std;
void triplet_sum(int arr[],int size,int sum){
    
    for(int k=0;k<size-3;k++){
        int i=k+1,j=size-1;
        while(i<j){
          if(arr[i]+arr[j]+arr[k]<sum){
            i++;
          }
          else if(arr[i]+arr[j]+arr[k]>sum){
            j--;
          }
          else{
            cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
            i++;
            j--;
          }
        }
    }
}
int main(){
int arr[] = {-4, -1, -1, 0, 1, 2};
int size = 6;
int target = 0;
triplet_sum(arr,size,target);

}
#include <iostream>
using namespace std;
void check_pair(int arr[],int size,int sum){
    int i=0,j=size-1;
    while(i<j){
        if(arr[i]+arr[j]==sum){
            cout<<arr[i]<<" "<<arr[j]<<endl;
            i++;
            j--;
        }
        else if(arr[i]+arr[j]>sum){
        
           j--;
        }
        else{
           i++;
        }




    }
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    check_pair(arr,7,7);
}
#include <iostream>
using namespace std;
void give_pairs(int arr1[],int size1,int arr2[],int size2){
    int i=0;
    int j=0;
    while(i<size1 && j<size2){
        if (arr1[i]>arr2[j]){
            j++;
        }
        else if (arr1[i]<arr2[j])
        {
            i++;
        }
        else{
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }

    }
}
int main(){
    int arr[6]={2,2,3,4,6,6};
    int brr[8]={2,3,3,4,4,5,6,6};
    give_pairs(arr,6,brr,8);

}
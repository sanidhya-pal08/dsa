#include <iostream>
using namespace std;
// int min_of_array(int arr[],int size,int start){
//     int min=arr[start];
//     int min_index=start;
//     for(int i=start;i<size;i++){
//         if(arr[i]<min){
//             min=arr[i];
//             min_index=i;
//         }
//     }
//     return min_index;
// }


// void selection_sort(int arr[],int size){
//     for(int i=0;i<size;i++){
//         int min_index=min_of_array(arr,size,i);
//         swap(arr[i],arr[min_index]);
//     }

// }



// more optimised

void selection_sort(int arr[],int size){
for(int i=0;i<size-1;i++){
    int min_index=i;
    for(int j=i+1;j<size;j++){
        if(arr[j]<arr[min_index]) min_index=i;
    }
    swap(arr[i],arr[min_index]);
}

}
void print_array(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}

int main(){
    int arr[5]={3,2,5,4,1};
    selection_sort(arr,5);
    print_array(arr,5);

}
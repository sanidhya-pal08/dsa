/*Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color 
are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.*/

// #include <iostream>
// using namespace std;

// void print_array(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// void sort_0_1_2(int arr[],int size){
//     int index=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==0){
//             swap(arr[i],arr[index]);
//             index++;
//         }
//     }
//     int j=size-1;
//     int i=index;
//     while(i<j){
//         if(arr[i]==2 && arr[j]==1){
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//         }
//         else if(arr[i]==1 && arr[j]==2){
//             i++;
//             j--;
//         }
//         else if(arr[i]==2 && arr[j]==2){
//             j--;
//         }
//         else if(arr[i]==1 && arr[j]==1){
//             i++;
//         }
        

//     }
//     print_array(arr,size);
    
// }
// int main(){
//     int arr[6]={2,0,2,1,1,0};
//     sort_0_1_2(arr,6);
//     return 0;
// }



// 2nd approach----------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

void print_array(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void sort_0_1_2(int arr[],int size){
    int index=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            swap(arr[i],arr[index]);
            index++;
        }
    }
    for(int i=index;i<size;i++){
        if(arr[i]==1){
            swap(arr[i],arr[index]);
            index++;

        }

    }
    print_array(arr,size);
    
}
int main(){
    int arr[6]={2,0,2,1,1,0};
    sort_0_1_2(arr,6);
    return 0;
}

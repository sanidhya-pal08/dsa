/*Given an array of integers arr, return true if the number of 
occurrences of each value in the array is unique or false otherwise.*/
#include <iostream>
using namespace std;
const int MAX = 1000;
bool unique_element_checker(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                return false;
            }
        }
        
    }
    return true;

}

bool frequency_checker(int arr[],int size){
    bool marked[MAX]={false};
    int frequency_arr[MAX];
    int k=0;
    for(int i=0;i<size;i++){
        if(marked[i]==false){
            int count=1;
            for(int j=i+1;j<size;j++){
            
                if(arr[i]==arr[j]){
                    count++;
                    marked[j]=true;
                }
            }
            frequency_arr[k]=count;
            k++;
        }
        marked[i]=true;
    }
     return unique_element_checker(frequency_arr,k);


}


int main(){
    int arr[7]={1,2,1,3,1,2,3};
    bool ans=frequency_checker(arr,7);
    if(ans){
        cout<<"all of the frequencies are unique";
    }
    else{
        cout<<"all of the frequencies are not unique";
    }
    return 0;

}
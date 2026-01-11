/*Given an integer array nums of length n where all the integers of nums are in the
 range [1, n] and each integer appears at most twice, return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant auxiliary space,
 excluding the space needed to store the output

 */

 #include <iostream>
 using namespace std;
 const int MAX=1000;

 void print_array(int arr[],int size){
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
     }


 }
 void repeated_element_array(int arr[],int size){
    bool marked[MAX]={false};
    int elements_repeating[MAX];
    int k=0;
    for(int i=0;i<size;i++){
        bool is_repeated=false;
        if(marked[i]==false){
            for(int j=i+1;j<size;j++){
                if(arr[i]==arr[j]){
                    marked[j]=true;
                    is_repeated=true;
                }

            }
        if (is_repeated){
            elements_repeating[k]=arr[i];
            k++;
        }
            

        }
        marked[i]=true;

    }
    print_array(elements_repeating,k);


 }
 int main(){
    int arr[10]={1,2,2,3,4,5,6,6,3,1};
    repeated_element_array(arr,10);
 }
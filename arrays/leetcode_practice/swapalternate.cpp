#include <iostream>
using namespace std;
void swapalternate(int arr[],int n){
    for(int i=0;i<n-1;i+=2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
  
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
}
int main(){
    int crr[]={1,2,3,4,5};
    int brr[]={1,2,3,4,5,6};
    swapalternate(crr,5);
    printarray(crr,5);
    swapalternate(brr,6);
    printarray(brr,6);

    return 0;
    
}
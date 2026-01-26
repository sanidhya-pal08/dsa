#include <iostream>
using namespace std;

float decimal_part(int integer,int num,int precision){
            float decimal=integer;
            float factor=0.1;
            for(int i=0;i<precision;i++){
                while((decimal+factor)*(decimal+factor)<=num){
                    decimal=decimal+factor;
                }
                factor/=10;
            }
            return decimal;
    
}
int find_index(int num){
    if (num==0){
        return 0;
    }
    if(num==1){
        return 1;
    }
    int start =1;
    int end = num;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        
        if(mid==num/mid){
            return mid;
        }
        else if(mid<num/mid){
            start=mid+1;
            ans=mid;
        }
        else{
            end=mid-1;

        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    int integer = find_index(12);
    cout<<decimal_part(integer,12,5);

    
}
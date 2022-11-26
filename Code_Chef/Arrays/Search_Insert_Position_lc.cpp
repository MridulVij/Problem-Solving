#include<iostream>
using namespace std;

int main(){

int i, n=4, target=5,j;
int nums[n] = {1,3,5,6};
for(i=0; i<n; i++){
    if(nums[i]==target){
        cout<<i;
    }
    else{
        for(i=0; i<n; i++){
            j=i-1;
            temp=nums[i];
            while(j>=0 && nums[j]>x){
                nums[j+1]=nums[j];
                j--;
            }
            nums[j+1]=temp;
        }
        cout<<i<<j;
    }
}
return 0;
}

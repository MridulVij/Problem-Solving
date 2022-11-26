#include<bits/stdc++.h>
//#include<iostream.h>
#include<conio.h>

using namespace std;

class Solution{
public:
    int missingNumber(vector<int>& nums) {
        int i,sum=0,temp=0,j;
        for(i=0; i<=nums.size()-1; i++){
                for(j=0; j<=nums.size()-1; j++){
                if(nums[i+1]>nums[i]){
                 temp = nums[i];
                 nums[i] = nums[i+1];
                 nums[i+1] = temp;
                        }
                }
        }
        int k;
        for(k=0; k<temp.size(); k++){
// pending
           break;
        }
        return sum;
    }
};

int main(){
Solution s;
// test case 1
//vector<int>nums = {10,20,40,50,60,23,34,44};
// test case 2
vector<int>nums = {1,0,3,4,5,6,7,8,9};

//int size = nums.size();
for(int i=0; i<nums.size(); i++){
cout<<s.missingNumber(nums)<<" ";
}
return 0;
}

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int majorityElement() {
        vector<int>nums = {3,2,3};
    int count, majority_ele=0, i;
    for(i=0; i<nums.size(); i++){
        if(count==0) majority_ele = nums[i];
        if(majority_ele == nums[i]) count++;
        else count -= 1; // count = count -1;
    }
    return majority_ele;
    }
};

int main(){
Solution s;
cout<<s.majorityElement();
return 0;
}

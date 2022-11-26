#include <bits/stdc++.h>
//#include <iostream>
//#include <vector>
using namespace std;



class Solution 
{
public:
    int singleNumber(vector<int>& nums) 
    {
         map<int,int> count;
         for(int x: nums)
         {
             count[x]++; //key value pair created
         }
         for (auto i : count)
         {
             if(i.second==1)// checked
             {
                return i.first; 
             }
         }
        return 0;
    }
};



int main()
{
 Solution s;
 int var = 3;
 vector<int>nums(3,2,2,3);
 cout<<s.removeElement(vector<int>nums, var);
// pending
return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Solution{
 int i=0,l=0,r,temp=0;
 public:
 void function(vector<int>&v){
  r=v.size()-1;
  while(l<=r){
   temp=v[l];
   v[l]=v[r];
   v[r]=temp;
   l++;
   r--;
  }
  for(i=0; i<v.size(); i++){
   cout<<v[i]<<" ";
  }
  cout<<"\n";
 }
 
};

int main()
{
Solution s;
vector<int>v = {10,30,20,50,60,49,69,23,45};
s.function(v);

return 0;
}

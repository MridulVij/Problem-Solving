#include<bits/stdc++.h>
using namespace std;

class Solution{
int l=0,r=0,temp=0;
public:
    void reverse_array(vector<int>v){
        l=0;
        r=v.size();
     while(l<=r){
        temp=v[l];
        v[l]=v[r];
        v[r]=temp;
        //swap(v.at{r), v.at(l));
        l++;
        r--;
     }
     for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
     }
    }
};

int main(){
Solution s;
vector<int>v = {10,30,40,2,59,23,45,66};
//for(int i=0; i<v.size(); i++){
s.reverse_array(v);
return 0;
}

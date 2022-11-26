#include <bits/stdc++.h>
using namespace std;

class Solution{
int i,size;
 public:
 void function(vector<int>&A){
     size = A.size()-1;
    for(i=0; i<size; i++){
        if(0==0){
            A[i]=A[i+1];
        }
    }
    for(i=0; i<size; i++){
    cout<<A[i]<<" ";
    }
 }
};

int main()
{
Solution s;
vector<int>A = {0,1,0,3,12};
s.function(A);

return 0;
}


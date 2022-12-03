#include <bits/stdc++.h>
using namespace std;

class Solution{
int i,sum=0;
 public:
 void function(int A[], int n){
    for(i=0; i<n; i++){
        sum += A[i];
    }
    cout<<"Sum of n numbers is: "<<sum;
 }
 
};

int main()
{
Solution s;
int n, i;
int A[10];
cout<<"\nEnter the amount of number you want to sum!\n";
cin>>n;
cout<<"\nEnter the numbers you want to sum!\n";
for(i=0; i<n; i++) cin>>A[i];
s.function(A,n);

return 0;
}

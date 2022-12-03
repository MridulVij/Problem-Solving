#include <bits/stdc++.h>
using namespace std;

class Solution{

 public:
 int i,nextNumber=0;
 void function(int a, int b, int n){
    cout<<a<<" "<<b<<" ";
    for(i=1; i<n; i++){
        nextNumber = a+b;
        cout<<nextNumber<<" ";
        a=b;
        b=nextNumber;
    }
 }
 
};

int main()
{
Solution s;
int a=0,b=1,n=0;
//cout<<"\nEnter the Fibonacci Series Starting Number!!!\n";
//cin>>a>>b;
cout<<"\nEnter the Size of Fibonacci Series!!!\n";
cin>>n;
s.function(a,b,n);

return 0;
}


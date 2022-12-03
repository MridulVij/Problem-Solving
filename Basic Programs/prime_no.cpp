#include <bits/stdc++.h>
using namespace std;

class Solution{
int i;
bool isPrime = 1;
 public:
 void function(int n){
    for(i=2; i<n; i++){
        if(n%i==0){
            isPrime = 0;
            break;
        }
    }
    if(isPrime == 0)
    cout<<"\nNot a Prime Number!\n";
    else
    cout<<"\nThis is Prime Number!\n";
 }
 
};

int main()
{
Solution s;
int n;
cin>>n;
s.function(n);

return 0;
}

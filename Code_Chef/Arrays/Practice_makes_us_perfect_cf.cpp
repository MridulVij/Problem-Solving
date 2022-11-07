// Code is Working but Giving Runtime Error in Codechef

#include<iostream>
using namespace std;
int main()
{
    int i, weeks=4;
    int Arr[weeks];
    for(i=0; i<weeks; i++){
        cin>>Arr[i];
    }
    int sum=0;
    for(i=0; i<weeks; i++){
        if(Arr[i]>=10){
            sum++;
        }
    }
    cout<<sum;
}

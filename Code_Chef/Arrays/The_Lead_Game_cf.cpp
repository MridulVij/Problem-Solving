#include <iostream>
using namespace std;
// My code Working but test cases failed
/*
int main() {
	// your code goes here
    int N,i,sum=0;
    cin>>N;
    int Arr1[N];
    int Arr2[N];
    for(i=1; i<=N; i++)
    {
        cin>>Arr1[i]>>Arr2[i];
    }
    for(i=1; i<=N; i++)
    {
        sum = Arr1[i]-Arr2[i];
    if(sum>50){
        cout<<i<<" "<<sum;
    }
    }
	return 0;
}
*/
//

#include <iostream>
using namespace std;

int main() {
	int n,diff=0,player=0,sum1=0,sum2=0;
	cin>>n;
	while(n--)
	{
	    int a,b;
	    cin>>a>>b;
	    sum1+=a;
	    sum2+=b;
	    if(abs(sum1-sum2)>=diff)
	    {
	        diff=abs(sum1-sum2);
	        if(sum1>sum2)
	        player=1;
	        else
	        player=2;
	    }

	}
	cout<<player<<" "<<diff;

	return 0;
}

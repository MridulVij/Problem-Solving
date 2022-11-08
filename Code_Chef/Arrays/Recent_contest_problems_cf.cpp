#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int t,N,i;
	cin>>t;
	while(t--)
    {
        cin>>N;
        int S=0; // pending
        int L=0; //pending
        for(i=0; i<N; i++)
        {
            string s;
            cin>>s;
            if(s=="START38")
            {
                S++;
            }
            else if(s=="LTIME108")
            {
                L++;
            }
        }
        cout<<S<<" "<<L<<"\n";
	}
	return 0;
}

//codechef questions

// Q1 - BATTERY LOW
//
#include<iostream>
using namespace std;
/*
int main()
{
    int t,x;
    cin>>t;
    while(t--){
        cin>>x;
        if(x<=15){
            cout<<"Yes";
        }
        else {
            cout<<"No";
        }
        cout<<endl;
    }
}
*/

// INCREASE IQ
/*
//My code
int main()
{
    int x;
    cin>>x;
    x+=7;
    if(100<=x || x<=169)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}

// Others Code

*/

// VOLUME UP
/*
int main()
{
    int t, x, y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
    if(1<=x || y<=100)
        x = x-y;
    cout<<x;
    }
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(2);

    int a;
    float b;
    cin >> a >> b;

    if ((a%5==0) && (b-a-0.5>=0))
    {
        cout << fixed << b-a-0.5 << endl;
    }
    else
    {
        cout << fixed << b << endl;
    }

    return 0;
}
*/

// CABS SERVICES
/*
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){ // first line
	 int x,y;
    cin>>x>>y; // first only line
    if(x<y)
    cout<<"FIRST\n";
    else if(x==y)
    cout<<"ANY\n";
    else
    cout<<"SECOND\n";
	}
	return 0;
}
*/

// SPEED LIMIT
/*
int main(){
    int t,alice,bob;
    int A,X,B,Y;
    cin>>t;
    while(t--){
        cin>>A>>X>>B>>Y;
    alice = A/X;
    bob = B/Y;
    if(bob==alice)
        cout<<"EQUAL";
    else if(alice>bob)
        cout<<"ALICE\n";
    else if(bob<alice)
        cout<<"BOB\n";
    else{};
    }
}
*/

/*
int main(){
	// your code goes here
	int t;
	int X,Y,A;
	cin>>t;
	while(t--){
	    cin>>X>>Y>>A;
	    if(A>=Y)
	    cout<<"YES\n";
	    else if(A<=X)
	    cout<<"NO\n";
	    else{};
	}
	return 0;
}
*/


// water bottles in chefland
/*
#include<iostream>
using namespace std;

int main(){
 int t,sum;
 int N,X,K;
 cin>>t;
 while(t--)
{
    cin>>N>>X>>K;
    sum = K/X;
    if(sum<=N)
    cout<<sum<<"\n";
    else
    cout<<N<<"\n";
}
}
*/


// Course Registration
/*
#include <iostream>
using namespace std;

int main(){
 int t,N,M,K;
 long long sum;
 cin>>t;
 while(t--){
    cin>>N>>M>>K;
    if(N<=M-K)
        cout<<"YES\n";
    else if(N>M-K)
        cout<<"NO\n";
 }
}
*/



























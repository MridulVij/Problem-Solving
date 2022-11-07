//

#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int T,N,i;

    cin>>T;
    while(T--){
        cin>>N;
        int Arr[N];
        for(i=0; i<N; i++){
            cin>>Arr[i];
        }
       int sum=0;
        for(i=0; i<N; i++){
            if(Arr[i]>=1000){
                sum++;
            }
        }
	cout<<sum;
    }
}

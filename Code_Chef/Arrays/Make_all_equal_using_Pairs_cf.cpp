#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t,n,i,j;
    cin>>t;
    while(t--){
        cin>>n;
        int Arr[n];
        for(i=0; i<n; i++){
            cin>>Arr[i];
        }
        int var1=0;
        for(i=0; i<n; i++){
                int var2=0;
            for(j=i+1; j<n; j++){
                if(Arr[i]==Arr[j]){
                    var1++;
                }
            }
            if(var1>var2){
                var2++;
            }
        }
        cout<<n-var1-1<<endl;
    }
	return 0;
}

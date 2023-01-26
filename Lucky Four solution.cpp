#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	scanf("%d",&T);
	
	for(int i=0; i<T; i++){
	    int n,ans=0;
	    scanf("%d",&n);
	    while(n>0){
	        if(n%10==4){
	            ans++;
	        }
	        n/=10;
	    }
	    prinf("%d\n",ans);
	}
	return 0;
}

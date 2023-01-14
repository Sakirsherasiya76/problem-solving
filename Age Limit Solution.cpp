#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
	    int X,Y,A;
	    cin>>X>>Y>>A;
	    if(X<=A&&A<Y)
	    {
	        cout<<"YES\n";
	    }
	    else
	    {
	        cout<<"NO\n";
	    }
	}
	return 0;
}

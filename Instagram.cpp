#include <iostream>
using namespace std;

int main() {
    
    int T;
    cin>>T;
	for(int i=0;i<T;i++)
	{
	    int X,Y;
	    cin>>X>>Y;
	    if(X>Y*10)
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

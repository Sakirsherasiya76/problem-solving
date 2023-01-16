#include <iostream>
using namespace std;

int main() {
	int a,x,y;
	cin>>a;
	
	for(int i=0;i<a;i++)
	{
	    
	    cin>>x>>y;
	    if(x>y)
	    {
	       cout<<"SECOND"<<endl;
	    }
	    else if(y>x)
	    {  cout<<"FIRST"<<endl;
	       
	    }
	    else
	    {
	       cout<<"ANY"<<endl;
	    }
	    
	}
	return 0;
}

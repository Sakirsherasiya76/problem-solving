#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int dis = x*100;
	    int cloth = (y*100)/10;
	    if(dis==cloth) cout <<"cloth"<<endl;
	    else if (dis>cloth) cout <<"cloth"<<endl;
	    else cout<<"disposable"<<endl;
	}
	return 0;
}

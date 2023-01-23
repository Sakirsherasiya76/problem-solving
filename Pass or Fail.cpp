#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,P,X;
	    cin>>N>>P>>X;
	    int correct = P*3;
	    int wrong = (N-P) * -1;
	    int total = correct + wrong;
	    if(total<X){
	        cout<<"FAIL"<<endl;
	    }
	    else{
	        cout<<"PASS"<<endl;
	    }
	}
	return 0;
}

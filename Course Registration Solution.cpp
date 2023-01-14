#include <iostream>
using namespace std;


int main() {
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int N,M,K;
        cin>>N>>M>>K;
        if((N+K)<=M){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
	
	return 0;
}

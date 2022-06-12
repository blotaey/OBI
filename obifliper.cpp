#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int p,r;
	cin >> p >> r;
	
	if(p==1){
		if(r==0){
			cout << "B" << endl;
		}
		else{
			cout << "A" << endl;
		}
	}
	else{
		cout << "C" << endl;
	}

	return 0;
}

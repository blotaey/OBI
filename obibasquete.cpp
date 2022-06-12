#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int d,c;
	cin >> d;
	
	if(d<=800){
		c = 1;
	}
	else if(d > 800 && d <=1400){
		c = 2;
	}
	else{
		c = 3;
	}
	
	cout << c << endl;
	
	return 0;
}

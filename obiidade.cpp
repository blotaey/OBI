#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int m,a,b,c;
	cin >> m >> a >> b;
	
	c = abs(m-a-b);
	
	if(a>b && a>c){
		cout << a << endl;
	}
	else if(b >> a && b >> c){
		cout << b << endl;
	}
	else{
		cout << c << endl;
	}

	return 0;
}

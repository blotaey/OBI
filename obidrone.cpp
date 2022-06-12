#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a,b,c;
	int h,l;
	
	cin >> a >> b >> c;
	cin >> h >> l;
	
	if(((a<=h and b<=l) or (b<=h and a<=l))
		or ((a<=h and c<=l) or (c<=h and a<=l))
		or ((b<=h and c<=l) or (c<=h and b<=l))){
			cout << "S";
	}
	else{
		cout << "N";
	}

	return 0;
}

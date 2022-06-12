#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a,m,s;
	cin >> a >> m;

	s = a + m;
	
	if(s>50){
		cout << "N" << endl;
	}
	else{
		cout << "S" << endl;
	}

	return 0;
}

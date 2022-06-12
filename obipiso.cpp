#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int L,C;
	cin >> L >> C;
	
	cout << L*C + (L-1) * (C-1) << endl;
	cout << 2 * (L-1) + 2*(C-1) << endl;
	

	return 0;
}

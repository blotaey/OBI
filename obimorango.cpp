#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int c1,l1,c2,l2;
	cin >> c1 >> l1 >> c2 >> l2;

	cout << max(c1*l1,c2*l2);

	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int l,k;
	cin >> l >> k;
	if((l-1)/2 == (k-1)/2){
		cout << "oitavas" << endl;
	}
	else if((l-1)/4 == (k-1)/4){
		cout << "quartas" << endl;
	}
	else if((l-1)/8 == (k-1)/8){
		cout << "semifinal" << endl;
	}
	else {
		cout << "final" << endl;
	}
	
	


	return 0;
}

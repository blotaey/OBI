#include<bits/stdc++.h>
using namespace std;

int main(){
	int a1, d1, a2, d2;
	cin >> a1 >> d1 >> a2 >> d2;
	
	if( a1 != d2 and d1 == a2){
		cout << "1" << endl;
	}
	else if(a2 != d1 and d2 == a1){
		cout << "2" << endl;
	}
	else{
		cout << "-1" << endl;
	}

	return 0;
}

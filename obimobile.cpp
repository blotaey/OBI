#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	
	if(a == b + c + d){
		if(b + c == d){
			if(b==c){
				cout << "S" << endl;
			}
			else{
				cout << "N" << endl;
			}
		}
		else{
			cout << "N" << endl;
		}
		
	}
	else{
		cout << "N" << endl;
	}
	

}

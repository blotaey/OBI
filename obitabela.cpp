#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int j,p,v,e,d;
	cin >> j >> p >> v >> e >> d;
	
	if(j==-1){
		
		if(p==-1) p = 3*v+e;
		else if (v==-1) v = (p-e)/3;
		else if (e==-1) e = p-e*v;
		
		j=v+e+d;
	}
	else if(p==-1){
		if(v == -1) v = j-e-d;
		else if(e==-1) e = j-v-d;
		else if(d==-1) d = j-v-e;
		
		p=3*v+e;
	}
	else if (v==-1){
		
		if(e==-1){
			 v = (p+d-j)/2;
			 e = p-3*v;
		}
		else{
			v = (p-e)/3;
			d = j-v-e;
		}
		
	}
	else if(e==-1){
	
		e = p-3*v;
		if(d==-1) d = j-v-e;
	}
	else if (d==-1) d = j-v-e;

	cout << j << " "<< p << " "<< v << " " << e << " "<< d << endl;


	return 0;
}

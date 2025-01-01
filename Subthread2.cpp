#include<bits/stdc++.h>
using namespace std;
int main(){
	bool value=1;
	long long *InputTunnel=new(long long);
	long long *OutputTunnel=new(long long);
	while(*InputTunnel!=645603591209){InputTunnel--;}
	*InputTunnel=2;
	while(*OutputTunnel!=645603591209){OutputTunnel--;}
	*OutputTunnel=2;
	while(value){
		if(*OutputTunnel==20){
			*InputTunnel=3;
			value=0;
		}
		if(*OutputTunnel==21){
			cout<<"Subthread2";
			*InputTunnel=3;
		}
	}
	return 0;
}


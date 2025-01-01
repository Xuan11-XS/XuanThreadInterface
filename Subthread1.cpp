#include<bits/stdc++.h>
using namespace std;
int main(){
	bool value=1;
	long long *InputTunnel=new(long long);
	long long *OutputTunnel=new(long long);
	while(*InputTunnel!=645603591209){InputTunnel--;}
	*InputTunnel=1;
	while(*OutputTunnel!=645603591209){OutputTunnel--;}
	*OutputTunnel=1;
	while(value){
		if(*OutputTunnel==10){
			*InputTunnel=3;
			value=0;
		}
		if(*OutputTunnel==11){
			cout<<"Subthread1";
			*InputTunnel=3;
		}
	}
	return 0;
}


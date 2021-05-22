#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
int n,m,j,k,s;
int i[21][21];
int max[21];
bool tr;

while(cin>>n>>m){
	s=0;
	for(j=1;j<=n;j++){
		max[j]=0;
		for(k=1;k<=m;k++){
			cin>>i[j][k];
			if(i[j][k]>max[j]){
				max[j]=i[j][k];
			}
		}
		s+=max[j];
	}
	cout<<s<<"\n";
	
	tr=false;
	
	for(j=1;j<=n;j++){
		if(s%max[j]==0){
			cout<<max[j]<<" ";
			tr=true;
		}
	}
	if(tr==false){
		cout<<-1;
	}
	cout<<"\n";
}
   return 0;
}




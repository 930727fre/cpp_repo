#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int n,ans;
	int j,k,temp;
	ans=0;
	cin>>n;
	int f[n];

	for(j=0;j<n;j++){
		cin>>f[j];
	}

	for(j=0;j<n;j++){
		k=j;
		while(1){
			if(f[k]!=k){
				if(f[k]!=-1){
					if(f[k]==j and f[j]==-1){
						ans++;
						f[k]=-1;
					}
					else{
						temp=f[k];
						f[k]=-1;
						k=temp;
					}
					
				}
				else{
					break;
				}
			}
			else{
				ans++;
				break;
			}
		}
	}
	cout<<ans<<endl;
}

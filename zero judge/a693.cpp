#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
int n,m,l,r,a,b,total;
int index[100000];

while(cin>>n){
cin>>m;
for(a=0;a<n;a++){
	cin>>index[a];
}
for(a=0;a<m;a++){
	total=0;
	cin>>l>>r;
	l--;
	r--;
	for(b=l;b<=r;b++){
		total+=index[b];
	}
	cout<<total<<"\n";
}
}
   return 0;
}




#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
int h,m,s,t;
int total,j,k;
cin>>h>>m>>s>>t;

total=(s+60*(m+60*h));
if(t>0){
	for(j=1;j<=t;j++){
		total+=5400;
	}
}
else if(t<0){
	for(j=1;j<=-t;j++){
		total-=5400;
	}
}

if(total<0){
	total=129600+total;
}
while(total>129600){
	total-=129600;
}


h=0;
m=0;
s=0;
while(1){
	if(total>=3600){
		total-=3600;
		h+=1;
	}
	else{
		break;
	}
}
while(1){
	if(total>=60){
		total-=60;
		m+=1;
	}
	else{
		break;
	}
}
s=total;
cout<<h;
cout<<":";
if(m<10){
	cout<<"0"<<m;
}
else{
	cout<<m;
}
cout<<":";
if(s<10){
	cout<<"0"<<s;
}
else{
	cout<<s;
}
cout<<endl;

   return 0;
}
//3 00 00 1


/*header:C:\Program Files\Dev-Cpp\MinGW64\lib\gcc\x86_64-w64-mingw32\4.9.2\include
#include <bits/stdc++.h>
#include <algorithm>*/


#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(void)
{
int n,ans;
int j,k,temp;
int alp[26];
string str;

for(j=0;j<26;j++){
	alp[j]=0;
}

ans=0;
cin>>n;
for(;n>=0;n--){

	getline(cin,str);
	cout<<str;
	for(k=0;k<str.length();k++){
		temp=str[k];
		if((int(temp)>=65 && int(temp)<=90 )){
			alp[int(temp)-65]++;
		}
		else if((int(temp)>=97 && int(temp)<=122)){
			alp[int(temp)-97]++;
		}
	}

}
int max=-1;
for(j=0;j<26;j++){
	if(alp[j]>max){
		max=alp[j];
	}
}
for(j=max;j>=1;j--){
	for(k=0;k<26;k++){
		if(alp[k]==j){
			cout<<char(k+97)<<" "<<j<<endl;
		}
	}
}
return 0;
}

/*
3
This is a test.
Count me 1 2 3 4 5.
Wow!!!! Is this question easy?
*/


/*header:C:\Program Files\Dev-Cpp\MinGW64\lib\gcc\x86_64-w64-mingw32\4.9.2\include
#include <bits/stdc++.h>
#include <algorithm>*/


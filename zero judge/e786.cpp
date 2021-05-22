#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(void)
{
string str;
int j,k,temp;
cin>>str;
bool ans=0;
if(str.size()%2==0){
	for(j=0;j<str.size();j++){
		if(str[j]!=str[str.size()-j-1]){
			ans=0;
			break;
		}
		else{
			ans=1;
		}
	}
}
else{
	ans=0;
}
if(ans=1){
	cout<<"YES"<<endl;
	for(j=0;j<str.size()/2;j++){
		cout<<str[j];
	}
	cout<<endl;
}
else{
	cout<<"NO";
}


   return 0;
}



/*header:C:\Program Files\Dev-Cpp\MinGW64\lib\gcc\x86_64-w64-mingw32\4.9.2\include
#include <bits/stdc++.h>
#include <algorithm>*/


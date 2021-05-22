#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main(void)
{
srand(time(NULL));
string str;
int n,top=1;
int j,k;
bool stack[130];
bool ans;
cin>>n;

for(j=1;j<=n;j++){
	getline(cin,str);
	top=0;
	ans=true;
	for(k=0;k<str.length();k++){
		if(str[k]=='('){
			top++;
			stack[top]=0;
		}
		else if(str[k]=='['){
			top++;
			stack[top]=1;
		}
		else if(str[k]==']'){
			if(stack[top]==1){
				top--;
			}
			else{
				cout<<"No"<<endl;
				ans=false;
				break;
			}
		}
		else if(str[k]==')'){
			if(stack[top]==0){
				top--;
			}
			else{
				cout<<"No"<<endl;
				ans=false;
				break;
			}
		}
	}
	if(ans==true){
		cout<<"Yes"<<endl;
	}
}

   return 0;
}//				3([]) (([()]))) ([()[]()])()



/*header:C:\Program Files\Dev-Cpp\MinGW64\lib\gcc\x86_64-w64-mingw32\4.9.2\include
#include <bits/stdc++.h>
#include <algorithm>*/


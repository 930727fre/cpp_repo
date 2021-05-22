#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void)
{
int n;
long long a,b,c;	

cin>>n;
for(int temp=1;temp<=n;temp++){
	cin>>a>>b>>c;

	switch(a){
		case 1:
			cout<<b+c;
			break;
		case 2:
			cout<<b-c;
			break;
		case 3:
			cout<<b*c;
			break;
		case 4:
			cout<<b/c;
			break;
	}
	cout<<endl;
}


   return 0;
}



/*header:C:\Program Files\Dev-Cpp\MinGW64\lib\gcc\x86_64-w64-mingw32\4.9.2\include
#include <bits/stdc++.h>
#include <algorithm>*/


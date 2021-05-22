#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
int n;
int max,j,k,temp;

cin>>n;
int h[n+1];

for(j=1;j<=n;j++){
	h[j]=0;
}
for(j=1;j<=n;j++){
	cin>>temp;
	for(k=1;k<=temp;k++){
		h[k]++;
	}
}
max=-1;
for(j=1;j<=n;j++){
	if(h[j]*j>max){
		max=h[j];
	}
}
cout<<max;
   return 0;
}

//12 2 3 4 8 5 2 4 3 3 4 5 1


/*header:C:\Program Files\Dev-Cpp\MinGW64\lib\gcc\x86_64-w64-mingw32\4.9.2\include
#include <bits/stdc++.h>
#include <algorithm>*/


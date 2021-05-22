#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int divert(int);
int x,y;

int main(void)
{
int n,dir;
int j,k,temp;
cin>>n;
int input[n][n];
cin>>dir;

for(j=0;j<n;j++){
	for(k=0;k<n;k++){
		cin>>input[k][j];
	}
	
}

x=(n-1)/2;
y=(n-1)/2;
cout<<input[x][y];

for(j=1;j<=n;j++){// n is maximum steps
		for(k=1;k<=2;k++){//k for divert two times
			if(k==1&&j==n){//the round of j,we have to add an exception(move the third time)
				for(int temp=2;temp<=j;temp++){
						switch (dir){
							case 0:
								x--;
								break;
							case 1:
								y--;
								break;
							case 2:
								x++;
								break;
							case 3:
								y++;
								break;
						}
						cout<<input[x][y];
					}
				break;
			}
			for(int temp=1;temp<=j;temp++){
				switch (dir){
					case 0:
						x--;
						break;
					case 1:
						y--;
						break;
					case 2:
						x++;
						break;
					case 3:
						y++;
						break;
				}
				cout<<input[x][y];
			}
			dir=divert(dir);

		}

		
	}

   return 0;
}



int divert(int temp){
	if(temp==3){
		temp=0;
	}
	else{
		temp++;
	}
	return temp;
}

/*header:C:\Program Files\Dev-Cpp\MinGW64\lib\gcc\x86_64-w64-mingw32\4.9.2\include
#include <bits/stdc++.h>
#include <algorithm>*/


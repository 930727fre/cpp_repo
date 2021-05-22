#include <iostream>
#include <cstdlib>
#include <ctime>
#include <queue>
using namespace std;

int main(void)
{
srand(time(NULL));

int j,k;
int n,top;	
queue<int> qu;

while(cin>>n){
	if(n==0){
		break;
	}
	for(j=1;j<=n;j++){
		qu.push(j);
	}
	cout<<"Discarded cards: ";
	while(qu.size()>1){
		cout<<qu.front();
		qu.pop();
		if(qu.size()>1){
			cout<<", ";
		}
		qu.push(qu.front());
		qu.pop();
	}
	cout<<endl<<"Remaining card: "<<qu.front()<<endl;
	qu.pop();	//clear the queue
}


   return 0;
}



/*header:C:\Program Files\Dev-Cpp\MinGW64\lib\gcc\x86_64-w64-mingw32\4.9.2\include
#include <bits/stdc++.h>
#include <algorithm>*/


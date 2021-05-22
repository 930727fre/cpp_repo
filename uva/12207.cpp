#include <iostream>
#include <cstdlib>
#include <ctime>
#include <list>
using namespace std;

int main(void)
{
srand(time(NULL));
int j,k;
long long int p,c,insert,count;
char word;
list<long long int> li;

count=1;
while(cin>>p>>c){
	li.clear();
	if(p==0&&c==0){
		break;
	}
	cout<<"Case "<<count<<":"<<endl;
	count++;	
	for(j=1;j<=p;j++){
		li.push_back(j);
	}
	for(j=1;j<=c;j++){
		cin>>word;
		if(word=='E'){
			cin>>insert;
			li.remove(insert);
			li.push_front(insert);
		}
		else{
			cout<<li.front()<<endl;
			li.push_back(li.front());
			li.pop_front();
		}
	}
	cout<<endl;
}
   return 0;
}



/*header:C:\Program Files\Dev-Cpp\MinGW64\lib\gcc\x86_64-w64-mingw32\4.9.2\include
#include <bits/stdc++.h>
#include <algorithm>*/


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void)
{
int a,b,c;
int j,k,temp;

cin>>a>>b>>c;

if(a>c){
	temp=c;
	c=a;
	a=temp;
}
if(b>c){
	temp=c;
	c=b;
	b=temp;
}

if(a>b){
	temp=b;
	b=a;
	a=temp;
}
cout<<a<<" "<<b<<" "<<c<<endl;

if(a+b<=c){
	cout<<"No";
}
else if(a*a+b*b<c*c){
	cout<<"Obtuse";
}
else if(a*a+b*b==c*c){
	cout<<"Right";
}
else if(a*a+b*b>c*c){
	cout<<"Acute";
}

   return 0;
}



/*header:C:\Program Files\Dev-Cpp\MinGW64\lib\gcc\x86_64-w64-mingw32\4.9.2\include
#include <bits/stdc++.h>
#include <algorithm>*/


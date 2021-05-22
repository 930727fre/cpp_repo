#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(void)
{
char temp;
string words;
for(int j=1;j<=25;j++){
	cin>>temp;
	words=words+","+temp;
}

cout<<words;

   return 0;
}



/*header:C:\Program Files\Dev-Cpp\MinGW64\lib\gcc\x86_64-w64-mingw32\4.9.2\include
#include <bits/stdc++.h>
#include <algorithm>*/


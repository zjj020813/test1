#include <iostream>
using namespace std;
#include <string>

int main()
{
	string str;
    getline(cin,str);
    //cout << str << endl;
	int i,j=0,n=0,m=0,p=0;
	for(i=0;i<str.size();i++)
	{
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
			j++;
		else if(str[i]==' ')
			n++;
		else if(str[i]>='0'&&str[i]<='9')
			m++;
		else
			p++;
	 } 
	 cout << j << endl;
	 cout << n << endl;
	 cout << m << endl;
	 cout << p << endl;

	
	return 0;
}

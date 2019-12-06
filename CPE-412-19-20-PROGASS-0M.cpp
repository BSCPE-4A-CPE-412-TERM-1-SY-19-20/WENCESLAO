//346231	
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int x=0, y=0, z=0;
	int table[6][2]={{1,0},{5,2},{5,3},{5,4},{1,4},{5,5}};
	char str[100];
		
	cout<<"Input:";
	cin>>str;
	
	cout<<"Output:";
	
		while(str[x]!='\0'){
		if (str[x]=='a'&&str[x+1]=='b'&&str[x+2]=='b'&&str[x+3]=='b')
	{
	z++;	
	}
	
		if(str[x]=='a')
	{
		y++;
	}
	x++;
}
	if(z==y)
	{
		cout<<"Accepted";
	}
	else
	{
		cout<<"Not Accepted";
	}
	cout<<endl;
	
	system ("PAUSE");
	return 0;
}

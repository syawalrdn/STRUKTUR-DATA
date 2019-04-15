#include <iostream>
using namespace std;

main()
{
	int i,n;
	cout<<"Masukkan Batas = "; cin>>n;
	
	for (i=0; i<n; i++)
	{
		cout<<i<<" "; 
	}
	cout<<endl;
	
	int x;
	x=0;
	cout<<"Mengulang While = ";
	while (x<n)
	{
		cout<<x<<" ";
		x++;
	}
	cout<<endl;
	
	int y;
	y=0;
	cout<"Mengulang do while = ";
	do
	{
		cout<<y<<" ";
		y++;
	}
	while (y<n);
	cout<<endl;
	
	cout<<"Perulangan for nested"<<endl;
	int a,b;
	for (a=0; a<n; a++)
	{
		for(b=0; b<=a; b++)
		{
			cout<<b;
		}
	cout<<endl;
	}
return(0);
}

#include <iostream>

using namespace std;
int b;
main()
{
	int a[10];
	int n, total;
	cout<<"PROGRAM MENGHITUNG TOTAL BARANG"<<endl;
	
	for (n=1; n<11; n++)
	{
		cout<<"Barang ke- "<<n<<" = "; cin>>b;
		total=b*10;
	}
	cout<<"\nTOTAL = "<<total;
}

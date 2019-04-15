#include <iostream>

using namespace std;

main()
{
	int a,b;
	cout<<"PROGRAM CETAK DERET BILANGAN GANJIL";
	cout<<"\nMasukkan Batas Bilangan = "; cin>>b;
	cout<<"\nBilangan Genap = ";
	for(a=1;a<=b;a++)
	if (a%2==1)
	cout<<a<<" ";
}

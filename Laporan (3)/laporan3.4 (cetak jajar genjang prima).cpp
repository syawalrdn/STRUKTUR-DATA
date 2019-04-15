#include <iostream>
using namespace std;

main()
{
	int batas, baris, kolom, hitung=0, nilai=1;
	cout<<"Masukkan Batas = "; cin>>batas;
	for (baris=1; baris<=batas; baris++)
	{
		for (int i=1; i<baris; i++)
		{
			cout<<" ";
		}
		for (kolom=1; kolom<=batas; kolom++)
		{
			do
			{
				hitung=0;
				for(int n=1; n<=nilai; n++)
				{
					if(nilai%n==0)
					{
						hitung++;
					}
				}
				if (hitung==2)
				{
					cout<<nilai<<" ";
				}
				nilai++;
			}
			while(hitung!=2);
		}
		cout<<endl;
	}
}

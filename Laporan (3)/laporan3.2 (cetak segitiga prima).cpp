#include <iostream>
using namespace std;

main()
{
	int batas, baris, kolom, hitung=0, nilai=1;
	cout<<"Masukkan Batas Tinggi \t = "; cin>>batas;
	for (baris=1; baris<=batas; baris++)
	{
		for (kolom=baris; kolom<=batas; kolom++)
		{
			do
			{
				hitung=0;
				for(int n=1; n<=nilai; n++)
				{
						if (nilai%n==0)
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

/* 
	for (int a=2; a<=y; a++)
	{
		cek=0;
		{
			for (int b=2; b<; b++)
					if (a%b==0)
					{
						cxk=1;
					}
					if (cek==0)
					{
					cout<<a<<" ";
					}
		}
	}
*/

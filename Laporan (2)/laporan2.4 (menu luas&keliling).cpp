#include <iostream>

using namespace std;

main()
{
	int pil,l1,l2,l3,l4,l5,k1,k2,k3,k4,ss,p,l,r;
	cout<<"\nPROGRAM MENGHITUNG LUAS DAN KELILING";
	cout<<"\n====================================";
	cout<<"\n1. LUAS & KELILING BUJUR SANGKAR \n2. LUAS & KELILING PERSEGI PANJANG \n3. LUAS & KELILING LINGKARAN";
	cout<<"\nMasukkan Pilihan = "; cin>>pil;
	if (pil==1)
	{
		cout<<"\nMENGHITUNG LUAS DAN KELILING BUJUR SANGKAR";
		cout<<"\nMasukkan Panjang Sisi = "; cin>>ss;
		l1=ss*ss;
		k1=4*ss;
		cout<<"\nLuas = "<<l1;
		cout<<"\nKeliling = "<<k1;
	}
	else if (pil==2)
	{
		cout<<"\nMENGHITUNG LUAS DAN KELILING PERSEGI PANJANG";
		cout<<"\nMasukkan Panjang = "; cin>>p;
		cout<<"\nMasukkan Lebar = "; cin>>l;
		l2=p*l;
		k2=2*(p*l);
		cout<<"\nLuas = "<<l2;
		cout<<"\nKeliling = "<<k2;
	}
		else if (pil==3)
	{
		cout<<"\nMENGHITUNG LUAS DAN KELILING LINGKARAN";
		cout<<"\nMasukkan Jari-jari Lingkaran= "; cin>>r;
		l3=3.14*r*r;
		k3=2*3.14*r;
		cout<<"\nLuas = "<<l3;
		cout<<"\nKeliling = "<<k3;
	}
}

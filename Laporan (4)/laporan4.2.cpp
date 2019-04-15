#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int Daftar (int hrg, int& ps1){
	int tarif,total;
		cout<<endl;
		cout<<"Tarif "<<endl;
		cout<<"1. 1 Jam = Rp."<<hrg<<endl;
		cout<<"2. 2 Jam = RP."<<hrg*2<<endl;
		cout<<"3. 3 Jam = Rp."<<(hrg*250/100)<<endl;
		cout<<"4. 24 Jam = Rp."<<hrg*10<<endl;
		cout<<"Silahkan Pilih \t : ";
		cin>>tarif;
		cout<<endl;
		
		switch (tarif){
		case 1 : {
			total = hrg;
			break;
		}
		case 2 : {
			total = hrg*2;
			break;
		}
		case 3 : {
			total = hrg*250/100;
			break;
		}
		case 4 : {
			total = hrg*10;
			int hari;
			cout<<"Lama Peminjaman : ";
			cin>>hari;
			total *= hari;
			break;
		}
	}
	cout<<endl;
	ps1--;
	cout<<"Total Harga : "<<total<<endl;
	return(total);
}

char nama(){
	char nm;
	cout<"masukkan nama	= ";cin>>nm;
	return(nm);
}

int main(){
	int ps1=2, ps2=3, ps3=4, ps4=5,tarif,total[2];
	int kodeBill[2],i=0,n,j=0;
	int kode;
	char ulang;
	char nm[20][10];
	do {
	system("CLS");
	cout<<"\t Daftar Rental PS\t"<<endl;
	cout<<"1. PS1 \t : "<<ps1<<endl;
	cout<<"2. PS2 \t : "<<ps2<<endl;
	cout<<"3. PS3 \t : "<<ps3<<endl;
	cout<<"4. PS4 \t : "<<ps4<<endl;
	cout<<"5. Daftar Kode Bill : "<<i<<endl;
	cout<<"6. Tampilkan Semua Bill "<<endl;
	cout<<"==========================="<<endl;
	nm[20][j] = nama();
	j++;
	cout<<"Silahkan Pilih \t : ";
	cin>>kode;
	
	switch (kode) {
		case 1 : { 
			if (ps1 >0){
				int hrg= 2000;
				i++;
				total[i]=Daftar(hrg, ps1);
			} else {
				cout<<"Persedian telah habis"<<endl;
			}
				break;
		}
		case 2 : {
			if (ps2 > 0){
				int hrg=3000;
				i++;
				total[i]=Daftar(hrg, ps2);
			} else {
				cout<<"Persedian telah habis"<<endl;
			}
			break;
		}
		case 3 : {
			if (ps3 > 0){
				int hrg=4000;
				i++;
				total[i]=Daftar(hrg, ps3);
			} else {
				cout<<"Persedian telah habis"<<endl;
			}
			break;
		}
		case 4 : {
			if (ps4 > 0){
				int hrg=5000;
				i++;
				total[i]=Daftar(hrg, ps4);
			} else {
				cout<<"Persedian telah habis"<<endl;
			}
			break;
		}
		case 5 : {
			cout<<endl;
			cout<<"Masukkan No Bill : ";
			cin>>n;
			cout<<"Bill Ke-"<<n<<endl;
			cout<<"HARGA \t\t : "<<total[n]<<endl;
			cout<<"nama \t : "<<nm[20][i];
			cout<<endl;
			i++;
			break;
		}
		case 6 : {
			cout<<endl;
			for (int j=1; j<=i; j++){
				cout<<"Bill Ke-"<<j<<endl;
				cout<<"Harga \t\t : "<<total[j]<<endl;
				cout<<"-------------------------"<<endl;
			}
			break;
		}
	}
	cout<<"Ingin Mengulang : ";
	cin>> ulang;
	} while (ulang =='y');
	return 0;
}


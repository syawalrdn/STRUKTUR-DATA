#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;

int pil;
void pilih();
void buat_baru();
void tambah_belakang();
void tambah_depan();
void tambah_setelah();
void hapus_depan();
void hapus_belakang();
void hapus_setelah();
void penukaran();
void cari();
void edit();
void tampil();

struct simpul{
	char nim[8], nama[80];
	int umur;
	struct simpul *next;
}mhs, *baru, *awal=NULL, *akhir=NULL, *hapus, *bantu, *tukar, *tukar1;

void clrscr(){
	system("cls");
}

int main(){
	do {
		cout<<"MENU SINGLE LINKEDLIST"<<endl;
		cout<<"1. Tambah Depan"<<endl;
		cout<<"2. Tambah Belakang"<<endl;
		cout<<"3. Hapus Depan"<<endl;
		cout<<"4. Hapus Belakang"<<endl;
		cout<<"5. Tampil"<<endl;
		cout<<"6. Cari"<<endl;
		cout<<"7. Tambah Setelah"<<endl;
		cout<<"8. Hapus Setelah"<<endl;
		cout<<"9. Edit "<<endl;
		cout<<"10. Penukaran"<<endl;
		cout<<"12. Exit"<<endl;
		cin>>pil;
		pilih();
	} while (pil!=12);
	
	return 0;
}

void pilih(){
	if (pil==1){
		tambah_depan();
	} else
	if (pil==2){
		tambah_belakang();
	} else 
	if (pil==3){
		hapus_depan();
	} else 
	if (pil==4){
		hapus_belakang();
	} else 
	if (pil==5){
		tampil();
	} else
	if (pil==6){
		cari();
	} else
	if (pil==7){
		tambah_setelah();
	} else
	if (pil==8){
		hapus_setelah();
	} else
	if (pil==9){
		edit();
	} else
	if (pil==10){
		penukaran();
	}
}

void buat_baru(){
	baru=(simpul*)malloc(sizeof(struct simpul));
	cout<<"Input Nim : ";
	cin>> baru->nim;
	cout<<"input Nama : ";
	cin>> baru->nama;
	cout<<"Input Umur : ";
	cin>> baru->umur;
	baru->next=NULL;
}

void penukaran(){
	char wadah[80], wadah1[80];
	cout<<"Masukkan Data yang akan ditukar \t : ";
	cin>>wadah;
	cout<<"Masukkan Data yang akan ditukar \t : ";
	cin>>wadah1;
	tukar=awal;
	while (tukar!=NULL){
		bantu->next=tukar->next;
		if (strcmp(tukar->nama, wadah)==0){
			tukar1 = awal;
			while (tukar1!=NULL){
				if(strcmp(tukar1->nama, wadah1)==0){
					bantu->next=tukar->next;
					tukar->next=tukar1->next;
					tukar1->next=tukar; 
					break;
				}
				tukar1=tukar1->next;
			}
			break;
		}
		tukar=tukar->next;
	}
	clrscr();
}

void edit(){
	char wadah[80];
	cout<<"Masukkan Data yang akan diedit \t : ";
	cin>>wadah;
	bantu=awal;
	while (bantu!=NULL){
		if (strcmp(bantu->nama, wadah)==0){
			cout<<"==================="<<endl;
			cout<<"NIM \t : ";
			cin>>bantu->nim;
			cout<<"Nama \t : ";
			cin>>bantu->nama;
			cout<<"Umur \t : ";
			cin>>bantu->umur;
			break;
		}
		bantu=bantu->next;
	}
}

void tambah_depan(){
	buat_baru();
	if (awal==NULL){
		awal=baru;
		akhir=baru;
		akhir->next=NULL;
	} 
	else {
		baru->next = awal;
		awal=baru;
	}
	cout<<endl<<endl;
	clrscr();
}

void tampil(){
	if (awal==NULL){
		cout<<"Kosong"<<endl;
	}
	else {
		bantu=awal;
		while (bantu!=NULL){
			cout<<"==================="<<endl;
			cout<<"NIM \t : "<<bantu->nim<<endl;
			cout<<"Nama \t : "<<bantu->nama<<endl;
			cout<<"Umur \t : "<<bantu->umur<<endl;
			bantu=bantu->next;
		}
	}
}

void hapus_depan(){
	if (awal==NULL){
		cout<<"Kosong"<<endl;
	}
	else {
		hapus = awal;
		awal= awal->next;
		free(hapus);
	}
	cout<<endl<<endl;
	clrscr();
}

void cari(){
	char wadah[80];
	cout<<"Masukkan Data yang dicari \t : ";
	cin>>wadah;
	bantu=awal;
	while (bantu!=NULL){
		if (strcmp(bantu->nama, wadah)==0){
			cout<<"==================="<<endl;
			cout<<"NIM \t : "<<bantu->nim<<endl;
			cout<<"Nama \t : "<<bantu->nama<<endl;
			cout<<"Umur \t : "<<bantu->umur<<endl;
		}
		bantu=bantu->next;
	}
}

void tambah_belakang(){
	buat_baru();
	if (awal==NULL){
		awal=baru;
	}
	else {
		akhir->next=baru;
	}
	akhir=baru;
	clrscr();
}

void hapus_belakang(){
	if (awal==NULL){
		cout<<"Kosong"<<endl;
	} else if (awal==akhir){
		hapus= awal;
		awal=awal->next;
		free(hapus);	
	}else {
		bantu=awal;
		hapus=bantu->next;
		while (hapus!=NULL){
			if (hapus->next==NULL){
				akhir = bantu;
				bantu->next=NULL;
				free(hapus);
				break;
			}
			hapus=bantu->next;
		}
	}
}


void tambah_setelah(){
	char wadah[80];
	if (awal==NULL){
		cout<<"Kosong"<<endl;
	} else {
		cout<<"Masukkan Nama yg akan disisipkan setelahnya : ";
		cin>>wadah;
		bantu=awal;
		while (bantu!=NULL){
			if (strcmp(bantu->nama, wadah)==0){
				buat_baru();
				baru->next=bantu->next;
				bantu->next=baru;
				break;
			}
			bantu=bantu->next;
		}
	}
	cout<<endl<<endl;
	clrscr();
}

void hapus_setelah(){
	char wadah[80];
	if (awal==NULL){
		cout<<"Kosong"<<endl;
	} else {
		cout<<"Masukkan Nama yg akan dihapus setelahnya : ";
		cin>>wadah;
		bantu=awal;
		while (bantu!=NULL){
			if (strcmp(bantu->nama, wadah)==0){
				hapus=bantu->next;
				bantu->next=hapus->next;
				free(hapus);
				break;
			}
			bantu=bantu->next;
		}
	}
	cout<<endl<<endl;
	clrscr();
}

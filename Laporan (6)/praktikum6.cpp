#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int pil;
void pilih();
void buat_baru();
void tambah_belakang();
void tambah_depan();
void hapus_belakang();
void hapus_depan();
void tampil();

struct simpul{
	char nim[8], nama[50];
	int umur;
	struct simpul *next;
}mhs, *baru, *awal=NULL, *akhir=NULL, *hapus, *bantu;

void clrscr(){
	system("cls");
}

int main(){
	do{
		cout<<"MENU LINKED LIST "<<endl;
		cout<<"1. Tambah Depan "<<endl;
		cout<<"2. Tambah Belakang"<<endl;
		cout<<"3. Hapus Depan"<<endl;
		cout<<"4. Hapus Belakang"<<endl;
		cout<<"5. Tampil"<<endl;
		cout<<"6. Selesai"<<endl;
		cout<<"Pilihan Anda"<<endl;
		cin>>pil;
		pil();
	}while (pil=6)
	return 0;
}

void pilih(){
	if(pil==1){
		tambah_depan();
	}
	else if(pil==2){
		tambah_belakang();
	}
	else if(pil==3){
		hapus_depan();
	}
	else if(pil==4){
		hapus_belakang();
	}
	else if(pil==5){
		tampil();
	}
}

void buat_baru(){
	baru=(simpul*)malloc(sizeof(struct simpul));
	cout<<"Input NIM ";
	cin>>baru->nim;
	cout<<"Input NAMA ";
	cin>>baru->nama;
	cout<<"Input Umur ";
	cin>>baru->umur;
	baru->next=NULL;
}

void tambah_belakang(){
	buat_baru();
	if(awal==NULL){
		awal=baru;
	}
	else{
		akhir->next=baru;
	}
	akhir=baru;
	akhir->next=NULL;
	cout<<endl<<endl;
	clrscr;
	//tampil();
}

void tambah_depan(){
	buat_baru();
	if(awal==NULL){
		awal=baru;
		akhir=baru;
		akhir->next=NULL;
	}
	else{
		baru->next=awal;
		awal=baru;
	}
	cout<<endl; endl;
	clrscr();
}

void hapus_depan(){
	if(awal=NULL){
		cout<<"Kososng";
	}
	else{
		hapus=awal;
		awal=awal->next;
		free(hapus);
	}
	cout<<endl<<endl;
	clrscr;
	//tampil()
}

void hapus_belakang(){
	if(awal=NULL){
	cout<<"Kososng";
	}
	else if(awal==akhir){
		hapus=awal;
		awal=awal->next;
		free(hapus);
	}
	else{
		hapus=awal;
		while(hapus->next!=akhir){
			hapus=hapus->akhir;
			akhir->next=NULL;
			free(hapus);
		}
	}
	cout<<endl<<endl;
	clrscr;
}

void tampil(){
	if(awal=NULL){
	cout<<"Kosong"<<endl;
	}
	else{
		bantu=awal;
		while(bantu=NULL){
			cout<<"-----------------------"<<endl;
			cout<<"NIM : "<<bantu->nim<<endl;
			cout<<"NAMA: "<<bantu->nama<<endl;
			cout<<"KELAS : "<<bantu->kelas<<endl;
			bantu=bantu->next;
	}
}
}

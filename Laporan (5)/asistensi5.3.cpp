
#include<iostream>

using namespace std;

main(){
int a,b,i,j,n;
float f[30][30],l[40],k;
string c[30],d[30],e[30];	
	
	cout<<"Masukkan Jumlah Mahasiswa = ";
	cin>>a;
	cout<<"Masukkan Jumlah Kelas = ";
	cin>>b;
	n=a*b;
	cout<<"Jumlah Data = "<<n<<endl;
	for(i=1;i<=n;i++){
		k=0;
		cout<<"Nama = ";
		cin>>c[i];
		cout<<"NIM  = ";
		cin>>d[i];
		cout<<"Kelas = ";
		cin>>e[i];
		for(j=1;j<=3;j++){
			cout<<"Nilai Matkul ["<<j<<"] : ";
			cin>>f[j][i];
			k=k+f[j][i];
		}
		l[i]=k/3;
	}
	
	cout<<"NO.\t"<<"NAMA\t"<<"NIM\t"<<"KELAS\t";
	for(j=1;j<=3;j++){
		cout<<"Nilai "<<j<<"\t";
		}
	cout<<"NRT\t"<<"IP\t"<<"HASIL\t"<<endl;
	
	for(i=1;i<=n;i++){
		cout<<i<<"\t";
		cout<<c[i]<<"\t"; 
		cout<<d[i]<<"\t";
		cout<<e[i]<<"\t";
		for(j=1;j<=3;j++){
			cout<<f[j][i]<<"\t";
		}
		cout<<l[i]<<"\t";
		if(l[i]>0 && l[i] <=59){
			cout<<"1 \t";
			cout<<"D";
		}
		else if(l[i]>=60 && l[i] <=69){
			cout<<"2 \t";
			cout<<"C";
		}
		else if(l[i]>=70 && l[i] <=79){
			cout<<"3 \t";
			cout<<"B";
		}
		else if(l[i]>=80 && l[i] <=100){
			cout<<"4 \t";
			cout<<"A";
		}	
	cout<<endl;
	}
	
 	
}

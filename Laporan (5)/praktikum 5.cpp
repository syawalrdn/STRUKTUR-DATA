#include <iostream>
using namespace std;

main()
/*{
	int a=10;
	int *b;
	
	b=&a;
	
	cout<<" A = "<<a<<endl;
	cout<<"Alamat Memori &A = "<<&a<<endl<<endl;
	
	cout<<" B = "<<b<<endl;
	cout<<"*B = "<<*b<<endl;
	cout<<"Alamat Memori &B = "<<&b<<endl<<endl;
}
*/
/*
{
	int nilai[5][3]={{7,8,9},{3,4,7},{7,4,9},{5,9,4},{6,8,5}};
	int m,n=0;
	
	cout<<"Daftar Nilai\n";
	cout<<"--------------\n";
	cout<<"|No|M|F|S|\n";
	cout<<"--------------\n";
	
	for (n=0;n<5;n++){
		cout<<"|"<<(n+1)<<"|";
		for(m=0;m<3;m++)
		cout<<nilai[n][m]<<"|";
		cout<<"\n";
	}
	cout<<"---------------";
}
*/
{
	char h=30, nama[5][4][22]={"AC Milan","Barcelona","Porto","Monaco","Liverpool","Madrid","CSK Mokow",
	"PSG","Inter Milan","Arsenal","Atletico Madrid","Ajax","AS Roma","Manchester United","Dortmunt","Valencia",
	"Manchester City","Bayern Munche","Napoli","Vlareal"};
	
	int i,s;
	cout<<"Liga Champions : ";
	for(i=0;i<5;i++)
	{
	++h;
	cout<<"Grup "<<h;
	for(s=0;s<4;s++)
	{
		cout<<endl;
		cout<<s+1<<nama[i][s];
	}
	cout<<endl;
	cout<<endl;
	}
}

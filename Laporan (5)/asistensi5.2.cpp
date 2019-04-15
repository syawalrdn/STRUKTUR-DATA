#include<iostream>
using namespace std;
int main ()
{
    char kata[50];
    int i, sum = 0,x; 
    cout << "Masukkan Nama : ";
    gets(kata);
    cout << "Nilai Kode ASCII = "; 
    while (kata[x] != '\0')
    { 
        cout<<" "<<int(kata[x]); 
        x++; 
    } 
    cout<<"\n";
    for (i = 0; kata[i] != '\0'; i++)
        sum = sum + kata[i];
    cout << "Jumlah Kode ASCII : " << sum;
    return 0;
}

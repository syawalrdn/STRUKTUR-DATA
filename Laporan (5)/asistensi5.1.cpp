#include <iostream>
#include<bits/stdc++.h>
using namespace std; 
int main() 
{ 
	string kata;
    int x = 0; 
    cout << "Masukkan Kata = "; 
    cin >> kata; 
    cout << "Nilai Kode ASCII = "; 
    while (kata[x] != '\0')
    { 
        cout<<" "<<int(kata[x]); 
        x++; 
    } 
    cout<<"\n";
    sort(kata.begin(), kata.end());
	cout <<"Urutan kata dari Kode ASCII terkecil = "<<kata;
    cout << "\n"; 
    return 0; 
}

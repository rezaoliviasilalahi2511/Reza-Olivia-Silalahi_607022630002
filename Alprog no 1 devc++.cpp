#include <iostream>
using namespace std;

int main() {
float jam_kerja = 8 ;
float gaji_per_jam = 50000;

cout << "Masukkan jam kerja";
cin >> jam_kerja;

float total = jam_kerja * gaji_per_jam;
cout << "Total Gaji: Rp" << total;
return 0;
}


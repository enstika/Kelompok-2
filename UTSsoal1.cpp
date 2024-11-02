#include <iostream>
#include <string>
using namespace std;

int main() {
	string nama;
	int golongan, upah, jamKerja, perJam, uangLembur, gaji;

	// Data Karyawan
	cout << "Masukkan nama anda: ";
	cin >> nama;

	cout << "Masukkan golongan anda: ";
	cin >> golongan;

	cout << "Masukkan jam kerja anda per minggu : ";
	cin >> jamKerja;

	// Menghitung upah pokok berdasarkan golongannya
	switch (golongan) {
	case 1:
		upah = jamKerja * 25000;
		break;
	case 2:
		upah = jamKerja * 35000;
		break;
	case 3:
		upah = jamKerja * 50000;
		break;
	default:
		cout << "Golongan tidak valid." << endl;
		return 1;
	}

	// Menghitung uang lebur jika jam kerja lebih dari 48 jam
	uangLembur = (jamKerja > 48) ? (jamKerja - 48) * 10000 : 0;

	// Gaji karyawan per minggu 
	gaji = upah + uangLembur;

	cout << "\n" << "Total Gaji " << nama << " per minggu : Rp " << gaji << endl;

	return 0;
}
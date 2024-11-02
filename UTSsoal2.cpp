#include <iostream>
using namespace std;

int main() {
    int jumlahMotor, jumlahMobil;
    int jamMasuk, jamKeluar;

    // Input data
    cout << "Masukkan jumlah motor : ";
    cin >> jumlahMotor;

    cout << "Masukkan jumlah mobil : ";
    cin >> jumlahMobil;

    cout << "Input jam masuk (format 24 jam): ";
    cin >> jamMasuk;

    cout << "Input jam keluar (format 24 jam): ";
    cin >> jamKeluar;

    // Menghitung durasi parkir
    int durasi;
    if (jamKeluar < jamMasuk) {
        durasi = (24 - jamMasuk) + jamKeluar;
    }
    else {
        durasi = jamKeluar - jamMasuk;
    }

    // Menghitung biaya
    int biayaMotor = jumlahMotor * 2000 * durasi;
    int biayaMobil = jumlahMobil * 5000 * durasi;
    int totalBiaya = biayaMotor + biayaMobil;

    // Output hasil
    cout << endl << "Total biaya parkir: Rp " << totalBiaya << " (" << durasi << " jam)" << endl;

    return 0;
}
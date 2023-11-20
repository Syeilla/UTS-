#include <iostream>
using namespace std;

int BiayaParkir (string Jeniskendaraan, int DurasiParkir){
    int Biayaperjam = (Jeniskendaraan == "motor") ? 2000 : 5000;
    return Biayaperjam * DurasiParkir;

}


int main (){

    int Parkirmobil = 5000;
    int Parkirmotor = 2000;
    int jumlahMotor = 2;
    int jumlahMobil = 3;
    int Jammasuk = 15;
    int Jamkeluar = 14;

       cout << "masukkan jumlah motor : ";
    cin >> jumlahMotor;
    cout << "masukkan jumlah mobil : ";
    cin >> jumlahMobil;
    cout << "input jam masuk (format 24 jam) : ";
    cin >> Jammasuk;
    cout << "input jam keluar (format 24 jam) : ";
    cin >> Jamkeluar;
    cout << "\n";

    int DurasiParkir = (Jamkeluar + 24 - Jammasuk);
    int totalPendapatanMotor = BiayaParkir("motor", DurasiParkir) * jumlahMotor;
    int totalPendapatanMobil = BiayaParkir("mobil", DurasiParkir) * jumlahMobil;
    int totalPendapatan = totalPendapatanMotor + totalPendapatanMobil;

    cout << "Total Biaya Parkir: Rp. " << totalPendapatan << "(" << DurasiParkir << " jam)";



return 0;








}

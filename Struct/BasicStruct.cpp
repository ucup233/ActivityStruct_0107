#include <iostream>
using namespace std;

struct Mahasiswa {
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main() {
	Mahasiswa mhs;
	cout << "Nomor Mahasiswa : ";
	cin >> mhs.nim;
	cout << "Nama Mahasiswa : ";
	cin >> mhs.nama;
	cout << "Alamat Mahasiswa : ";
	cin >> mhs.alamat;
	cout << "Umur Mahasiswa : ";
	cin >> mhs.umur;

	cout << endl;
	cout << "\nNIM : " << mhs.nim;
	cout << "\nNama : " << mhs.nama;
	cout << "\nAlamat : " << mhs.alamat;
	cout << "\nUmur : " << mhs.umur;
}

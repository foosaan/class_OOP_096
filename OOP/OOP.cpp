#include <iostream>
using namespace std;

class Mahasiswa {
private:
	int nim;
	string nama;
	float nilai;
public:
	void input() {
		cout << "Masukkan NIM : ";
		cin >> nim;
		cout << "Masukkan Nama : ";
		cin >> nama;
		cout << "Masukkan Nilai : ";
		cin >> nilai;
	}
	void PrintData();
};

void Mahasiswa::PrintData() {
	cout << "\nData Mahasiswa : ";
	cout << "\nNIM : " << nim;
	cout << "\nNamanya : " << nama;
	cout << "\nNilai : " << nilai;

}
class matakuliah
{
private:
	string kode;
	string namaMK;
	int SKS;
public:
	void inputMK() {
		cout << "\n\nMasukkan kode matakuliah : ";
		cin >> kode;
		cout << "\nMasukkan nama matakuliah : ";
		cin >> namaMK;
		cout << "\nMasukkan SKS : ";
		cin >> SKS;
	}
	void tampil() {
		cout << "\nData MataKuliah";
		cout << "\nKode MataKuliah : " << kode;
		cout << "\nNama MataKulaih : " << namaMK;
		cout << "\nsks : " << SKS;
	}
};

int main()
{
	Mahasiswa mhs;
	matakuliah mk;

	mhs.input();
	mhs.PrintData();

	mk.inputMK();
	mk.tampil();
}


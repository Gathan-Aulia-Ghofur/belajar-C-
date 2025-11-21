#include <iostream>

using namespace std;

struct siswa {
	string nama;
	string sekolah;
	unsigned int nis;
	
};

int main()
{
	struct siswa siswa2;
	
	cout << "==++ Pendaftaran siswa baru ++==" << endl;
	cout << "nama: ";
	getline(cin,siswa2.nama);
	
	cout << "Sekolah: ";
	getline(cin,siswa2.sekolah);
	
	cout << "NIS: ";
	cin >> siswa2.nis;
	
	cout << endl;
	
	
	cout << "Saya bernama: " << siswa2.nama << endl;
	cout << "Saya berasal dari sekolah: " << siswa2.sekolah << endl;
	cout << "NIS saya adalah: " << siswa2.nis << endl;
	
	return 0;
	
	
}
#include <iostream>
using namespace std;

class mahasiswa {
	int nim;
	void showNim() {
		cout << "No induk : " << nim << endl;
	}
};

int main()
{
	mahasiswa mhs{ 1 };
	mhs.showNim();

	mahasiswa& refMhs = mhs;
	refMhs.nim = 2;

	mahasiswa* pMhs = &mhs;
	pMhs->nim = 3;
	
}

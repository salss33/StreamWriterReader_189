#include<iostream>
#include <exception>
//untuk obyek execption yang akan digunakan
#include <array>
//untuk obyek aray yang akan kita gunakan
using namespace std;

int main() {
	cout << "Awal Program" << endl; // Penanda 1:........
	try {
		array <int, 3> data = { 1, 2, 3 };
		//pesan array integer 3 elemen
		cout << data.at(4) << endl;
		//memanggil array elemen ke 5
	}
	catch (exception& e) {
		//penangkap menggunakan exception
		cout << e.what() << endl;
		/*akan dieksekusi karena array data hanya memiliki 3 elemen*/
	}
	cout << "Baris Program Yang Terakhir" << endl;
	/*penanda 2: bahwa program berjalan tanpa berhenti meskipun terjadi kesalahan*/
	return 0;
}





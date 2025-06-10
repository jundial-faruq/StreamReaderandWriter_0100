#include <iostream>
#include <exception>

// untuk obyek exception yang akan digunakan
#include <array>
// untuk obyek array yang akan kita gunakan
using namespace std;

int main() {
    cout << "Awal program" << endl; // penanda 1:...
    try{
        array<int, 3> data = {10, 20, 30};
        //pesan array interger 3 elemen
        cout <<data.at(5) << endl;
        // memanggil array elemen ke 5
    }
    catch (exception& e) {
        //penangkap menngunakan obyek exceptio
        cout << e.what() << endl;
        /*akan dieksekusi karena array data hanya memilih 3 elemen*/

    }
    cout << "Baris Perogram Yang terakhir" << endl;
    /*penanda 2 : bahwa perogram berjalan tanpa berhenti meskipun terjadi kesalahan*/
    return 0;
}



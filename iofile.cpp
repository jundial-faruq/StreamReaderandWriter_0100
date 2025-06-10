#include <fstream>
#include <iostream>
#include <string>
using namespace std;



int main() {
    string baris;

    // membuat file dalam mode menulis
    ofstream outfile;
    // menunjuk ke sebuah nama file
    outfile.open("contohfile.txt");
    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    // unlimeted loopuntuk menulis
    while (true)
    {
        cout << "- ";
        // mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
    }
    
    return 0;
}

#include<iostream>
#include<iomanip>
using namespace std;

char kursiChart[15][6] = {
{'X', 'X', '*', '*', '*', '*'},
{'*', '*', '*', 'X', 'X', '*'},
{'*', '*', 'X', 'X', '*', '*'},
{'*', '*', 'X', 'X', '*', '*'},
{'*', '*', '*', '*', '*', '*'},
{'*', '*', '*', 'X', 'X', 'X'},
{'*', '*', 'X', '*', '*', '*'},
{'*', '*', 'X', '*', '*', '*'},
{'X', 'X', '*', '*', '*', 'X'},
{'*', '*', '*', '*', 'X', 'X'},
{'*', '*', 'X', 'X', '*', '*'},
{'*', '*', '*', '*', '*', '*'},
{'*', '*', '*', '*', 'X', 'X'},
{'*', '*', '*', '*', 'X', '*'},
{'X', 'X', 'X', '*', 'X', '*'}
};

void printkursiChart() {
    cout<<" Silahkan memilih "<<endl;
    cout<<"           ==========="<<endl;
    cout<<"           A B C D E F"<<endl;
    for (int i = 0; i < 15; i++) {
        cout<< " Baris  " <<setw(2)<< i + 1 << " ";
        for (int j = 0; j < 6; j++) {
            cout<<kursiChart[i][j]<< " ";
        }
        cout<<endl;
    }
}

void bookKursi(string tipekelas, int nokursi) {
    int row;
    if (tipekelas == "Utama") {
        if (nokursi < 1 || nokursi > 2) {
            cout<<" Gagal memilih untuk kelas Utama "<<endl;
            return;
        }
        row = nokursi - 1;
    } else if (tipekelas == "Bisnis") {
        if (nokursi < 3 || nokursi > 5 ) {
            cout<<" Gagal memilih untuk kelas Bisnis "<<endl;
            return;
        }
        row = nokursi - 1;
    } else if (tipekelas == "Ekonomi") {
        if (nokursi < 6 || nokursi > 15) {
            cout<<" Gagal memilih untuk kelas Ekonomi "<<endl;
            return;
        }
        row = nokursi - 1;
    } else {
        cout<< " Gagal Memilih Tipe Kelas "<<endl;
        return;
    }

    char col;
    cout<<" Pilih Bangku yang mau dipesan (A-F): ";
    cin>>col;
    col = toupper(col);
    int colIndex = col - 65;
    if (kursiChart[row][colIndex] == 'X') {
        cout<<" Pemesanan Bangku Tidak Berhasil "<<endl;
    } else {
        kursiChart[row][colIndex] = 'X';
        cout<<" Pemesanan Bangku Berhasil "<<endl;
    }
}

int main() {
    while (true) {
        printkursiChart();
        string KelasType;
        cout<<" Pilih Tipe Kelas (Utama/Bisnis/Ekonomi): ";
        cin>>KelasType;
        int nobangku;
        cout<<" Masukkan Nomor Baris yang ingin dipesan : ";
        cin>>nobangku;
        bookKursi(KelasType, nobangku);
    }
    return 0;
}
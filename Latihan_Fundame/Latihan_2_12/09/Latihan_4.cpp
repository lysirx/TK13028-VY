#include<iostream>
#include<string>

using namespace std;
string input(){
  string kalimat;
    char huruf;
    int jumlah = 0;

    cout << "Input kalimat (Min 3): ";
    getline(cin, kalimat);
    while (kalimat.size() <= 3) {
    cout << "Kalimat Min 3! . Input Kalimat lagi: ";
    getline(cin, kalimat);
    }
    return kalimat;
}
char inputhuruf(){
    char huruf;
    cout << "Input karakter yang ingin dicari: ";
    cin >> huruf;
    return huruf;

}
int totalkarakter(const string&kalimat, char huruf ){
    int jumlah = 0;
    for (char c : kalimat) {
        if (c == huruf) jumlah++;
    }
    return jumlah;

}

int main(){
  string kalimat = input();
  char huruf = inputhuruf();
  int jumlah = totalkarakter(kalimat,huruf);
  cout<< "Jumlah Huruf '" << huruf << "' pada kalimat adalah: " <<jumlah<<endl;
  cout << "Total karakter kalimat : "<<kalimat.size() << " karakter" << endl<<endl<<endl;

    return 0;
}
#include<iostream>
#include<string>
using namespace std;

int main(){
    string confirm;
    int nilai;
    int lulus = 0;
    int perbaikan = 0;
    int tidaklulus = 0;
    cout << "apakah anda ingin menginput nilai?"<<endl;
    getline(cin,confirm);

    while((confirm == "yesy") || (confirm == "ya")){
        cout<<"input nilai mahasiswa: "<<endl;
        cin>>nilai;

        if(nilai>= 70){
            lulus = lulus + 1;
        }else if ((nilai >= 50) && (nilai <70 )){
            perbaikan = perbaikan + 1;
        }else if (nilai < 50) {
            tidaklulus = tidaklulus + 1;
        }
        cout<<"apakah anda ingin menginput nilai? "<<endl;
        cin>>confirm;
        if((confirm == "exit") || (confirm=="no")){
            break;
        }
        
    }
    cout<< "mahasiswa yang lulus= "<<lulus<<endl;
    cout<<"mahasiswa yang perbaikan= "<<perbaikan<<endl;
    cout<<"mahasiswa tidak lulus= "<<tidaklulus<<endl;
    return 0;
}
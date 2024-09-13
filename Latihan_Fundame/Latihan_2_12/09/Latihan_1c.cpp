#include<iostream>
using namespace std;

int main(){
    int count = 1;
    string confirm;
    cout<<"apakah anda ingin menjalankan fungsi ?"<<endl;
    cin>> confirm;

    while(confirm != "exit"){
        cout<<"Program cpp Ke-"<<count<<endl;
        count = count + 1;
        cout<<"apakah anda ingin menjalankan fungsi? "<<endl;
        cin>> confirm;
    }
    if (confirm == "exit"){
        cout<<"Terima kasih"<<endl;
    }
}
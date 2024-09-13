#include<iostream>
#include<string>

using namespace std;

int main(){
  string username, password;
  cout<<" Masukkan Nama : ";
  cin>>username;
  cout<<" Masukkan Password : ";
  cin>>password;

  if(username== "Vin" && password == "123"){
    cout<<" Welcome "<<username<<"!"<<endl;
    int pilih;
    cout<<" Pilih Menu :"<<endl;
    cout<<" 1. faktorial "<<endl;
    cout<<" 2. penambahan " <<endl;
    cout<<" 3. rata-rata " <<endl;
    cout<<" Pilih salah satu : ";
    cin>>pilih;

    switch(pilih){
      case 1: {
          int number;
          cout<<" Masukkan Nilai : ";
          cin>> number;
          int fak = 1;
          for(int i = 1; i<number; i++){
             fak *= i;

          }
          cout<<" faktorial dari "<<number<<" angka adalah "<<fak <<endl;
          break;
      }
      case 2: {
        int x ,y;
        cout<<" Masukkan dua angka pertambahan: ";
        cin>> x >> y;
        cout<<"Pertambahan angka "<< x <<" dengan "<< y << " adalah " << x + y <<endl;
        break;
      }
      case 3: {
        int a , b , c;
        cout<<" Masukkan tiga angka rata-rata: ";
        cin>>a>>b>>c;
        cout<<" Hasil Rata-rata "<<a <<" dari "<<b<<" dan "<<c<<" adalah "<<(a+b+c)/3<<endl;
        break;
      }
      default:
      cout << "Gagal memilih! "<<endl;
      return 1;
    }
    cout<<" thankyou telah memakai aplikasi ini !"<< endl;
      }
      else{
        cout<<" Nama dan Password salah ! "<< endl;
        return 1;
      }
      return 0;
}
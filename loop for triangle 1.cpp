#include <iostream>
using namespace std;

int main(){

//deklarasi    
int nilai;

//tab input
cout << "batas = ";
cin >> nilai;

//proses
    // pengecekan status
    for (int i = 1; i <= nilai; i++)
    {
        for (int j =0; j <i; j++)
        {
            cout <<j;
        }
        cout<< "\n";
    }

    return 0;
}


/*input nilai akan diproses di for atau pengulangan yang pertama
misalkan apabila dimasukan angka 4 maka pengulangan dilakukan sebanyak 4 kali

pada for atau pegulangan yang didalam, varibel variabel i akan diisi oleh 1,2,3,4

pengulangan pertama akan seperti ini
    for (int i = 1; i <= 4; i++)
    {
        for (int j =0; j < 1; j++)
        {
        cout <<;
        }
    }
maka hasil yang akan keluar adalah 0

pengulangan kedua akan seperti ini
   for (int i = 1; i <= 4; i++)
    {
        for (int j =0; j < 2; j++)
        {
        cout <<i;
        }
    }
maka hasil yang akan keluar adalah 01

pengulangan ketiga akan seperti ini
   for (int i = 1; i <= 4; i++)
    {
        for (int j =0; j < 3; j++)
        {
        cout <<i;
        }
    }
maka hasil yang akan keluar adalah 012

pengulangan keempat akan seperti ini
   for (int i = 1; i <= 4; i++)
    {
        for (int j =0; j < 4; j++)
        {
        cout <<i;
        }
    }
maka hasil yang akan keluar adalah 0123

pada proses pengulangan nya setelah setiap pengulangan selesai
makas setiap hasil dari pengulangan akan di keluarkan perbaris dengan
perintah "\n"

apabila ingin
1
12
123
1234

ubah
 for (int i = 1; i <= 4; i++)
    {
        for (int j =0; j < 4; j++)

menjadi
 for (int i = 1; i <= 4; i++)
    {
        for (int j =1; j <= 4; j++)
*/
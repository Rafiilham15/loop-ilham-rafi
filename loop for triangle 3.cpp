#include <iostream>
using namespace std;

int main(){

//deklarasi    
int nilai;

//tab input
cout << "batas = ";
cin >> nilai;

//proses
    // pengecekan statusb
  
  for (int i = 1; i <= nilai; i++)
    {
        for (int j =0; j <i; j++)
        {
            cout <<"*";
        }
        cout<< "\n";
    }

    return 0;
}

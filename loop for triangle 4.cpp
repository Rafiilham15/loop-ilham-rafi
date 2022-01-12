#include <iostream>
using namespace std;

int main(){

//deklarasi    
int nilai;

//tab input
cout << "batas = ";
cin >> nilai;

//proses
  for (int i = 1; i <= nilai; nilai--)
    {
        for (int j =0; j <nilai; j++)
        {
            cout << j;
        }
        cout<< "\n";
    }
    return 0;
}
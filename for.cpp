#include <iostream>
using namespace std;

int main(){

//deklarasi    
int nilai;

//tab input
cout << "batas = ";
cin >> nilai;

//proses
    for (int i = 1; i <= nilai; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j <<"";
        }
        cout << "\n";
    }
    return 0;
}
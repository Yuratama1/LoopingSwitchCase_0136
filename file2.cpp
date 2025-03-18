#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int x;
    int perulanganWhile = 0;
    int perulanganDo = 0;

    //Perulangan Do While
     cout << endl;
     cout << "Perulangan Do While " << endl;
     do{
        cout << "Nilai x = " << x << " Lari Keliling " << endl;
        x = rand() % 10;
        perulanganDo++;
     }while(x < 7);
     cout << "Nilai x terakhir : " << x << endl;
     cout << "Jumlah Perulangan Do While : " << perulanganDo << endl;
}

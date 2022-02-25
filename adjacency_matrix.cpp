#include <iostream>
using namespace std;
int koseArray[20][20]; //komşuluk matrisi için başlangıç

void matrisOlusturma(int v) //girilen diziye(köselerin kenarlarını içeren dizi) göre matris oluşturulur
{
    int i, j;
    for (i = 0; i < v; i++)
    {
        for (j = 0; j < v; j++)
        {
            cout << koseArray[i][j] << " ";
        }
        cout << endl;
    }
}

void kenarEkleme(int u, int v) //verilen çizgeye göre kenar ekleme
{
    koseArray[u][v] = 1;
    koseArray[v][u] = 1;
}

int main() //verilen çizgeye göre kenarEkleme fonksiyonuna köseleri yazarak fonksiyon çizgenin kenarlarını oluşturur.
{
    int v = 10;
    kenarEkleme(1, 8);
    kenarEkleme(1, 2);
    kenarEkleme(1, 3);
    kenarEkleme(1, 7);
    kenarEkleme(1, 9);
    kenarEkleme(2, 4);
    kenarEkleme(2, 8);
    kenarEkleme(3, 4);
    kenarEkleme(3, 5);
    kenarEkleme(5, 6);
    kenarEkleme(6, 7);
    kenarEkleme(8, 9);

    matrisOlusturma(v);
}
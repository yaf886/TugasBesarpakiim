#include<iostream>
using namespace std;

    struct Barang {
    int KodeBarang;
    string NamaBarang;
    double harga;
    };

    Barang Gudang[100];
    int keseluruhanbarang = 0;

    void create(){
        cout << "Masukan Kode barang: ";
        cin >> Gudang[keseluruhanbarang].KodeBarang;
        
        cout << "Masukan Nama barang: ";
        cin >> Gudang[keseluruhanbarang].NamaBarang;

        cout << "Masukan Harga barang: ";
        cin >> Gudang[keseluruhanbarang].harga;
        
    }

    void read(){
        for (int i = 0; i < keseluruhanbarang; i++) {
        cout << "| " << Gudang[i].KodeBarang << " | " << Gudang[i].NamaBarang << " | " << Gudang[i].harga;
        }
    }

    void Delete(int hapusKodeBarang){
        for (int i = 0; i < keseluruhanbarang; i++){
            if(Gudang[i].KodeBarang == hapusKodeBarang){
                for (int j = 0; j < keseluruhanbarang -1; i++)
                {
                    Gudang[j] = Gudang[j+1];
                }

                keseluruhanbarang--;      
            }
        }

    }

int Main(){

}
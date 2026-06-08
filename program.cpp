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
        keseluruhanbarang++;
    }

    void read(){
        for (int i = 0; i < keseluruhanbarang; i++) {
        cout << "| " << Gudang[i].KodeBarang << " | " << Gudang[i].NamaBarang << " | " << "Rp." << Gudang[i].harga << ".00";
        }
    }

    void Delete(int hapusKodeBarang){
        for (int i = 0; i < keseluruhanbarang; i++){
            if(Gudang[i].KodeBarang == hapusKodeBarang){
                for (int j = i; j < keseluruhanbarang -1; j++)
                {
                    Gudang[j] = Gudang[j+1];
                }

                keseluruhanbarang--;      
            }
        }

    }

int main(){
    int pilih;
    do{

    cout << "\n-------MENU-------";
    cout << "\n1. tambah barang";
    cout << "\n2. hapus barang";
    cout << "\n3. tampil barang";
    cout << "\n4. cari barang";
    cout << "\n5. keluar";
    cout << "\n------------------";
    cout << "\npilih: ";
    cin >> pilih;

    switch(pilih){
        case 1:
        create();
        break;
        case 2:
            int kode;
            cout << "Masukkan kode barang yang akan dihapus: ";
            cin >> kode;

            Delete(kode);
            break;
        break;
        case 3:
        read();
        break;
        case 4:
        cout << "program selesai";

    }
    }while (pilih != 4); 
return 0;

}
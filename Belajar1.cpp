#include <iostream>
using namespace std;

// Struct untuk barang
struct Barang
{
    string nama;
    int harga;
};

// Fungsi menghitung total harga
int hitungTotal(int harga, int jumlah)
{
    return harga * jumlah;
}

float diskonharga(float harga, float diskon)
{
    return harga - (harga*diskon);
}

int main()
{
    Barang daftar[6] = {{"Ayam Geprek", 8000}, {"Teh Manis", 4000}, {"Nasi", 3000}, {"Perkedel", 2000}, {"Telor Balado", 5000}, {"Rendang", 10000}};
    float totalKeseluruhan = 0, hargaFinal = 0;
    char lanjut;

    do
    {
        // Tampilkan menu
        for (int i = 0; i < 6; i++)
        {
            cout << i + 1 << ". " << daftar[i].nama << " - Rp." << daftar[i].harga << endl;
        }

        int pilih, jumlah;
        cout << "Pilih menu (1-6): ";
        cin >> pilih;
        cout << "Jumlah: ";
        cin >> jumlah;

        int total = hitungTotal(daftar[pilih - 1].harga, jumlah);
        totalKeseluruhan += total;

        cout << "Total " << daftar[pilih - 1].nama << " = Rp." << total << endl;
        

        cout << "Pesan lagi? (y/n): ";
        cin >> lanjut;

    } while (lanjut == 'y' || lanjut == 'Y');

    if (totalKeseluruhan > 100000)
    {
        hargaFinal = diskonharga(totalKeseluruhan ,(0.2));
    } else if (totalKeseluruhan > 50000)
    {
        hargaFinal = diskonharga(totalKeseluruhan , (0.1));
    } else if (totalKeseluruhan > 20000)
    {
        hargaFinal = diskonharga (totalKeseluruhan , (0.05));
    }else
    {
        hargaFinal = totalKeseluruhan;
        
    }

    

    cout << "\nAnda Belanja Sebesar: Rp." << totalKeseluruhan << endl;
    
    if (totalKeseluruhan <= 20000)
    {
        cout << "Yahhhh ga dapet diskon deh, huhuuT-T" << endl;
        cout << "when yh";
    }else
    {
        cout << "\nYang Harus Dibayar: Rp." << hargaFinal << endl;
        cout << "\nAnda Menghemat: Rp." << (totalKeseluruhan - hargaFinal) << endl;
    }
    

    return 0;
}
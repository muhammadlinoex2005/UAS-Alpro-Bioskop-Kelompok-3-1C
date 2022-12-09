#include <iostream>

using namespace std;

int main(){

    int pilihan, angka;

    do{

        cout << " Selamat datang di bioskop K3 \n";
        cout << " ==================================== \n\n";
        cout << "       Silahkan pilih menu \n";
        cout << "       ------------------- \n";
        cout << "       1. Pembelian Tiket \n";
        cout << "       2. Cek Sisa Kusi \n";
        cout << "       3. Laporan Penjualan Tiket \n";
        cout << "       4. Keluar \n\n";
        cout << "Masukan pilihan anda (1-4): ";

        cin >> pilihan;
        cout << endl;

        switch(pilihan){
            
            case 1:
                
                int jenisTiket, jumlahTiket, totalTiket;
                char* tipeTiket;
                char ulang, kembalianBelanja;

                cout << "Pembelian Tiket \n";
                cout << "=============== \n\n";
                cout << "1. Tiket Dewasa:       Rp. 50.000 \n";
                cout << "2. Tiket Anak-anak:    Rp. 20.000 \n\n";
                cout << "Input Pembelian Tiket \n";
                cout << "--------------------- \n\n";
                
                cout << "Jenis Tiket (1-2): ";
                cin >> jenisTiket;
                cout << "Jumlah Tiket: ";
                cin >> jumlahTiket;

                if(jenisTiket == 1){
                    totalTiket = jumlahTiket * 50000;
                    tipeTiket = "Dewasa";
                }
                else if(jenisTiket == 2){
                    totalTiket = jumlahTiket * 20000;
                    tipeTiket = "Anak-anak";
                }
                else{
                    cout << "Angka yang anda input salah!\n";
                }

                cout << "\n\n\nOutput pembelian tiket\n";
                cout << "----------------------\n";
                cout << "Jenis Tiket: " << tipeTiket << endl;
                cout << "Jumlah Tiket: " << jumlahTiket << endl << endl;
                cout << "--------------" << endl;
                cout << "Total Bayar: Rp. " << totalTiket << endl << endl;
                break;

            case 2:
                
                int kursiTerisi[2], kursiKosong[2];
                angka = 0;

                cout << "\n\n<-- Ada 60 jumlah kursi di bioskop K3 -->\n\n";
                cout << "Cek sisa kursi\n";
                cout << "==============\n\n";
                cout << "Input jumlah kursi yang ingin dipesan\n";
                cout << "-------------------------------------\n";

                do{
                    cout << "Jumlah pemesanan kursi: ";
                    cin >> kursiTerisi[angka];
                    angka++;
                }
                while(angka < 1);
                
                for(angka = 0; angka < 1; angka++)
                
                kursiKosong[angka] = 60 - kursiTerisi[angka];
                
                cout << endl << endl;

                for(angka = 0; angka < 1; angka++){
                    cout << "Sisa kursi: " << kursiKosong[angka] << endl << endl;
                }

                break;
                
                
            
        }
    }

    while(pilihan != 4);
}
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

main(){
    int lama_nginap;
    long harga_sewa , biaya_admin = 20000 , uang_bayar;
    string nama_penyewa , kode , tipe_kamar , input_lagi;

    input_lagi:
    system("cls");
    cout<<"    PENGINAPAN PASTI BETAH\n"<<endl;
    cout<<"********************************\n"<<endl;
    cout<<"Nama Penyewa\t\t:";cin>>nama_penyewa;cout<<endl;
    cout<<"Kode Kamar [A/B/M]\t:";cin>>kode;cout<<endl;
        if (kode == "A" || kode == "a"){
            tipe_kamar = "Anggrek";
            harga_sewa = 300000;
        }else if (kode == "B" || kode == "b"){
            tipe_kamar = "Bougenville";
            harga_sewa = 250000;
        }else if (kode == "M" || kode == "m"){
            tipe_kamar = "Mawar";
            harga_sewa = 200000;
        }else{
            cout<<"Kode yang anda masukan salah [Y/T] : ";
            cin>>input_lagi;
                if (input_lagi == "Y" || input_lagi == "y"){
                    goto input_lagi;
                }else if (input_lagi == "T" || input_lagi == "t"){
                    goto akhir;
                }
                
        }
        
        
        
    system("cls");

    cout<<"    PENGINAPAN PASTI BETAH\n"<<endl;
    cout<<"Nama Penyewa\t\t: "<<nama_penyewa<<endl;
    cout<<"Kode Kamar [A/B/M]\t: "<<kode<<endl;
    cout<<"Lama Menginap\t\t: ";cin>>lama_nginap;cout<<endl;
    cout<<"********************************\n"<<endl;
    cout<<"Tipe Kamar\t\t: "<<tipe_kamar<<endl;
    cout<<"Lama Menginap\t\t: "<<lama_nginap<<" hari"<<endl;
    if (lama_nginap >= 7){
        cout<<"Souvenir\t\t: Payung cantik"<<endl;
    }else{
        cout<<"Souvenir\t\t: Tidak dapat Souvenir"<<endl;
    }
    cout<<"Biaya Sewa\t\t: "<<harga_sewa*lama_nginap<<endl;
    cout<<"Biaya Administrasi\t: "<<biaya_admin<<endl;
    cout<<"Total Biaya Sewa\t: "<<(harga_sewa*lama_nginap)+biaya_admin<<"\n"<<endl;
    cout<<"********************************\n"<<endl;
    cout<<"Uang bayar\t\t: ";cin>>uang_bayar;
    cout<<"Uang kembali\t\t: "<<uang_bayar-(harga_sewa*lama_nginap)+biaya_admin<<"\n"<<endl;
    cout<<"Ingin input data lagi [Y/T] = ";
    cin>>input_lagi;
            if (input_lagi == "Y" || input_lagi == "y"){
                goto input_lagi;
            }else if (input_lagi == "T" || input_lagi == "t"){
                goto akhir;
            }

    akhir:
    cout<<"\n      **TERIMAKASIH**";
}
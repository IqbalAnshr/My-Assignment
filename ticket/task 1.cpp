#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

main(){
    int kode , jumlah;
    float potongan,harga,total,ppn;
    char buku, ulang;

    awal:
    cout<< "Masukan kode buku [1|2|3] : " ; cin >> kode;
    cout<< "Jumlah beli buku : " ; cin >> jumlah;
    
    cout<<"            ****TOKO BUKU HALIFI****" <<endl;
    cout<<"              JL. Keadilan No.16"<<endl;
    cout<<"-----------------------------------------------"<<endl;
    switch (kode)
    {
        case 1 :
        cout<< "Nama Buku\t\t: Sukses Belajar C++"<<endl;
        harga = 50000;
        cout<< "Harga Buku\t\t: "<<harga<<endl;
        if (jumlah >= 5)
        {
            potongan = harga*0.1;
            cout<<"Potongan\t\t: "<<potongan<<endl;
            cout<<"Bonus\t\t\t: Note Book"<<endl;
        }else{
            cout<<"Potongan\t\t: Maaf Ga dapet Potongan"<<endl;
            cout<<"Bonus\t\t\t: Maaf Ga dapet Bonus"<<endl;
        }
        total = harga*jumlah-potongan;
        cout<<"total Bayar\t\t: "<<total<<endl;
        ppn =total*0.1;
        cout<<"PPN\t\t\t: "<<ppn<<endl;
        cout<<"Total + PPN\t\t: "<<total+ppn<<endl;
        break;
    
        case 2 :
        cout<< "Nama Buku\t\t: Kunci Pribadi Yang Sukses"<<endl;
        harga = 35000;
        cout<< "Harga Buku\t\t: "<<harga<<endl;
        if (jumlah >= 5)
        {
            potongan = harga*0.1;
            cout<<"Potongan\t\t: "<<potongan<<endl;
            cout<<"Bonus\t\t\t: Note Book"<<endl;
        }else{
            cout<<"Potongan\t\t: Maaf Ga dapet Potongan"<<endl;
            cout<<"Bonus\t\t\t: Maaf Ga dapet Bonus"<<endl;
        }
        total = harga*jumlah-potongan;
        cout<<"total Bayar\t\t: "<<total<<endl;
        ppn =total*0.1;
        cout<<"PPN\t\t\t: "<<ppn<<endl;
        cout<<"Total + PPN\t\t: "<<total+ppn<<endl;
        break;

        case 3 :
        cout<< "Nama Buku\t\t: Mencari Mutiara Di Dasar Hati"<<endl;
        harga = 45000;
        cout<< "Harga Buku\t\t: "<<harga<<endl;
        if (jumlah >= 5)
        {
            potongan = harga*0.1;
            cout<<"Potongan\t\t: "<<potongan<<endl;
            cout<<"Bonus\t\t\t: Note Book"<<endl;
        }else{
            cout<<"Potongan\t\t: Maaf Ga dapet Potongan"<<endl;
            cout<<"Bonus\t\t\t: Maaf Ga dapet Bonus"<<endl;
        }
        total = harga*jumlah-potongan;
        cout<<"total Bayar\t\t: "<<total<<endl;
        ppn =total*0.1;
        cout<<"PPN\t\t\t: "<<ppn<<endl;
        cout<<"Total + PPN\t\t: "<<total+ppn<<endl;
        break;

        default:
        break;
    }
    cout<<"-----------------------------------------------"<<endl;
    cout<<"            ****TERIMAKASIH****" <<endl;
    cout<<"          ingin pesan lagi?? [y/n] :"; cin>>ulang;

    if (ulang == 'y' || ulang == 'Y')
    {
        goto awal;
    }else if (ulang =='n' || ulang == 'N')
    {
        goto akhir;
    }
     
    akhir:
    cout<<"Pembelian selesai";
}
//menggunakan compiler g++ dan os windows
//tidak support clearscreen di os linux
//Muhammad Iqbal Anshori (17223006)

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main(){
    string kode, ulang, nama_kereta, nama_pemesan;
    int kelas, jumlah_tiket , kode_fasilitas;
    long harga_tiket,harga_fasilitas = 0,discount = 0,uang_bayar,pembayaran;
    system("clear");

awal:
cout<<"            PROGRAM TIKET KERETA\n"<<endl;
cout<<"============================================\n"<<endl;
cout<<"Masukan Kode Kereta[AG/AL/PH] : ";cin>>kode;cout<<"\n";
cout<<"Pilih Kelas [1/2/3]\n\n1.Executive\n2.Bisnis\n3.Ekonomi\n"<<endl;
cout<<"Masukan Kelas Kereta [1/2/3] : "; 
cin>>kelas;cout<<endl;

    if (kode =="AG" || kode =="ag" ){
        nama_kereta = "THOMAS";
            switch (kelas)
                {
                case 1:
                    harga_tiket = 75000;
                    cout<<"Fasilitas Tambahan\n1.VIP\n2.Karaoke\n3.VIP+Karaoke/n4.Tidak"<<endl;
                    cout<<"masukan kode fasilitas : ";cin>>kode_fasilitas;
                    if (kode_fasilitas == 1)
                    {
                        harga_fasilitas = 50000;
                    }else if (kode_fasilitas == 2)
                    {
                        harga_fasilitas = 25000;
                    }else if (kode_fasilitas == 3)
                    {
                        harga_fasilitas = 75000;
                    }else if (kode_fasilitas == 4)
                    {
                        harga_fasilitas = 0;
                    }else
                    {
                        harga_fasilitas = 0;
                    }
                    break;
                
                case 2:
                    harga_tiket = 50000;
                    cout<<"Fasilitas Tambahan\n1.VIP\n2.Tidak"<<endl;
                    cout<<"masukan kode fasilitas : ";cin>>kode_fasilitas;
                    if (kode_fasilitas == 1)
                    {
                        harga_fasilitas = 50000;
                    }else if (kode_fasilitas == 2)
                    {
                        harga_fasilitas = 0;
                    }else
                    {
                        harga_fasilitas = 0;
                    }
                    break;

                case 3:
                    harga_tiket = 35000;
                    break;
                default:
                    break;
                }
        system("clear");
        goto daftar_pesanan;
    }
    else if(kode == "AL" || kode =="al"){
         nama_kereta = "KAI";
            switch (kelas)
                {
                case 1:
                    harga_tiket = 65000;
                    cout<<"Fasilitas Tambahan\n1.VIP\n2.Karaoke\n3.VIP+Karaoke/n4.Tidak"<<endl;
                    cout<<"masukan kode fasilitas : ";cin>>kode_fasilitas;
                    if (kode_fasilitas == 1)
                    {
                        harga_fasilitas = 50000;
                    }else if (kode_fasilitas == 2)
                    {
                        harga_fasilitas = 25000;
                    }else if (kode_fasilitas == 3)
                    {
                        harga_fasilitas = 75000;
                    }else if (kode_fasilitas == 4)
                    {
                        harga_fasilitas = 0;
                    }else
                    {
                        harga_fasilitas = 0;
                    }
                    break;
                
                case 2:
                    harga_tiket = 50000;
                    cout<<"Fasilitas Tambahan\n1.VIP\n2.Tidak"<<endl;
                    cout<<"masukan kode fasilitas : ";cin>>kode_fasilitas;
                    if (kode_fasilitas == 1)
                    {
                        harga_fasilitas = 50000;
                    }else if (kode_fasilitas == 2)
                    {
                        harga_fasilitas = 0;
                    }else
                    {
                        harga_fasilitas = 0;
                    }
                    break;

                case 3:
                    harga_tiket = 35000;
                    break;
                default:
                    break;
                }
        system("clear");
        goto daftar_pesanan;
    }
    else if(kode =="PH" || kode =="ph"){
         nama_kereta = "SPONGEBOB";
            switch (kelas)
                {
                case 1:
                    harga_tiket = 100000;
                    cout<<"Fasilitas Tambahan\n1.VIP\n2.Karaoke\n3.VIP+Karaoke\n4.Tidak"<<endl;
                    cout<<"masukan kode fasilitas : "; cin>>kode_fasilitas;
                    if (kode_fasilitas == 1)
                    {
                        harga_fasilitas = 50000;
                    }else if (kode_fasilitas == 2)
                    {
                        harga_fasilitas = 25000;
                    }else if (kode_fasilitas == 3)
                    {
                        harga_fasilitas = 75000;
                    }else if (kode_fasilitas == 4)
                    {
                        harga_fasilitas = 0;
                    }else
                    {
                        harga_fasilitas = 0;
                    }
                    break;
            
                case 2:
                    harga_tiket = 750000;
                    cout<<"masukan kode fasilitas : ";cout<<"Fasilitas Tambahan\n1.VIP\n2.Tidak"<<endl;
                    cin>>kode_fasilitas;
                    if (kode_fasilitas == 1)
                    {
                        harga_fasilitas = 50000;
                    }else if (kode_fasilitas == 2)
                    {
                        harga_fasilitas = 0;
                    }else
                    {
                        harga_fasilitas = 0;
                    }
                    break;
                case 3:
                    harga_tiket = 50000;
                    break;
                default:
                    break;
                }
        system("clear");
        goto daftar_pesanan;
    }else{
        cout<<"kode kereta yang anda masukan salah"<<endl;
        cout<<"Ingin input lagi[Y/T] : ";
        ulang_lagi2:
        cin>>ulang;
        if(ulang == "Y" || ulang == "y"){
        system("clear");
        goto awal;
        }else if (ulang == "T" || ulang == "t")
        {
        goto akhir;
        }else{
        goto ulang_lagi2;
        }
    }
    
daftar_pesanan:
cout<<"     DAFTAR PEMESANAN TIKET KERETA"<<endl;
cout<<"========================================\n"<<endl;
cout<<"Nama Pemesan\t\t: ";cin>> nama_pemesan;cout<<endl;
cout<<"Nama Kereta\t\t: "<<nama_kereta<<endl;
cout<<"Kelas Kereta\t\t: "<<kelas<<endl;
cout<<"Harga PER Tiket\t\t: "<<harga_tiket<<endl;
cout<<"Jumlah Pemesanan Tiket\t: ";cin>>jumlah_tiket;cout<<endl;
cout<<"Biaya Tambahan Fasilitas: "<<harga_fasilitas<<endl;
pembayaran = harga_tiket*jumlah_tiket;
cout<<"pembayran\t\t: "<<pembayaran<<endl;
if(jumlah_tiket >= 3){
    discount = pembayaran * 0.05;
}
cout<<"Discount\t\t: "<<discount<<endl;
cout<<"========================================\n"<<endl;
cout<<"total pembayaran\t: "<<harga_tiket*jumlah_tiket+harga_fasilitas-discount<<endl;
cout<<"Uang Bayar\t\t: ";cin>>uang_bayar;cout<<endl;
cout<<"Uang kembali\t\t: "<<uang_bayar-(pembayaran-discount)<<endl;
cout<<"========================================\n"<<endl;
cout<<"Ingin input lagi[Y/T] : ";
ulang_lagi:
cin>>ulang;
if(ulang == "Y" || ulang == "y"){
system("clear");
goto awal;
}else if (ulang == "T" || ulang == "t")
{
goto akhir;
}else{
goto ulang_lagi;
}

akhir:
cout<<"Terimakasih";

}
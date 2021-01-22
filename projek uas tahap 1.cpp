
#include < iostream >
menggunakan  namespace  std ;
int  main ()
{
                int kode, pri, jml, tot, byr, kbl;
                gila arang ;
                melakukan
                {
                                cout << "          restoran taipan      " << endl;
                                cout << "              FILL UP UR TANK          " << endl;
                                cout << "           Chef et Mati Karna Mu       " << endl;
                                cout << "         Jl. ni Saja Apa Yang Ada      " << endl;
                                cout << " ======================================== " << endl;
                                cout << " " << endl;
                                cout << " ______________________________________ " << endl;
                                cout << " | Menu Makanan | Harga | " << endl;
                                cout << " | | | " << endl;
                                cout << " | 1. Ayam Goreng | Rp. 10.000 | " << endl;
                                cout << " | 2. lamien ayam | Rp. 12.000 | " << endl;
                                cout << " | 3. Mie Pangsit | Rp. 10.000 | " << endl;
                                cout << " | 4. Pecel Ayam + Nasi | Rp. 15.000 | " << endl;
                                cout << " | 5. Nasi Rames | Rp. 8.000 | " << endl;
                                cout << " | 6. Jus Jeruk | Rp. 5.000 | " << endl;
                                cout << " | 7. Teh Manis | Rp. 2.000 | " << endl;
                                cout << " | _______________________ | ______________ | " << endl;
                                cout << " " << endl;
                                cout << " nasi remes: " ;
                                cin >> kode;
                                saklar (kode)
                                {
                                kasus  1 :
                                cout << ' \ n ' << " Ayam Goreng " << endl;
                                pri = 10.000 ;
                                cout << " 5 porsi: " ;
                                cin >> jml;
                                tot = pri * jml;
                                cout << " Total Harganya: Rp.50,000 " << tot << endl;
                                cout << " Dibayar: Rp.100,000 " ;
                                cin >> byr;
                                kbl = byr-tot;
                                cout << " Kembali: Rp.50,000 " << kbl << endl;
                                cout << " " << endl;
                                cout << " Masih Ada Yang Lain Y / T: " ;
                                cin >> gila;
                                istirahat ;
                               
                                kasus  2 :
                                cout << ' \ n ' << " " << endl;
                                pri = 12000 ;
                                cout << " lamien ayam: " ;
                                cin >> jml;
                                tot = pri * jml;
                                cout << " Total Hargany: Rp.12,000 " << tot << endl;
                                cout << " Dibayar: Rp.20,000 " ;
                                cin >> byr;
                                kbl = byr-tot;
                                cout << " Kembali: Rp.8,000 " << kbl << endl;
                                cout << " " << endl;
                                cout << " Masih Ada Yang Lain Y / T: " ;
                                cin >> gila;
                                istirahat ;
                               
                                kasus  3 :
                                cout << ' \ n ' << " Mie Pangsit " << endl;
                                pri = 10.000 ;
                                cout << " 3 porsi: " ;
                                cin >> jml;
                                tot = pri * jml;
                                cout << " Total Hargany: Rp. 30,000 " << tot << endl;
                                cout << " Dibayar: Rp. 35.000 " ;
                                cin >> byr;
                                kbl = byr-tot;
                                cout << " Kembali: Rp.5,000 " << kbl << endl;
                                cout << " " << endl;
                                cout << " Masih Ada Yang Lain Y / T: " ;
                                cin >> gila;
                                istirahat ;
                               
                                kasus  4 :
                                cout << ' \ n ' << " Pecel Ayam + Nasi " << endl;
                                pri = 15000 ;
                                cout << " 1 porsi: " ;
                                cin >> jml;
                                tot = pri * jml;
                                cout << " Total Hargany: Rp.15,000 " << tot << endl;
                                cout << " Dibayar: Rp.20,000 " ;
                                cin >> byr;
                                kbl = byr-tot;
                                cout << " Kembali: Rp.5,000 " << kbl << endl;
                                cout << " " << endl;
                                cout << " Masih Ada Yang Lain Y / T: " ;
                                cin >> gila;
                                istirahat ;
                               
                                kasus  5 :
                                cout << ' \ n ' << " Nasi Rames " << endl;
                                pri = 8000 ;
                                cout << " 4 porsi: " ;
                                cin >> jml;
                                tot = pri * jml;
                                cout << " Total Hargany: Rp.32,000 " << tot << endl;
                                cout << " Dibayar: Rp.40,000 " ;
                                cin >> byr;
                                kbl = byr-tot;
                                cout << " Kembali: Rp.8,000 " << kbl << endl;
                                cout << " " << endl;
                                cout << " Masih Ada Yang Lain Y / T: " ;
                                cin >> gila;
                                istirahat ;
                               
                                kasus  6 :
                                cout << ' \ n ' << " Jus Jeruk " << endl;
                                pri = 5000 ;
                                cout << " 2 porsi: " ;
                                cin >> jml;
                                tot = pri * jml;
                                cout << " Total Hargany: Rp.10,000 " << tot << endl;
                                cout << " Dibayar: Rp.10,000 " ;
                                cin >> byr;
                                kbl = byr-tot;
                                cout << " Kembali: Rp.0 " << kbl << endl;
                                cout << " " << endl;
                                cout << " Masih Ada Yang Lain Y / T: " ;
                                cin >> gila;
                                istirahat ;
                               
                                kasus  7 :
                                cout << ' \ n ' << " Teh Manis " << endl;
                                pri = 2000 ;
                                cout << " 1 porsi: " ;
                                cin >> jml;
                                tot = pri * jml;
                                cout << " Total Hargany: Rp.2,000 " << tot << endl;
                                cout << " Dibayar: Rp. 5.000 " ;
                                cin >> byr;
                                kbl = byr-tot;
                                cout << " Kembali: Rp.3,000 " << kbl << endl;
                                cout << " " << endl;
                                cout << " Masih Ada Yang Lain Y / T: " ;
                                cin >> gila;
                                istirahat ;
                                default :
                                cout << " Kode Yang Anda Masukan Tidak Tersedia " ;
                                } 
                }
                sementara (mad / = ' Y ' );
                cout << " Terima Kasih Atas Kunjungan Anda Di Pondok Sakieu Ge Uyuhan " ;
                kembali  0 ;
}


/*Tugas1 Prak.Prodas*/
/*Membuat program billing warnet*/
/*Filza Hisana*/
/*NIM: 20051397018*/

#include <iostream>

using namespace std;
int main(int argc, char *argv[])

{
	char nama[30];
	int J1,M1,D1,J2,M2,D2; /*J=Jam, M=Menit, D=Detik*/
	int SelisihJam,SelisihMenit,SelisihDetik;
	int SelisihJam_Detik,SelisihMenit_Detik,SelisihDetik_Detik;  /*selisih dalam bentuk detik*/
	int Tarif,TotalWaktu,TotalBiaya,Bayar,Kembalian;
	Tarif = 5000;		
	
	cout << "____________________________________________________________________"<<endl <<endl;
	
	cout << "                       |   Selamat Datang   |                       "<<endl;
	cout << "                       |   Di Coucou.net    |                       "<<endl;
	
	cout << "____________________________________________________________________"<<endl <<endl;
	
	
	cout << "   Masukan Nama Kamu : ";
	cin  >> nama; 
	cout << endl;
	
	cout << "___________________________  Waktu Mulai  __________________________"<<endl <<endl;
	
	cout << "   Jam   : ";
	cin  >> J1;
	cout <<"   Menit : ";
	cin  >> M1;
	cout << "   Detik : ";
	cin  >> D1;
	cout << endl;
	cout << "   Jam Mulai Pada Pukul : " << J1 << ":" << M1 << ":" << D1 <<endl <<endl;
	
		if (J1 > 24, M1> 60, D1>60 )
	{
		cout << "   Hmm Sepertinya Data Kamu salah :(" <<endl;
		cout << "   Silahkan Coba Lagi !!";
		return 0;
	}
	

	cout << "___________________________  Waktu Selesai  __________________________"<<endl <<endl;
	
	cout << "   Jam   : ";
	cin  >> J2;
	cout << "   Menit : ";
	cin  >> M2;
	cout << "   Detik : ";
	cin  >> D2;
	cout << endl;
	cout << "   Anda Selesai Pada Pukul : " << J2 << ":" << M2 << ":" << D2 <<endl<<endl;
	
		if (J2 > 24, M2> 60, D2>60 )
	{
		cout << "   Hmm Sepertinya Data Kamu salah :("<<endl;
		cout << "   Silahkan Coba Lagi !!";
		return 0;
	}
	
	cout << "_________________________________________________________________"<<endl <<endl;;
	       
	SelisihJam   = J2-J1;
	SelisihMenit = M2-M1;
	SelisihDetik = D2-D1;
	cout << "   Lama penggunaan Anda  : " <<SelisihJam << ":" <<SelisihMenit << ":" <<SelisihDetik ;
	
	SelisihJam_Detik   = SelisihJam*3600;
	SelisihMenit_Detik = SelisihMenit*60;
	SelisihDetik_Detik = SelisihDetik;
	TotalWaktu = SelisihJam_Detik + SelisihMenit_Detik + SelisihDetik_Detik;
	cout << endl;
	
	TotalBiaya = TotalWaktu * Tarif / 3600 ;
	cout << "   Biaya penggunaan Anda : " << TotalBiaya <<endl;
	cout << "   Jumlah Bayar : ";
	cin  >> Bayar;
	cout <<endl;
	
	 if (Bayar<TotalBiaya)
	 	{ 
		 cout << "   Hmm Sepertinya Uangmu Kurang.. :( " <<endl;
		 cout << "   Silakhan Coba lagi !!";
		 return 0;
		 }
	if (Bayar>TotalBiaya)
	{
		cout << "   Kembalian : " <<Bayar - TotalBiaya <<endl<<endl;
	}
		 
	  
	

	cout << "_________________________________________________________________" <<endl <<endl;
	
	cout << "                 |        Terima Kasih         |                 " <<endl;
	cout << "                 |   Silahkan Datang Kembali   |                 " <<endl;
	
	cout << "_________________________________________________________________" << endl;

	return 0;
	
}


#include <iostream>

#include <string>

using namespace std ; 

int main () 
{
	int pilihan1, pilihan2, pilihan3, pilihan4, pilihan5, pilihan6, pilihan7, pilihan8 ;
	string nama, tgllahir, alamat ;	
	
	cout << "========SILAHKAN ISI FORMULIR TERSEBUT======== \n" ;
	cout << "               ================\n" ;
	cout << "\n\n" ;
	cout << "NAMA             : " ;
	 getline (cin, nama) ;
	cout << "TEMPAT/TGL LAHIR : " ;
	 getline (cin, tgllahir);
	cout << "ALAMAT           : " ;
	 getline (cin, alamat) ;
	cout << "\n" ;
	cout << "Halo " << nama << " terimakasih telah mengisi formulir tersebut \n" ;
	cout << "\n" ;
	
	 
	
	cout << "Halo " << nama << " Selamat datang didunia mimpi, sebelum memulai pertandingan silahkan pilih hero yang anda inginkan " << endl ;
	cout << "1. JONSON"    << endl ; 
	cout << "2. LAPU-LAPU" << endl ;
	cout << "3. NANA"      << endl ;
	cout << "4. MIYA"      << endl ;
	cout << "5. NATALIA"   << endl ;
	cout << "6. ROGER"     << endl ;
	cout << "PILIH (1/2/3/4/5/6) : " ;
	 cin >> pilihan1 ;
	cout << "\n" ;

	if (pilihan1==1) 
	{
		cout << "JONSON PILIH POSISI ANDA BERMAIN!!!" << endl ;
		cout << "1. ATAS"   << endl ;
		cout << "2. TENGAH" << endl ;
		cout << "3. BAWAH"  << endl ;
		cout << "4. ROAM"   << endl ;
		cout << "PILIH (1/2/3) : "  ;
		 cin >> pilihan2 ;
		cout << "\n" ;
		if (pilihan2==1) {
		    cout << "JONSON KAU JAGA LANE ATAS DENGAN BAIK!!!" ;	
		}
		if (pilihan2==2) {
			cout << "JONSON KAU JAGA LANE TENGAH DENGAN BAIK!!!" ;
		}
		if (pilihan2==3) {
			cout << "JONSON KAU JAGA LANE BAWAH DENGAN BAIK!!!" ;
		}
		if (pilihan2==4) {
			cout << "JONSON KAU HARUS PERGI ROAM UNTUK MELINDUNGI TIM ANDA!!!" << endl ;
		}
	}
	
	if (pilihan1==2) 
	{
	   cout << "LAPU-LAPU PILIH POSISI ANDA BERMAIN!!!" << endl ;	
       cout << "1. ATAS"   << endl ;
	   cout << "2. TENGAH" << endl ;
	   cout << "3. BAWAH"  << endl ;
	   cout << "4. ROAM"   << endl ;
	   cout << "PILIH (1/2/3/4) : ";
	    cin >> pilihan3 ;
	   cout << "\n" ;
 	   if (pilihan3==1) {
		   cout << "LAPU-LAPU KAU JAGA LANE ATAS!!!"   << endl ;
	    }     	 
	   if (pilihan3==2) {
		   cout << "LAPU-LAPU KAU JAGA LANE TENGAH!!!" << endl ;
	   }
	   if (pilihan3==3) {
		   cout << "LAPU-LAPU KAU JAGA LANE BAWAH!!!"  << endl ;
	   }
	   if (pilihan3==4) {
		   cout << "LAPU-LAPU KAU HARUS PERGI ROAM UNTUK MELINDUNGI TIM ANDA!!!" << endl ;
	   }
	}
	
	if (pilihan1==3)
	{
		cout << "NANA PILIH POSISI ANDA BERMAIN!!!" << endl ;
		cout << "1. ATAS"   << endl ;
		cout << "2. TENGAH" << endl ;
		cout << "3. BAWAH"  << endl ;
		cout << "4. ROAM"   << endl ;
		cout << "PILIH (1/2/3/4) : "; 
		 cin >> pilihan4 ;
		cout << "\n" ;
		if (pilihan4==1) {
			cout << "NANA KAU JAGA LANE ATAS!!!"   << endl ;
		}
		if (pilihan4==2) {
			cout << "NANA KAU JAGA LANE TENGAH!!!" << endl ;
		}
		if (pilihan4==3) {
			cout << "NANA KAU JAGA LANE BAWAH!!!"  << endl ;
		}
		if (pilihan4==4) {
			cout << "NANA KAU HARUS PERGI ROAM UNTUK MELINDUNGI TIM ANDA!!!" << endl ;
		}
	}
	
	if (pilihan1==4) 
	{
		cout << "MIYA PILIH POSISI ANDA BERMAIN!!!" << endl ;
		cout << "1. ATAS"   << endl ;
		cout << "2. TENGAH" << endl ;
		cout << "3. BAWAH"  << endl ;
		cout << "4. ROAM"   << endl ;
		cout << "PILIH (1/2/3/4) : ";
		 cin >> pilihan5 ;
		cout << "\n" ;
		if (pilihan5==1) {
			cout << "MIYA KAU JAGA LANE ATAS!!!"   << endl ;
		}
		if (pilihan5==2) {
			cout << "MIYA KAU JAGA LANE TANGAH!!!" << endl ;
		}
		if (pilihan5==3) {
			cout << "MIYA KAU JAGA LANE BAWAH!!!"  << endl ;
		}
		if (pilihan5==4) {
			cout << "MIYA KAU HARUS PERGI ROAM UNTUK MELINDUNGI TIM ANDA!!!" << endl ; 
			
		}
 	}   
 	
 	if (pilihan1==5) 
 	{
 		cout << "NATALIA PILIH POSISI ANDA BERMAIN!!!" << endl ;
 		cout << "1. ATAS"    << endl ;
 		cout << "2. TENGAH"  << endl ;
 		cout << "3. BAWAH"	 << endl ;
		cout << "4. ROAM"    << endl ;
		cout << "PILIH (1/2/3/4) : " ; 
		 cin >> pilihan6 ;
		cout << "\n" ;
		if (pilihan6==1) {
			cout << "NATALIA KAU JAGA LANE ATAS!!!"   << endl ;	
		}  
		if (pilihan6==2) {
			cout << "NATALIA KAU JAGA LANE TENGAH!!!" << endl ;
		}
		if (pilihan6==3) {
			cout << "NATALIA KAU JAGA LANE BAWAH!!!"  << endl ;
		}
		if (pilihan6==4) {
			cout << "NATALIA KAU HARUS PERGI ROAM UNTUK MELINDUNGI TIM ANDA!!!" << endl ;
		}
	
	
	}
	
	if (pilihan1==6) 
	{
		cout << "ROGER PILIH POSISI ANDA BERMAIN!!!" << endl ;
		cout << "1. ATAS"    << endl ;
		cout << "2. TENGAH"  << endl ;
		cout << "3. BAWAH"   << endl ;
		cout << "4. ROAM"    << endl ;
		cout << "PILIH (1/2/3/4) : " ;
		 cin >> pilihan7 ;
		cout << "\n" ;
		if (pilihan7==1) {
			cout << "ROGER KAU JAGA LANE ATAS!!!"   << endl ;
		} 
		if (pilihan7==2) {
			cout << "ROGER KAU JAGA LANE TENGAH!!!" << endl ;
		}
		if (pilihan7==3) {
			cout << "ROGER KAU JAGA LANE BAWAH!!!"  << endl ;
		}
		if (pilihan7==4) {
			cout << "ROGER KAU HARUS PERGI ROAM UNTUK MELINDUNGI TIM ANDA!!!" << endl ;
		}
		
		
		
		
	}

	
}

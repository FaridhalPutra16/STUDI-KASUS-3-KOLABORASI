using namespace std;

class Input {
	public :
		void cetak(){
			cout << "Aplikasi Penjualan Ayam \n";
			cout << "Menu yang tersedia : \n";
			cout << "1) Ayam Geprek  Rp. 21000 \n\n";
			cout << "2) Ayam Goreng  Rp. 17000 \n\n";
      cout << "3) Udang Goreng Rp. 19000 \n\n";
      cout << "4) Cumi Goreng  Rp. 20000 \n\n";
      cout << "5) Ayam Bakar  Rp. 25000 \n\n";
			cout << "Jumlah Pesan Ayam Geprek  : "; 
      cin >> bnyk_aymPr;
			cout << "Jumlah Pesanan Ayam Goreng   : "; 
      cin >> bnyk_aymGr;
      cout << "Jumlah Pesanan Udang Goreng : "; 
      cin >> bnyk_udgGr;
      cout << "Jumlah Pesanan Ayam Bakar   : "; 
      cin >> bnyk_aymBk;
      cout << "Jumlah Pesanan Cumi Goreng  : "; 
      cin >> bnyk_cmGr;
		}

		void toFile(){
			tulis_data.open("menu_data.txt");
			tulis_data << bnyk_aymPr << endl;
      tulis_data << bnyk_aymGr<< endl;
      tulis_data << bnyk_udgGr << endl;
      tulis_data << bnyk_cmGr << endl;
			tulis_data << bnyk_aymBk << endl;
     tulis_data.close();
		}

	private :
		ofstream tulis_data;
	int bnyk_aymGr, bnyk_aymBk, bnyk_udgGr, bnyk_cmGr, bnyk_aymPr;
};
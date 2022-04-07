using namespace std;

class Input {
	public :
		void cetak(){
			cout << "Aplikasi Penjualan Ayam \n";
			cout << "Menu yang tersedia : \n";
			cout << "1) Ayam Goreng  Rp. 17000 \n";
			cout << "2) Ayam Bakar   Rp. 21000 \n\n";
      cout << "3) Udang Goreng Rp. 19000 \n\n";
      cout << "4) Cumi Goreng  Rp. 20000 \n\n";
      cout << "5) Ayam Geprek  Rp. 21000 \n\n";
			cout << "Pesan Ayam Goreng  : "; cin >> bnyk_aymGr;
			cout << "Pesan Ayam Bakar   : "; cin >> bnyk_aymBk;
      cout << "Pesan Udang Goreng : "; cin >> bnyk_udgGr;
      cout << "Pesan Cumi Goreng  : "; cin >> bnyk_cmGr;
      cout << "Pesan Ayam Geprek  : "; cin >> bnyk_aymGp;
		}

		void toFile(){
			tulis_data.open("api_data.txt");
			tulis_data << bnyk_aymGr << endl;
			tulis_data << bnyk_aymBk << endl;
      tulis_data << bnyk_udgGr << endl;
      tulis_data << bnyk_cmGr << endl;
      tulis_data << bnyk_aymGp << endl;
			tulis_data.close();
		}

	private :
		ofstream tulis_data;
		int bnyk_aymGr, bnyk_aymBk, bnyk_udgGr, bnyk_cmGr, bnyk_aymGp;
};
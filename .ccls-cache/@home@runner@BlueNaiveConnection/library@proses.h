using namespace std;

class Proses {
	public :
		void cetak(){
			cout << "Anda sebagai Proses \n";
		}

		void getData(){
			ambil_data.open("api_data.txt");
      bool ayam_geprek  = true;
			bool ayam_goreng  = true;
      bool udang_goreng = true;
      bool cumi_goreng  = true;
      bool ayam_bakar   = true;
     
			{
				if (ayam_geprek){
					ambil_data >> bnyk_aymPr;
					ayam_geprek = false;
				}
				else if(ayam_goreng){
					ambil_data >> bnyk_aymGr;
          ayam_goreng = false;
          }
        else if(udang_goreng){
					ambil_data >> bnyk_udgGr;
          udang_goreng = false;
				}
           else if(ayam_geprek){
					ambil_data >> bnyk_aymPr;
          ayam_geprek = false;
				}
         else if(cumi_goreng){
					ambil_data >> bnyk_cmGr;
          cumi_goreng = false;
				}
			}
			ambil_data.close();
		}

		void toFile(){
			int total = (hrg_aymGr * bnyk_aymGr) + (hrg_aymBk * bnyk_aymBk) + (hrg_udgGr*bnyk_udgGr) +(hrg_cmGr * bnyk_cmGr) + (hrg_aymPr*bnyk_aymPr);
			float batas = 350000;
			float t2 = float(total);
			float diskon = t2 * 0.25;

			if (total >= batas)
				t2 = t2 - diskon;


			tulis_data.open("menu_data.txt");
			tulis_data << total << endl;
			tulis_data << diskon << endl;
			tulis_data << t2     << endl;
      tulis_data << bnyk_aymPr<< endl;
			tulis_data << bnyk_aymGr << endl;
      tulis_data << bnyk_udgGr<< endl;
      tulis_data << bnyk_cmGr << endl;
			tulis_data << bnyk_aymBk << endl;
      tulis_data.close();
		}

	private :
		ifstream ambil_data;
		ofstream tulis_data;
		int bnyk_aymGr;
		int bnyk_aymBk;
    int bnyk_udgGr;
    int bnyk_cmGr;
    int bnyk_aymPr;
		int hrg_aymGr = 17000;
		int hrg_aymBk = 21000;
    int hrg_udgGr = 19000;
    int hrg_cmGr  = 20000;
    int hrg_aymPr = 21000;
};
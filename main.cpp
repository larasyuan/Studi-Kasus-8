#include <iostream>
using namespace std;

class kelulusan
{
	private:
		int matriks[100][3];
		int jumlah_baris, i, j, k;
		string jurusan[3];
		
	public:
		void input();
		void proses();
		void output();
} x;

void kelulusan::input()
{
	cout << "= = = = = PROGRAM MENCETAK BANYAK LULUSAN = = = = =" << endl << endl;
	cout << "MASUKKAN 3 JURUSAN : "<<endl<<endl;
	for(k = 0; k < 3; k++){
    	cout <<"Masukkan jurusan ke-"<<k+1<<" : ";
    	cin >> jurusan[k];
	}
 
	cout << "\nMasukkan banyak angkatan lulusan : ";
	cin >> jumlah_baris;
} 

void kelulusan::proses()
{
	// proses input array
	for(i = 0; i < jumlah_baris ; i++)
	{
  		cout<<"Angkatan ke-"<<i+1<<endl;
    	for(j = 0; j < 3; j++)
		{
    		cout <<jurusan[j]<<" : ";
    		cin >> matriks[i][j];
		}
    	cout << endl;
	}
}

void kelulusan::output()
{
	cout << "Tampil Data Lulus " << endl <<endl;
 
	// menampilkan array
	for(i = 0; i < jumlah_baris ; i++){
		cout<<"Th ke-"<<i+1<<"\t\t";
    	for(j = 0; j < 3; j++){
    		cout <<matriks[i][j] << " ";
    	}
    	cout << endl;
	}
}

int main()
{
	kelulusan x;
	x.input();
	x.proses();
	x.output();
	return 0;
}
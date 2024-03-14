#include <iostream>
using namespace std;

int arr[20];		//membuat array dengan panjang data 20
int n;				//membuat var inputan n

void input() {				//procedure untuk input
	while (true)			//looping
	{
		cout << "Masukkan Jumlah Data pada Array : ";		//output ke layar
		cin >> n;											//input dari pengguna

		if (n <= 20) {										//jika n kurang dari atau sama dengan 20
			break;											//keluar dari loop
		}
		else												//jika n lebih dari 20
		
		{
			cout << "\nArray yang anda masukkan maksimal 20 elemen.\n";		//output ke layar
		}
	}
	cout << endl;									//output baris kosong
	cout << "======================" << endl;		//output ke layar
	cout << "Masukkan Element Array" << endl;		//output ke layar
	cout << "======================" << endl;		//output ke layar

	for (int i = 0; i < n; i++)						
	{		
		cout << "Data ke-" << (i + 1) << ": ";		//looping dengan i dimulai dari 0 hingga n-1
		cin >> arr[i];								//input dari pengguna
	}
}


void insertionsort() {						//procedure InssertionSort

	int temp;								//membuat variabel data temporary atau penyimpanan sementara
	int i , j;								//membuat variabel j sebagai penanda

	for (i = 1; i <= n - 1; i++) {			//1.looping dengan i dimulai dari 1 hingga n-1
		temp = arr[i];						//2.simpan nilai arr[i] ke variabel sementara temp

		j = i - 1;							//3.setting nilai j sama dengan i-1

		while (j >= 0 && arr[j] > temp)		//4.looping while dimana nilai j lebih besar sama dengan o dan arr[j] lebih besar dari temp
		{
			arr[j + 1] = arr[j];			//4a. simpan arr[j] ke variabel arr[j+1]
			j--;							//4b. decrement nilai j by 1
		}
		arr[j + 1] = temp;					//5.simpan nilai temp ke dalam arr[j+1]

		cout << "\nPass " << i << ": ";		//output ke layar
		for (int k = 0; k < n; k++) {		//looping nilai k dimulai dari 0 hingga n-1
			cout << arr[k] << " ";			//output ke layar
		}
	}

}


void display() {													//procedure untuk menampilkan hasil
	cout << endl;													//output baris kosong
	cout << "=================================" << endl;			//output ke layar
	cout << "Element Array yang telah tersusun" << endl;			//output ke layar
	cout << "=================================" << endl;			//output ke layar

	for (int j = 0; j < n; j++) {									//looping dengan j dimulai dari 0 hingga n-1
		cout << arr[j] << endl;										//output ke layar
	}
	cout << endl;													//output baris kosong
}

int main()
{
	input();				//memanggil input
	insertionsort();		//memanggil insertionsort
	display();				//memanggil display
}
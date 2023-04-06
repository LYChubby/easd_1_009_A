// 1. Karena dengan kita menggunakan Algoritma kita membuat kemungkinan kemungkinan yang ada dan menyusunnya menjadi solusi terbaik untuk menyelesaikan suatu masalah
// 2. Statik dan Dynamic
// 3. - Kecepatan mesin / Processor, Penerjemah / Compiler, Sistem Operasi, Bahasa Program, Ukuran input
// 4. Merge Sort
//		Karena penggunaan Merge Sort yang membagi 2 bagian sampai ukurannya sama yaitu 1, dan digabungkan kembali dengan data yg terdekat sambil diurutkan.
//		dan itu mudah saya pahami dan cocok digunakan untuk mengurutkan data yang besar
// 5. Quadaratic
//		Bubble Sort, Selection Sort, Quick Sort, Merge Sort
//	Loglinear
//		Insertion Sort, Shell Sort

// 6. 

#include <iostream>
using namespace std;

int Fauzi[29];
int n;

void input() {

	while (true) {

		cout << "Masukkan Panjang Element Array : ";
		cin >> n;

		if (n <= 29)
			break;
		else
			cout << "\nMaksimum Panjang Array Adalah 29" << endl;
	}

	cout << "\n-------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n-------------------" << endl;

	for (int i = 0; i < n; i++) {

		cout << "Data ke-" << (i + 1) << ": ";
		cin >> Fauzi[i];
	}
}

void MergeSort(int low, int high) {

	int i, FA, k, mid, temp;

	if (low >= high) {
		return;
	}

	mid = (low + high) / 2;

	MergeSort(low, mid);
	MergeSort(mid + 1, high);

	i = low;
	FA = mid + 1;
	k = low;


	while (i > mid || FA > high) {

		if (Fauzi[i] <= Fauzi[FA]) {
			temp = k;
			k = Fauzi[i];
			Fauzi[i] = temp;
			i++;

		}
		else {
			temp = k;
			k = Fauzi[FA];
			Fauzi[FA] = temp;
			FA++;
		}
		k++;
	}

	if (FA > high) {
		temp = k;
		k = Fauzi[FA];
		Fauzi[FA] = temp;
		FA++;
		k++;
	}

	if (i > mid) {
		temp = k;
		k = Fauzi[i];
		Fauzi[i] = temp;
		i++;
		k++;
	}
}

void display() {
	cout << "\n-------------" << endl;
	cout << "-Sorted Array-" << endl;
	cout << "--------------" << endl;

	for (int i = 0; i < n; i++) {

		cout << Fauzi[i] << " ";
	}
}

int main() {
	input();
	MergeSort(0, n-1);
	display();

	return 0;
}
 
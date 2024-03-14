#include <iostream>
using namespace std;
int arr[9];
int n;

void input() {	//prosedur untuk input
	while (true) {
		cout << "Masukan banyaknya element pada array :";	// Output ke layar
		cin >> n;		// Input dari pengguna
		if (n <= 20)	// Jika n kurang dari atau sama dengan 20
			break;
		else {
			cout << "\n Array dapat mempunyai maksimal 20 elemen.\n";
		}

	}
	cout << endl;									//Output Baris Kosong
	cout << "=========================" << endl;	//Output ke layar
	cout << "Masukan Elemen Array" << endl;			//Output ke layar
	cout << "=========================" << endl;	//Output ke layar

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << " : ";
		cin >> arr[i];
	}

}

void insertionsort() {
	int i,  temp, j;
	

	for (i = 1; i <= n - 1; i++) {	//step 1

		temp = arr[i]; // step 2

		j = i - 1;	//step 3

		while (j >= 0 && arr[j] > temp) //step 4 
		{
			arr[j + 1] = arr[j]; // step 4a
			j--; //step 4b
			
		}
		arr[j + 1] = temp; // step 5
	}
}

void display() 
{
	cout << endl;											//Menambahkan Baris Kosong 
	cout << "===================" << endl;					//Output ke layar
	cout << "Element Array yang telah tersusun" << endl;	//Output ke layar
	cout << "===================" << endl;					//Output ke layar
	cout << endl;
	for (int j = 0; j < n; j++) {
		cout << arr[j];
		if (j < n - 1) {
			cout << " --> ";
		}
	}
	cout << endl;
	cout << endl;
	cout << "Jumlah Pass = " << n - 1 << endl;
	cout << endl;
}

int main() {
	input(); //call the input  funcion to get user input
	insertionsort(); //call the selection sort function
	display();		//display  the sorted array
	system("pause");

	return 0;
}
#include <iostream>
using namespace std;

//Mendefinisikan konstanta MAX_SIZE yang bernilai 10. Konstanta ini digunakan untuk menentukan ukuran maksimum dari queue.
const int MAX_SIZE = 10;

//Mendefinisikan array queue yang dapat menampung hingga MAX_SIZE elemen.
int queue[MAX_SIZE];

//Mendefinisikan dua variabel front dan rear, yang digunakan untuk menandai bagian depan dan belakang queue.
int front = -1, rear = -1;

//Untuk memeriksa apakah queue kosong.
bool kondisi_kosong() {
return front == -1 && rear == -1;
}

//Untuk memeriksa apakah queue penuh.
bool kondisi_penuh() {
return (rear + 1) % MAX_SIZE == front; 
//menggunakan operator % agar untuk membuat nilai 'rear' melingkar kembali ke awal array ketika sudah mencapai batas maksimum (MAX_SIZE - 1) dari array queue. 
}

//Memberikan fungsi untuk menambahkan elemen ke dalam queue.
void Enqueue() {
if (kondisi_penuh()) {
cout << "Queue sudah penuh" << endl;
return;
}
int val;
cout << "Masukkan nilai yang ingin ditambahkan: ";
cin >> val;
if (kondisi_kosong()) front = 0;
rear = (rear + 1) % MAX_SIZE;
queue[rear] = val;
cout << "Nilai " << val << " berhasil ditambahkan ke dalam queue" << endl;
}
//Memberikan fungsi untuk menghapus elemen dari queue.
void Dequeue() {
if (kondisi_kosong()) {
cout << "Queue kosong" << endl;
return;
}
int val = queue[front];
if (front == rear) front = rear = -1;
else front = (front + 1) % MAX_SIZE;
cout << "Nilai " << val << " berhasil dihapus dari queue" << endl;
}

//Memberikan fungsi untuk menampilkan elemen-elemen pada queue.
void display() {
if (kondisi_kosong()) {
cout << "Tidak terdapat elemen pada queue" << endl;
return;
}
cout << "Data elemen pada queue : " << endl;
int id = front;
while (id != rear) {
cout << id - front + 1 << "." << queue[id] << endl;
id = (id + 1) % MAX_SIZE;
}
cout << id - front + 1 << "." << queue[id] << endl;
}

int main() {
int menu;

do	{
//Fungsi untuk menampilkan seluruh elemen yang terdapat pada queue.
display();
cout << "Menu:" << endl;
cout << "1. Enqueue" << endl;
cout << "2. Dequeue" << endl;
cout << "3. Cek kondisi queue" << endl;
cout << "0. Keluar" << endl;
cout << "Pilih menu: ";
cin >> menu;
switch (menu) {
				//Fungsi kasus untuk menjalankan penambahan queue (Enqueue)
				case 1:
				Enqueue();
				break;
				
				//Fungsi kasus untuk menajalnkan penghapusan queue (Dequeue)
				case 2:
				Dequeue();
				break;
				
				//Fungsi kasus untuk mengecek kondisi queue
				case 3:
				if (kondisi_kosong()) {
				cout << "Queue kosong" << endl;
				}
				else if (kondisi_penuh()) {
				cout << "Queue penuh dengan " << MAX_SIZE << " elemen" << endl;
				}
				else {
				cout << "Jumlah elemen pada queue: " << (rear - front + MAX_SIZE) % MAX_SIZE + 1 << endl;
				}
				break;
				
				//Fungsi untuk menghentikan atau keluar dari program
				case 0:
				cout << "Berhasil Keluar Dari Program !" << endl;
				break;
				//Fungsi 
				default:
				cout << "Pilihan tidak tersedia" << endl;
				break;
			   }
cout << endl;
	} 
//Program ini akan terus melakukan perulangan asalkan pada dibagian menu tidak sama 0 atau bisa dikatakan sebagai menghentikan program.
while (menu != 0);
return 0;
			}
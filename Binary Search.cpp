#include <iostream>

using namespace std;

int binarySearch(int arr[], int low, int high, int target)
{
    // Selama nilai rendah kurang dari atau sama dengan nilai tinggi
    while (low <= high) {
        // Mencari nilai tengah antara low dan high
        int mid = (low + high)/ 2;

        // Jika nilai tengah sama dengan target, kembalikan indeksnya
        if (arr[mid] == target)
            return mid;

        // Jika nilai tengah lebih besar dari target, cari di setengah kiri
        if (arr[mid] > target)
            high = mid - 1;

        // Jika nilai tengah lebih kecil dari target, cari di setengah kanan
        else
            low = mid + 1;
    }

    // Jika target tidak ditemukan, kembalikan -1
    return -1;
}

int main() {
    // Inisialisasi array dengan nilai 0 hingga 1000, mengisi setiap elemen dalam array dengan nilai dari 0 sampai 1000 secara berurutan
    int arr[1000];
    for (int i = 0; i <= 1000; i++) {
        arr[i] = i;
    }

    // Memanggil fungsi binarySearch untuk mencari halaman 755
    int low = 0;
    int high = 1000;
    int target = 755;
    int hasil = binarySearch(arr, low, high, target);

    if (hasil == -1)
        cout <<"Halaman tidak ditemukan\n" << endl;
    else
        cout <<"Halaman ditemukan pada indeks ke " << hasil << endl;

    return 0;
}

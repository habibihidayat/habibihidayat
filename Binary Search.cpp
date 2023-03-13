#include <iostream>

using namespace std;

int SearchBinary(int arr[], int low, int high, int target) 
{
   
    while (low <= high) 
	{
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1;
}

int main() 
{
    int arr[1000];
    for (int i = 0; i <= 1000; i++) 
	{
        arr[i] = i;
    }
    
    int low = 0;
    int high = 1000;
    int target = 755;
    int hasil = SearchBinary(arr, low, high, target);

    if (hasil == -1)
        cout <<"Halaman tidak ditemukan\n" << endl;
    else
        cout <<"Halaman ditemukan pada indeks ke " << hasil << endl;

    return 0;
}


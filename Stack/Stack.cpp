#include <iostream>

using namespace std;

const int MAX_SIZE = 5;
int stack[MAX_SIZE];
int top = -1;

bool Kosong()
{
    return top == -1;
}

bool Penuh()
{
    return top == MAX_SIZE - 1;
}

void push()
{
    if (Penuh())
	{
        cout << "Stack sudah penuh" << endl;
    }
	else
	{
        top++;
        stack[top] = top + 1;
        cout << "Elemen berhasil ditambahkan ke dalam stack" << endl;
    }
}

void pop()
{
    if (Kosong())
	{
        cout << "Stack kosong" << endl;
    }
	else
	{
        cout << "Elemen berhasil dihapus dari stack" << endl;
        top--;
    }
}

void display()
{
    if(!Kosong())
	{
        cout << "Data elemen pada stack : " << endl;
        for(int a = 0; a <= top; a++)
		{
            cout << a+1 << "."<< stack[a] << endl;
        }
    }
	else
	{
        cout << "Tidak terdapat elemen pada stack" << endl;
    }
    if(Penuh())
	{
        cout << "Stack penuh" << endl;
    }
}

int main()
{
    int menu;

    do 
	{
        cout << "Menu:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Cek kondisi stack" << endl;

        cout << "Pilih menu: ";
        cin >> menu;
        cout << endl;

        switch (menu)
		{
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
			case 3:
  				display();
    			break;
            default:
                cout << "Pilihan tidak tersedia" << endl;
                break;
        }

        cout << endl;

    } while (menu != 0);

    return 0;
}

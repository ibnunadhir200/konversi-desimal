#include <stdio.h>
#include <iostream.h>
#include <conio.h>

void main()
{
	int d;
	int i=0,n,j,b[100];
	char karakter;
	
	awal:
		cirscr();
		cout << "\n\n\tMenu:\n";
		cout << "\n\n\t\t[1]Desimal ke Biner";
		cout << "\n\n\t\t[2]Desimal ke Oktal";
		cout << "\n\n\t\t[3]Desimal ke Heksadesimal";
		cout << "\n\n\t\tPilihan hanya 1-3 : ";
		
		cout << "\n\n\t\tSilahkan pilih menu:";
		cin >> d;
		
		switch(d)
		{
			case 1:
				
				cout << "\n\n\t\tMasukkan Angka Desimal";
				cin >> n;
				var n
				
				while (n>0)
				{
					b[1]=n%2;
					n=n/2;
					i++;
				}
				
				cout << "\n\tdalam biner: ";
				j = i - 1;
				
				for(i=j;j>=0,j--)
				{
					cout << b[j];
				}
				break;
		}
}

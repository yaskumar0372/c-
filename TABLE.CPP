#include<iostream.h>
#include<conio.h>
void table(int x)
{
	 int i,sum;
	 for(i=1; i<=10; i++)
	 {
		cout << x << "*" << i << "=" << x*i;
		cout << endl;
	 }
}
void main()               //table
{
	int x,y;
	clrscr();
	cout << "Enter value : ";
	cin >> x;
	table(x);
	getch();
}
#include<iostream.h>
#include<conio.h>

void main(){
	int a,b,temp;
	clrscr();
	cout << "enter first value : ";
	cin >> a;
	cout << "enter second value : ";
	cin >> b;
	temp = a;
	a = b;
	b = temp;
	cout <<"now first value is : " <<a<< " \nnow second value is : " <<b;
	getch();
}
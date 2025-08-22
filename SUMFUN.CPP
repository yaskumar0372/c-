#include<iostream.h>
#include<conio.h>

int add(int a,int b)
{
	return a+b;
}

void main(){
	int a,b;
	clrscr();
	cout << "enter first value : ";
	cin >> a;
	cout << "enter second value : ";
	cin >> b;
	cout << "the sum is : " << add(a,b);
	getch();
}
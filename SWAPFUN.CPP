#include<iostream.h>
#include<conio.h>

void swap(int x,int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	cout << "now a = " << x << "\nnow b = " << y ;

}

void main(){
	int x = 10, y = 20;
	clrscr();
	swap(x,y);
	getch();
}


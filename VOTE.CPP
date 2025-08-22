#include<iostream.h>
#include<conio.h>
int main()              // vote program
{
	int age;
	clrscr();
	cout << "Enter your age : ";
	cin >> age;
	if(age>=18)
	{
	    cout << "you are is "<< age <<" so you can vote";
	}
	else
	{
		    cout << "your age is "<< age <<" so you can't vote";
	}
	getch();
	return 0;
}
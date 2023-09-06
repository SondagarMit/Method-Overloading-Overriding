#include<iostream.h>
#include<conio.h>
class Num
{
    int ans;
    public:
	   void number(int a , int b)
	   {
	     ans = a + b;
	     cout << ans;

	   }

};
void main()
{
    Num obj;
    clrscr();

    cout << "Sum is: ";
    obj.number(20, 20);

    getch();
}

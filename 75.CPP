#include <iostream.h>
#include<conio.h>
class Fact
{
    public:
        void factorial(int n) {
            int result = 1;
	    for (int i = 1; i <= n; ++i)
            {
             result *= i;
            }
         cout << "Factorial: " << result << endl;
}

	void cube(int n)
	{
	 cout << "Cube: " << n * n * n << endl;
	}

	void square(int n)
	{
	 cout << "Square: " << n * n << endl;
	}
};

void main()
{
    Fact obj;
    int num;

    clrscr();

    cout << "Enter a number: ";
    cin >> num;

    obj.factorial(num);
    obj.cube(num);
   obj.square(num);

    getch();
}

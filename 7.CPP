#include<iostream.h>
#include<conio.h>

class Method_sum
{
	public:
		void sum(int a, int b, int& ans)
		 {
		   ans = a + b;
		 }

		void sum(int a, int b, int c, int& ans)
		{
		   ans = a + b + c;
		}

		void sum(int a, int b, int c, int d, int& ans)
		{
		   ans = a + b + c + d;
		}

		void sum(int a, int b, int c, int d, int e, int& ans)
		{
		   ans = a + b + c + d + e;
		}


};

void main()
{
    Method_sum obj;
    int result;

    clrscr();
    obj.sum(10, 20, result);
    cout << "Sum of two : " << result << endl;

    obj.sum(10, 20, 30, result);
    cout << "Sum of three : " << result << endl;

    obj.sum(10, 20, 30, 40, result);
    cout << "Sum of four : " << result << endl;

    obj.sum(10, 20, 30, 40, 50, result);
    cout << "Sum of five : " << result << endl;


    obj.sum(10.5, 20.7, result);
    cout << "Sum of two : " << result << endl;

    getch();
}

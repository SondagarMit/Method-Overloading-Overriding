#include<iostream.h>
#include<conio.h>


class Subtraction 
{
    public:
    
            int subtract(int& a, int& b) 
            {
                return a - b;
            }

    
            float subtract(float& x, float& y) 
            {
                return x - y;
            }
};

void main()
{
    Subtraction obj;

    int int1 = 10, int2 = 5, resultInt;
    float float1 = 7.5, float2 = 2.3, resultFloat;
    
    clrscr();


    resultInt = obj.subtract(int1, int2);
    cout << "Integer Subtraction: " << resultInt << endl;

   
    resultFloat = obj.subtract(float1, float2);
    cout << "Float Subtraction: " << resultFloat << endl;

    getch();
}

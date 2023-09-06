#include<conio.h>
#include<iostream.h>
class Multi
{
  int ans;
  public:
	 void multiple(int a, int b)
	 {
	  ans =  a*b;
	   cout << a <<"\t" << b << endl;

	 }
	 void multiple(int a, int b, int c)
	 {
	   ans =  a*b*c;
	   cout << a << "\t" << b  << "\t" << c << endl;
	 }
	 void multiple(int a, int b, int c, int d)
	 {

	   ans =  a*b*c*d;
	   cout << a << "\t" << b << "\t" << c << "\t" << d << endl;
	 }


};

void main()
{
  Multi obj;
  clrscr();

//   obj.multiple(15 ,78);
   cout << "Class First: ";
   obj.multiple(15,78);


   cout << "Class Second: ";
   obj.multiple(15,98,10);


   cout << "Class Third: ";
   obj.multiple(10,95,51,56);





  getch();

}
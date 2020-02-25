#include <iostream>
using namespace std;


int main(){
	int a = 5;
	char b = 'A';
	char &c = b;
	int * x = &a;
	char * y = &b;
	int **z = &x;
	cout<< a << "\n" << b << "\n" << c << "\n" << x << "\n" << (void *)y << "\n" << z << "\n" ;
	cout<< "\n" << &a << "\n" <<(void *) &b << "\n" <<(void *) &c << "\n" << &x << "\n" <<(void *) &y << "\n" << &z << "\n" ;

   c = 'F';
   cout<< "\n" << a << "\n" << b << "\n" << c << "\n" << x << "\n" <<(void *) y << "\n" << z << "\n" ;

   *y = 'W';
    cout<< "\n" << a << "\n" << b << "\n" << c << "\n" << x << "\n" << (void *)y << "\n" << z << "\n" ;

	*x = 6;
	 cout<< "\n" << a << "\n" << b << "\n" << c << "\n" << x << "\n" <<(void *) y << "\n" << z << "\n" ;
	
	**z = 7;
	 cout<< "\n" << a << "\n" << b << "\n" << c << "\n" << x << "\n" <<(void *) y << "\n" << z << "\n" ;

	return 0;
}

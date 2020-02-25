#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *);
int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() using pointer here 
void shuffle(int *w , int *x , int *y , int *z){
for (int i = 1 ;i<10; i ++){	
	int r = rand()%3;
	int n;

	if(r ==  0){
	   n = *w;
	   *w = *x;
	  * x = n;
	}
	   else if(r == 1){
	   n = *x;
	  * x =* y;
	  * y = n;
	}
	else{
	   n =* y;
	  * y =* z;
	 *  z = n;
}
}
}
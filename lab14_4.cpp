#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &A,int &B,int &C,int &D){
	int temp;
	for(int i=0;i<10;i++){
		int chance = rand()%4;
		if(chance == 0){
			temp = A;
			A = B;
			B = temp;
		}
		else if(chance == 1){
			temp = A;
			A = C;
			C = temp;
		}
		else {
			temp = A;
			A = D;
			D = temp;
		}
	}
	
}

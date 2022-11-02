//Name: Israel Showell
//Date Created: 10/31/2022
//Project Name: Assembly Div And Mul Function
//Project Desc: 



#include <iostream>
#include <stdlib.h>
using namespace std;


extern "C" int integerMulDiv(int a, int b, int c);

int main()	{

	int a = 1, b = 2, c = 3;
	int s1 = 0;
	cout << "Please input 3 values so I can find the sum: " << endl;
	cout << "1st Value: ";
	cin >> a;
	cout << "2nd Value: ";
	cin >> b;
	cout << "3rd Value: ";
	cin >> c;
	s1 = integerMulDiv(a, b, c);

	printf("Here is the sum from the asm: %d \n", s1);


	
	system("PAUSE");
}
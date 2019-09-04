#include<iostream>
using namespace std;

int func(int x, int y);
double func(double x, double y);

int main() {
cout << "int - " << func(4,5) << endl ;
cout << "Double - " << func(4e4,5e2) << endl ;
return 0;
}

int func(int x, int y)
	{
	return x + y;
	}

double func(double x, double y)
	{
	return x + y;
	}

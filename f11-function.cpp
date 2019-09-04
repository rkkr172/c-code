#include<iostream>
using namespace std;
void func1();
void func2(string fname);
void func3(int age, string name);
int func4(int x);

int main()
{
cout << func4(10) << endl ;
//func3(25,"Rohit");
//func2("Aman");
//func1();
return 0;
}

int func4(int x)
	{
	return 5 + x;
	}

void func3(int age, string name)
	{
	cout << name << "is " << age << " years of Age.\n";
	}

void func2(string fname) {
	cout << "Hello Mr. " << fname << "\n";
	}

// Definition
void func1() 
	{ 
	cout << "Funcion \"func1\" is printing here\n";
	}

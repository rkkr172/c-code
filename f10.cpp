#include <iostream>
using namespace std;
int main()
{
string food = "pizza";
string *ptr = &food;

cout << food << "\n" ;
cout << &food << "\n" ;
//cout << "ptr- " << ptr << "\n" ;
cout << "*ptr - " << *ptr << "\n" ;

*ptr = "Pasta";
cout << "\n\n" ;
cout << *ptr << "\n";
cout << ptr << "\n";
cout << food ;
cout << "\n";
}

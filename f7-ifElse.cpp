#include<iostream>
using namespace std;
int main()
{
/*
int a = 10, b = 5;
if ( a > b) { cout << a << " is Greater than " << b ; }
else	{ cout << a << " is less than " << b ; }
cout << "\n" ;
*/

// If-else if
int b = 20;
if ( b < 11 )	{ cout << "Good Morning\n" ; }
else if ( b < 16 ) { cout << "Good Afternoon\n"; }
else { cout << "Good Evening\n"; }

//Short Hand If...Else (Ternary Operator)
int time = 20;
string result = ( time > 16) ? "Good Day":"Good Night" ;
cout << result << "\n" ;
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
int n = 30;
std::string s = "Hello";
std::cout << n << "\n" ;
std::cout << s << "\n" ;

//Input name
/*string name;
cout << "input your Name : ";
cin >> name;
cout << name << "\n"; 
*/
// input full name
string fullname ;
cout << "Input your full name : ";
getline (cin, fullname);
cout << fullname << "\n";

return 0;
}

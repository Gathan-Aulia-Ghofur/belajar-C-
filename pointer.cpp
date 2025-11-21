#include <iostream>

using namespace std;

int main()
{
	string var1 = "Ayooo belajar C++";
	string* var2 = &var1; //ini akan mengakses alamat memori yaitu var1 ke dalam ke var2
	
	cout << var1 << endl;
	cout << var2 << endl;\
	
}

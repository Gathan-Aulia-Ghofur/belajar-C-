#include <iostream>

using namespace std;

enum nama_zodiak {capricorn, aquarius, taurus, pisces, aries, cancer, gemini, libra, scorpio, sagitarius, leo,virgo};

int main ()
{
	nama_zodiak var1;
	
	var1 = capricorn;
	cout << var1 << endl;
	
	var1 = leo;
	cout << var1 << endl;
	
	var1 = pisces;
	cout << var1 << endl;
	
	var1 = virgo;
	cout << var1 << endl;
	
	return 0;
}
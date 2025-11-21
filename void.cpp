#include <iostream>

using namespace std;

void sayHello() {
cout << "Halooo, ini void" << endl;
}
void sapa(string nama) {
cout << "Halooo, " << nama << "!" << endl;
}

int main(){
	sayHello();
	sapa("rafa");
	
	return 0;
}

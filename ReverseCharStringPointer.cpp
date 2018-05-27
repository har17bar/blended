#include "stdafx.h"
#include <iostream>


using namespace std;
void reverse_str(char * ptr);

int main() {
	char string[] = "Hello";
	reverse_str(string);
	cout << string <<endl;
}

void reverse_str(char * ptrstrig) {
	char * stringend = ptrstrig;
	while (*stringend) {
		++stringend;
	}
	--stringend;
	int tmp;
	while (ptrstrig < stringend) {
		tmp = *ptrstrig;
		*ptrstrig = *stringend;
		*stringend = tmp;
		ptrstrig++;
		stringend--;
	}

}

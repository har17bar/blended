#include "stdafx.h"
#include <iostream> 
#include <string>


using namespace std;
// прототипы функций

void add(string, string);
int* strToAraay(string a, int size, int arr[]);
void showAraay(int arr[], int size);
void add(int arrnumber1[], int arrnumber2[], int size1, int size2);


int main() {


	string a = "9999";
	string b = "9999";
	int lengthstringA = a.length();
	int lengthstringB = b.length();
	int *arrnumber1 = new int[lengthstringA];
	int *arrnumber2 = new int[lengthstringA];
	strToAraay(a, lengthstringA, arrnumber1);
	strToAraay(b, lengthstringB, arrnumber2);
	add(arrnumber1, arrnumber2, lengthstringA, lengthstringB);


	return 0;
}


void add(int arrnumber1[], int arrnumber2[], int size1, int size2) {
		int suma;
		string stringout;
		int one=0;
		
		for (int i = size1 - 1, j = size2 - 1; i >= 0 && j >= 0; i--, j--) {
			
				suma = arrnumber1[i] + arrnumber2[j] + one;
				if (suma >= 10)
				{
					one = 1;
					suma -= 10;
				}
				else
				{
					one = 0;
				}

				stringout += to_string(suma);
				if (i == 0 & one == 1 &&j==0) {
					stringout += to_string(1);
				}	
		}
		string copy(stringout);
		std::reverse(copy.begin(), copy.end());
		int stringlength = copy.length();
		int *resultnumber = new int[stringlength];
		strToAraay(copy, stringlength, resultnumber);
		
		showAraay(resultnumber, stringlength);
		cout << "stringout" << copy << endl;
}




int* strToAraay(string a, int size, int arr[]) {


	for (int i = 0; i<size; i++) {
		arr[i] = a[i] - '0';
	}

	return arr;
}


void showAraay(int arr[], int size) {
	cout << "stexa" << endl;
	
	for (int i = 0; i<size; i++) {
		cout << arr[i] << endl;
	}

}
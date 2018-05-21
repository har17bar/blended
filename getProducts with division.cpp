#include "stdafx.h"
#include <iostream>
using namespace std;

void getProducts(int arr[], int length);
void show(int arr[], int length);

int main()
{
	int arr[3] = { 12,17,19 };
	int arrlength = sizeof(arr) / sizeof(arr[0]);
	getProducts(arr, arrlength);
}

void getProducts(int arr[], int length) {
	int sum = 1;
	for (int i = 0; i < length; i++) {
		sum *= arr[i];
	}
	
	for (int i = 0; i < length; i++) {
		arr[i] = sum / arr[i];
	}
	show(arr, length);
}
void show(int arr[], int length) {
	for (int i = 0; i < length; i++) {
		cout << arr[i] << endl;
	}
}

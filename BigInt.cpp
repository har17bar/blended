#include "stdafx.h"
#include <iostream> 
#include <string>


using namespace std;
// прототипы функций

void add(string, string);
int* strToAraay(string a, int size, int arr[], int bigsize);
void showAraay(int arr[], int size, int bigsize);
void add(int arrnumber1[], int arrnumber2[], int bigsize);
void subscript(int arrnumber1[], int arrnumber2[], int bigsize,int defult);

int main() {


    string a;
    string b;
    cout << "Entered your first Big Integer " << endl;
    cin >> a;
    cout << "Entered your second Big Integer" << endl;
    cin >> b;
    int lengthstringA = a.length();
    int lengthstringB = b.length();
    int lnegtbig;
    if (lengthstringA >= lengthstringB) {
        lnegtbig = a.length();
    }
    else {
        lnegtbig = b.length();
    }
    int *arrnumber1 = new int[lnegtbig];
    int *arrnumber2 = new int[lnegtbig];
    strToAraay(a, lengthstringA, arrnumber1, lnegtbig);
    strToAraay(b, lengthstringB, arrnumber2, lnegtbig);
    //showAraay(arrnumber1, lengthstringA, lnegtbig);
    //showAraay(arrnumber2, lengthstringB, lnegtbig);
    //add(arrnumber1, arrnumber2, lnegtbig);
    int defult;
    if (lengthstringA > lengthstringB) {
        subscript(arrnumber1, arrnumber2, lnegtbig, defult=2);
    }
    else if(lengthstringA == lengthstringB){
        subscript(arrnumber1, arrnumber2, lnegtbig, defult = 1);
    }
    else {
        subscript(arrnumber1, arrnumber2, lnegtbig, defult = 0);
    }
    

    return 0;
}





int* strToAraay(string a, int size, int arr[], int bigsize) {
    string copy(a);
    reverse(copy.begin(), copy.end());
    for (int i = bigsize - 1, j = 0; i >= 0 || j<size; i--, j++) {
        if (j<size) {
            arr[i] = copy[j] - '0';
        }
        else {
            arr[i] = 0;
        }

    }

    return arr;
}

void subscript(int arrnumber1[], int arrnumber2[], int bigsize,int defult) {
    
    if (defult) {
        for (int i = 0; i < bigsize; i++) {
            if (arrnumber1[i] < arrnumber2[i]) {
                defult = 0;
                break;
            }
            
        }
        (defult) ? cout  << "arajin mutq arac " << arrnumber1[0]<<arrnumber1[1] << "arajin2tvery "<<endl : cout << "erkrord mutq arac " << arrnumber2[0] << arrnumber2[1] << " arajin2tvery " << endl;
        
        
    }
    else if(defult==2){
        cout << "arajin mutq arac "<< arrnumber1[0] << arrnumber1[1] << "arajin2tvery " << endl;
    }
    else {
        cout << "erkrord mutq arac " << arrnumber2[0] << arrnumber2[1] << "arajin2tvery " << endl;
    }
    
    
}



void add(int arrnumber1[], int arrnumber2[], int bigsize) {
    int suma;
    string stringout;
    int one = 0;

    for (int i = bigsize - 1; i >= 0; i--) {
        suma = arrnumber1[i] + arrnumber2[i] + one;


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

    }
    if (one == 1) {
        stringout += to_string(1);
    }


    string copy(stringout);
    reverse(copy.begin(), copy.end());
    cout << "Your Big Integer" << endl;
    cout << copy << endl;


}



void showAraay(int arr[], int size, int bigsize) {


    for (int i = 0; i <= bigsize - 1; i++) {
        cout << arr[i];
    }


}

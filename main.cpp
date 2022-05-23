#include <iostream>
using namespace std;

int main() {

    int arreg[100];

    int tamano;

    int temp;

    cout << "Ingrese tamaño del array" << endl;

    cin >> tamano;

    for (int i = 0; i < tamano; i++) {

        cout << "Ingrese un numero al arreglo " << i << endl;

        cin >> arreg[i];

    }

    cout << "|Array desordenado|" << endl;

    for (int i = 0; i < tamano; i++) {

        cout << arreg[i] << " ";


    }

    cout << endl;

    for (int i = 0; i < tamano - 1; i++) {


        for (int j = i + 1; j < tamano; j++) {


            if (arreg[i] > arreg[j]) {

                temp = arreg[j];

                arreg[j] = arreg[i];

                arreg[i] = temp;


            }

        }

    }

    cout << "|array ordenado|" << endl;

    for (int i = 0; i < tamano; i++) {

        cout << arreg[i] << " ";


    }


    return 0;
}

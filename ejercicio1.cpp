#include <iostream>
#include <vector>
#include <algorithm> 
#include <cstdlib> 
#include <ctime> 
using namespace std;
int main() {
    int N;
    char option;
    cout << "Ingresar un número entero positivo (N): ";
    cin >> N;
    cout << "Digite una letra (g para generar números aleatorios, i para ingresar manualmente): ";
    cin >> option;
    vector<int> numeros;
    if (option == 'g') {
        srand(time(0));
        for (int i = 0; i < N; i++) {
            int num = rand() % N + 1;
            numeros.push_back(num);
        }
    } else if (option == 'i') {
        cout << "Ingrese " << N << " números enteros:\n";
        for (int i = 0; i < N; i++) {
            int num;
            cin >> num;
            numeros.push_back(num);
        }
    } else {
        cout << "Opción no válida." << endl;
        return 1;
    }
    sort(numeros.begin(), numeros.end(), greater<int>());
    cout << "Números ordenados de mayor a menor:\n";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}


#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    cout << left << setfill('-') << setw(15) << "Equipo" << setw(10) << "Puntos" << setw(10) << "Partidos" << endl;
    cout << left << setw(15) << "Real Madrid" << setw(10) << "78" << setw(10) << "38" << endl;
    cout << left << setw(15) << "Barcelona" << setw(10) << "75" << setw(10) << "38" << endl;
    cout << left << setw(15) << "Atletico" << setw(10) << "73" << setw(10) << "38" << endl;
    
    return 0;
}


#include <iostream>
#include <string>

using namespace std;
class CitaMedica {
private:
    string fechaHora;
    string tipoAtencion;
    string numeroAsegurado;
    string medico;
    string consultorio;
    string estado; 

public:
    CitaMedica(string fecha, string tipo, string num, string med, string cons, string est) 
        : fechaHora(fecha), tipoAtencion(tipo), numeroAsegurado(num), medico(med), consultorio(cons), estado(est) {}

    void obtenerDetalles() {
        cout << "Fecha/Hora: " << fechaHora << endl;
        cout << "Tipo de atención: " << tipoAtencion << endl;
        cout << "Número del asegurado: " << numeroAsegurado << endl;
        cout << "Médico: " << medico << endl;
        cout << "Consultorio: " << consultorio << endl;
        cout << "Estado: " << estado << endl; 
    }

    void reprogramarCita(string nuevaFechaHora) {
        fechaHora = nuevaFechaHora;
        cout << "Cita reprogramada a: " << fechaHora << endl;
    }

    void cancelarCita() {
        estado = "cancelada";
        cout << "Cita cancelada." << endl;
    }

    void completarCita() {
        estado = "completada";
        cout << "Cita completada." << endl;
    }
};

int main() {
    CitaMedica cita("2024-09-30 10:00", "Consulta General", "123456789", "Dr. Pérez", "Consultorio 101", "programada");
    cita.obtenerDetalles();
    cita.reprogramarCita("2024-10-01 12:00");
    cita.cancelarCita();
    cita.obtenerDetalles();

    return 0;
}


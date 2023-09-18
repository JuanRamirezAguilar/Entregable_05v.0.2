#include "Consulta.h"

// Constructores
Consulta::Consulta() : codigo("") {}

Consulta::Consulta(std::string valorCodigo, Fecha valorFecha, Hora valorHora, Paciente valorPaciente, Medico valorMedico,
Diagnostico valorDiagnostico, Medicamento valorMedicamento1, Medicamento valorMedicamento2,
Medicamento valorMedicamento3) : codigo(valorCodigo), fecha(valorFecha), hora(valorHora), paciente(valorPaciente),
medico(valorMedico), diagnostico(valorDiagnostico), medicamento1(valorMedicamento1), medicamento2(valorMedicamento2),
medicamento3(valorMedicamento3) {}

Consulta::Consulta(const Consulta& copia) : codigo(copia.codigo), fecha(copia.fecha), hora(copia.hora), paciente(copia.paciente), medico(copia.medico),
diagnostico(copia.diagnostico), medicamento1(copia.medicamento1), medicamento2(copia.medicamento2), medicamento3(copia.medicamento3) {}

// Destructor
Consulta::~Consulta() {}

// Metodos
std::string Consulta::toString() const{
    return "Codigo: " + codigo + "\nFecha de Consulta: " + fecha.toString() + "\nPaciente: " + paciente.toString() + "\nMedico: " + medico.toString() +
            "\nDiagnostico: " + diagnostico.toString() + "\nMedicamento1: " + medicamento1.toString() + "\nMedicamento2: " + medicamento2.toString() + 
            "\nMedicamento3: " + medicamento3.toString();
}

int Consulta::toInt() const{
    return 1;
}

// Setters
void Consulta::setCodigo(std::string valorCodigo) {codigo = valorCodigo;}
void Consulta::setFecha(Fecha valorFecha) {fecha = valorFecha;}
void Consulta::setHora(Hora valorHora) {hora = valorHora;}
void Consulta::setPaciente(Paciente valorPaciente) {paciente = valorPaciente;}
void Consulta::setMedico(Medico valorMedico) {medico = valorMedico;}
void Consulta::setDiagnostico(Diagnostico valorDiagnostico) {diagnostico = valorDiagnostico;}
void Consulta::setMedicamento1(Medicamento valorMedicamento) {medicamento1 = valorMedicamento;}
void Consulta::setMedicamento2(Medicamento valorMedicamento) {medicamento2 = valorMedicamento;}
void Consulta::setMedicamento3(Medicamento valorMedicamento) {medicamento3 = valorMedicamento;}

// Getters
std::string Consulta::getCodigo() const{return codigo;}
Fecha Consulta::getFecha() const{return fecha;}
Hora Consulta::getHora() const{return hora;}
Paciente Consulta::getPaciente() const{return paciente;}
Medico Consulta::getMedico() const{return medico;}
Diagnostico Consulta::getDiagnostico() const{return diagnostico;}
Medicamento Consulta::getMedicamento1 () const { return medicamento1; }
Medicamento Consulta::getMedicamento2 () const { return medicamento2; }
Medicamento Consulta::getMedicamento3 () const { return medicamento3; }

// Operadores
Consulta& Consulta::operator = (const Consulta& copia) {
    if (this == &copia) { return *this; }
    codigo = copia.codigo;
    fecha = copia.fecha;
    hora = copia.hora;
    paciente = copia.paciente;
    medico = copia.medico;
    diagnostico = copia.diagnostico;
    medicamento1 = copia.medicamento1;
    medicamento2 = copia.medicamento2;
    medicamento3 = copia.medicamento3;
    return *this;
}

bool Consulta::operator == (const Consulta& comparado) const{
    return toInt() == comparado.toInt();
}

bool Consulta::operator != (const Consulta& comparado) const{
    return !(*this == comparado);
}

bool Consulta::operator < (const Consulta& comparado) const{
    return toInt() < comparado.toInt();
}

bool Consulta::operator <= (const Consulta& comparado) const{
    return toInt() < comparado.toInt() || *this == comparado;
}

bool Consulta::operator > (const Consulta& comparado) const{
    return toInt() > comparado.toInt();
}

bool Consulta::operator >= (const Consulta& comparado) const{
    return toInt() > comparado.toInt() || *this == comparado;
}

std::ostream& operator << (std::ostream& out, const Consulta& objSalida) {
    out << objSalida.codigo << "*" << objSalida.fecha << objSalida.hora << objSalida.paciente 
        << objSalida.medico << objSalida.diagnostico << objSalida.medicamento1 
        << objSalida.medicamento2 << objSalida.medicamento3 << "#";
    return out;
}
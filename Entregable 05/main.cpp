#include <iostream>
#include <fstream>
#include <sstream>

#include "Lista.h"
#include "Consulta.h"

using namespace std;

#include "ArchivoPaciente.h"

int main () {

    Lista<Consulta> miListaDeConsultas;
    ArchivoPaciente miArchivo;
    string nameFile = "respaldo_consultas.file";

    miListaDeConsultas = miArchivo.importBackup(nameFile);

    system("cls");
    cout << "Numero de Registros Encontrados: " << miListaDeConsultas.length() <<endl;
    cout << "A continuacion se imprimen todos los datos..."; 
    cin.clear(); cin.ignore(); cin.sync();
    
    int i = 12520;
    cout << i << ")._" << endl << miListaDeConsultas.indice(i).getPaciente().toString() <<endl<<endl;
    cin.clear(); cin.ignore(); cin.sync();

    return 0;
}
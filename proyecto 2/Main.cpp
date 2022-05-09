#include <iostream>
#include <string>

using namespace std;\

int main() {
	int opc = 0,opc1 = 0,opc3 = 0;


	cout << "BusCar Costa Rica S.A"<<endl;

	do {
		cout << "1. Configuracion de la flota de transporte. " << endl;
		cout << "2. Reserva de Tiquetes. " << endl;
		cout << "3. Reportes. " << endl;
		cout << "4. Salir. " << endl;
		cin >> opc;
		switch (opc) {
		case 1:
			do {
				cout << "1. Tipo de Buses. " << endl;
				cout << "2. Restricciones Sanitarias." << endl;
				cout << "3. Rutas de Vajes. " << endl;
				cout << "4. regresar... " << endl;
				cin >> opc;
				switch (opc1) {
				case 1:

					break;
				case 2:

					break;
				case 3:

					break;
				case 4:
					cout << "4. regresando al menu principal... " << endl;
					break;
				}
			} while (opc1!=4);
			break;
		case 2:
			cout << "Reservar tiquetes. " << endl;

			break;
		case 3:
			do {
				cout << "1. Mostrar todos los tiqutes emitidos.                       " << endl;
				cout << "2. Mostrar la Disponibilidad de pasajeros por ruta de viaje. " << endl;
				cout << "3. regresar...                                               " << endl;
				cin >> opc;
				switch (opc3) {
				case 1:

					break;
				case 2:

					break;
				case 3:
					cout << "Regresando al menu principal... " << endl;
					break;
				}
			} while (opc3 != 3);
			break;
			break;
		case 4: 
			cout << "Ha salido del programa exitosamente. " << endl;
			break; 
		}

	} while (opc != 4);

	return 0;
}
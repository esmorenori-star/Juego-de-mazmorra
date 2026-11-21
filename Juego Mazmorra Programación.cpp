#include <iostream>
#include <string>
#include <limits>

using namespace std;
int EleccionMenu;

int DesplegarMenu(){
	cout<< "----JUEGO DE MAZMORRA"<<endl;
	cout<< "Menu de juego: "<<endl;
	cout<<"1. Nueva partida"<<endl;
	cout<<"2. Reanudar partida"<<endl;
	cout<<"3. Estadisticas y rankings"<<endl;
	cout<<"4. Cerrar y salir"<<endl;
	cout<<"Escribe el numero de la opcion que desees"<<endl;

	if (!(cin >> EleccionMenu)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        EleccionMenu = 0;
    }
	cout<<endl;
	return EleccionMenu;
}

int main () {
	bool ejecucion = true;
	
	while(ejecucion){
		
		DesplegarMenu();
		switch(EleccionMenu){
			case 1:
				
				
				break;
			case 2:
				
				
				break;
			case 3:
				
				
				break;
			case 4:
				
				ejecucion = false;
				cout<<"JUEGO CERRADO";
				break;
			default:
				
				
				cout<<"Comando invalido. Ingrese una opcion valida. \n "<<endl;
				break;
		}
	}
	
}

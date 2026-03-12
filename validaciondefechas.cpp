#include <iostream>
using namespace std;

bool EsBisiesto(int anio) {
	if (anio % 400 == 0)
		return true;
	if (anio % 100 == 0)
		return false;
	if (anio % 4 == 0)
		return true;
	return false;
}

int ObtenerDiasDelMes(int mes, int anio) {
	
	if (mes == 1 || mes == 3 || mes == 5 || mes == 7 ||
		mes == 8 || mes == 10 || mes == 12)
		return 31;
	
	if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
		return 30;
	
	if (mes == 2) {
		if (EsBisiesto(anio))
			return 29;
		else
			return 28;
	}
	
	return 0;
}

bool EsFechaValida(int dia, int mes, int anio) {
	
	if (mes < 1 || mes > 12)
		return false;
	
	int maxDias = ObtenerDiasDelMes(mes, anio);
	
	if (dia >= 1 && dia <= maxDias)
		return true;
	
	return false;
}

void EjecutarSimulacion(int cantidadRondas) {
	
	int exitos = 0;
	
	for (int i = 0; i < cantidadRondas; i++) {
		
		int dia, mes, anio;
		cin >> dia >> mes >> anio;
		
		if (EsFechaValida(dia, mes, anio)) {
			cout << "Salto temporal completado" << endl;
			exitos++;
		} else {
			cout << "Falla catastrofica: Fecha inexistente" << endl;
		}
	}
	
	cout << "Saltos exitosos: " << exitos << " / " << cantidadRondas;
}

int main() {
	
	int N;
	cin >> N;
	
	EjecutarSimulacion(N);
	
	return 0;
}

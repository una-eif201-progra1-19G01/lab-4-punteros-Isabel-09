#include <iostream>
#include "Empleado.h"
#include <time.h>
int main() {

	srand((unsigned)time(NULL));

	Empleado empleado[4];
	
	empleado[0].setNombre("Mike");
	empleado[0].setAnoExperiencia(2);
	empleado[0].setSalarioBase(1200000);
	std::cout << empleado[0].ReporteEmpleado() << std::endl;

	empleado[1].setNombre("Sebastian");
	empleado[1].setAnoExperiencia(3);
	empleado[1].setSalarioBase(1600000);
	std::cout << empleado[1].ReporteEmpleado() << std::endl;

	empleado[2].setNombre("Carolina");
	empleado[2].setAnoExperiencia(8);
	empleado[2].setSalarioBase(1800000);
	std::cout << empleado[2].ReporteEmpleado() << std::endl;

	empleado[3].setNombre("Emma");
	empleado[3].setAnoExperiencia(1);
	empleado[3].setSalarioBase(1800000);
	std::cout << empleado[3].ReporteEmpleado() << std::endl;
	return 0;
}
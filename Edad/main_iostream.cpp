#include <iostream>

int main() {
    int ano_nacimiento, mes_nacimiento, dia_nacimiento;
    int ano_actual = 2024;
    int mes_actual = 9;
    int dia_actual = 22;
    float edad;
    
    std::cout << "Introduce tu día de nacimiento: " << std::endl;
    std::cin >> dia_nacimiento;
    
    std::cout << "Introduce tu mes de nacimiento: " << std::endl;
    std::cin >> mes_nacimiento;
    
    std::cout << "Introduce tu año de nacimiento: " << std::endl;
    std::cin >> ano_nacimiento;
    

    float fecha_actual = ano_actual + (mes_actual / 12.0) + (dia_actual / 365.0);
    float fecha_nacimiento = ano_nacimiento + (mes_nacimiento / 12.0) + (dia_nacimiento / 365.0);

    edad = fecha_actual - fecha_nacimiento;

  std::cout << "Tu edad es: " << edad << " años" << std::endl;

    return 0;
}
#include <iostream>

int main()
{
	setlocale(LC_ALL, "RU");
	int number1{ 0 }, number2{ 0 }, number3{ 0 };
	std::cout << "Введите первое ЦЕЛОЕ число: ";
	std::cin >> number1;
	std::cout << "Введите второе ЦЕЛОЕ число: ";
	std::cin >> number2;
	std::cout << "Введите третье ЦЕЛОЕ число: ";
	std::cin >> number3;
	int maximum{ (number1 >= number2 && number1 >= number3) ? number1 : ((number2 >= number3) ? number2 : number3) };
	int minimum{ (number1 <= number2 && number1 <= number3) ? number1 : ((number2 <= number3) ? number2 : number3) };
	int middle{ (number1 != maximum && number1 != minimum) ? number1 : ((number2 != maximum && number2 != minimum) ? number2 : number3) };
	std::cout << maximum << " " << middle << " " << minimum << std::endl;
	return 0;
}

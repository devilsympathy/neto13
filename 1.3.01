#include <iostream>

int main()
{
	setlocale(LC_ALL, "RU");
	bool t{ true };
	bool f{ false };
	std::cout << std::boolalpha;
	std::cout << "Оператор: ||" << std::endl;
	std::cout << t << "\t" << t << "\t" << (t || t) << std::endl;
	std::cout << f << "\t" << t << "\t" << (f || t) << std::endl;
	std::cout << t << "\t" << f << "\t" << (t || f) << std::endl;
	std::cout << f << "\t" << f << "\t" << (f || f) << std::endl;

	std::cout << std::endl << "Оператор: &&" << std::endl;

	std::cout << t << "\t" << t << "\t" << (t && t) << std::endl;
	std::cout << f << "\t" << t << "\t" << (f && t) << std::endl;
	std::cout << t << "\t" << f << "\t" << (t && f) << std::endl;
	std::cout << f << "\t" << f << "\t" << (f && f) << std::endl;
	return 0;
}

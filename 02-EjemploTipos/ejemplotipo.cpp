/*Ejemplo de valores y operaciones de tipo de dato
Delgadillo, Laura
28/04/2019
*/

#include <iostream>
#include <string>

int main()
{
	double a{ 18.578 };
	double b{ 5.74 };
    std::cout << a/b;

	bool var = true and false;
	std::cout << var;
	std::cout << "\n";

	char nombre[15] = "laura";
	std::cout << nombre;
	std::cout << "\n";

	unsigned n1{ 87 };
	unsigned n2{ 34 };
	std::cout << n1 - n2;
	std::cout << "\n";

	int m{ -42 };
	int n{ 19 };
	std::cout << m * n;
	std::cout << "\n";

	std::string v="Laura Delgadillo";
	std::cout << v.length();

}


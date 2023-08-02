#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
	std::cout << "PROVIDED MAIN!!" << std::endl;
	std::cout << std::endl;

    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
	for (int i = 0; i < MAX_VAL; i++)
		std::cout << numbers[i] << " ";
	std::cout << std::endl;
    delete [] mirror;//

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "MyMAIN MAIN!!" << std::endl;
	std::cout << std::endl;

	Array<int> a = Array<int>();

	std::cout << "a size: " << a.size() << std::endl;
	try {
		std::cout << a[2] << std::endl;
	} catch (std::out_of_range &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	Array<int> b(25);

	b[0] = 1;
	std::cout << "b[0]: " << b[0] << std::endl;

	a = b;
	a[0] = 2;
	std::cout << "b[0] (after -a- assgination): " << b[0] << std::endl;
	std::cout << "a[0]: " << a[0] << std::endl;

	std::cout << "b size: " << b.size() << std::endl;
	std::cout << "a (after assignation) size: " << a.size() << std::endl;

    return 0;
}

// Task 1. Preprocessor directives.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>

#define MODE 1

#ifndef MODE
#error "not define MODE"
#endif 

#if MODE 1
int add1(int a, int b) {
	return a + b;
}
#endif


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a{ 0 }, b{0};

#if MODE == 0
	std::cout << "Работаю в режиме тренировки" << std::endl;

#elif MODE == 1
	std::cout << "Работаю в боевом режиме" << std::endl;
	std::cout << "Введите два числа: ";
	std::cin >> a >> b;
	std::cout << add1(a,b);
#else 
	std::cout << "Неизвестный режим. Завершение работы" << std::endl;

#endif

	
}


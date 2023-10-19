#pragma once
#include <iostream>
class base {
public:
	std::string animal_type;
	std::string breed;
	std::string color;

    base() = default;
    virtual ~base() = default;

    virtual void input() = 0; // Метод для ввода данных
    virtual void display() = 0; // Метод для вывода данных

};


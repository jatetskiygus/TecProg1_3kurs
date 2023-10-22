#pragma once
#include <string>
#include <iostream>
#include <fstream>

class base {
public:
	std::string animal_type;
	std::string breed;
	std::string color;

    base() = default;
     ~base() = default;

    virtual void input() = 0; // Метод для ввода данных
    virtual void display() = 0; // Метод для вывода данных
    virtual void load_in_file(std::ofstream &file) = 0;// Метод для загрузки данных в файл
    virtual void load_from_file(std::ifstream &file) = 0;// Метод для загрузки данных из файла

};


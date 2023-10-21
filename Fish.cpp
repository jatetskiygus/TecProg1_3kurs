#include "fish.h"

// Метод внесения данных
void Fish::input() {
	std::cout << "Введите породу: ";
	std::cin >> breed;
	std::cout << "Введите цвет: ";
	std::cin >> color;
	std::cout << "Введите питание: ";
	std::cin >> food_type;
}

// Метод отображения данных
void Fish::display() {
	std::cout << "Тип животного: " << animal_type << std::endl
		<< "Порода: " << breed << std::endl
		<< "Окрас: " << color << std::endl
		<< "Питание:" << food_type << std::endl;
}

// Метод для загрузки данных в файл
void Fish::load_in_file(std::ofstream &file) {
	file <<  animal_type << std::endl
		<< breed << std::endl
		<< color << std::endl
		<< food_type << std::endl;
}

// Метод для загрузки данных из файла
void Fish::load_from_file(std::ifstream &file) {
	std::string line;
	getline(file, line);
	breed = line;
	getline(file, line);
	color = line;
	getline(file, line);
	food_type = line;
}
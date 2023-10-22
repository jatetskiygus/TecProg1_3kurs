#include "bird.h"

// Конструктор
Bird::Bird() {
	animal_type = "Птица";
	std::cout << "Объект типа \"" << animal_type << "\" был создан" << std::endl;
	system("pause");
}

// Деструктор
Bird::~Bird() {
	std::cout << "Птичку жалко.." << std::endl;
	system("pause");
}

// Метод внесения данных
void Bird::input() {
	std::cout << "Введите породу: ";
	std::cin >> breed;
	std::cout << "Введите цвет: ";
	std::cin >> color;
	std::cout << "Введите питание: ";
	std::cin >> food_type;
	std::cout << "Введите место обитания: ";
	std::cin >> habitat;
}

// Метод отображения данных
void Bird::display() {
	std::cout << "Тип животного: " << animal_type << std::endl
		<< "Порода: " << breed << std::endl
		<< "Окрас: " << color << std::endl
		<< "Питание:" << food_type << std::endl
		<< "Место обитания: " << habitat << std::endl;
}

// Метод для загрузки данных в файл
void Bird::load_in_file(std::ofstream &file) {
	file << animal_type << std::endl
		<< breed << std::endl
		<< color << std::endl
		<< food_type << std::endl
		<< habitat << std::endl;
}

// Метод для загрузки данных из файла
void Bird::load_from_file(std::ifstream &file) {
	std::string line;
	getline(file, line);
	breed = line;
	getline(file, line);
	color = line;
	getline(file, line);
	food_type = line;
	getline(file, line);
	habitat = line;
}

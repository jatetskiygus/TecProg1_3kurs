#include "fish.h"

// Конструктор
Fish::Fish() {
	animal_type = "Рыба";
	std::cout << "Объект типа \"" << animal_type << "\" был создан" << std::endl;
	system("pause");
}

// Коонструктор копирования
Fish::Fish(const Fish& fish) {
	breed = fish.breed;
	color = fish.color;
	food_type = fish.food_type;
}

// Конструктор с параметрами
Fish::Fish(std::string Breed, std::string Color, std::string FoodType) {
	breed = Breed;
	color = Color;
	food_type = FoodType;
}

// Деструктор
Fish::~Fish() {
	std::cout << "Объект типа \"" << animal_type << "\" был уничтожен" << std::endl;
	system("pause");
}

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
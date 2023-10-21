#include "Cat.h"

// Метод внесения данных
void Cat::input() {
	std::cout << "Введите породу: ";
	std::cin >> breed;
	std::cout << "Введите цвет: ";
	std::cin >> color;
	std::cout << "Введите имя владельца: ";
	std::cin >> FirstName;
	std::cout << "Введите фамилию владельца: ";
	std::cin >> LastName;
	std::cout << "Введите кличку кошки: ";
	std::cin >> NickName;
}

// Метод отображения данных
void Cat::display() {
	std::cout << "Тип животного: " << animal_type << std::endl
		<< "Порода: " << breed << std::endl
		<< "Окрас: " << color << std::endl
		<< "Имя Фамиля владельца:" << FirstName << " " << LastName << std::endl
		<< "Кличка: " << NickName << std::endl;
}

// Метод для загрузки данных в файл
void Cat::load_in_file(std::ofstream &file) {
	file << animal_type << std::endl
		<< breed << std::endl
		<< color << std::endl
		<< FirstName << std::endl << LastName << std::endl
		<< NickName << std::endl;
}

// Метод для загрузки данных из файла
void Cat::load_from_file(std::ifstream &file) {
	std::string line;
	getline(file, line);
	breed = line;
	getline(file, line);
	color = line;
	getline(file, line);
	FirstName = line;
	getline(file, line);
	LastName = line;
	getline(file, line);
	NickName = line;
}
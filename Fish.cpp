#include "fish.h"

// �����������
Fish::Fish() {
	animal_type = "����";
	std::cout << "������ ���� \"" << animal_type << "\" ��� ������" << std::endl;
	system("pause");
}

// ������������ �����������
Fish::Fish(const Fish& fish) {
	breed = fish.breed;
	color = fish.color;
	food_type = fish.food_type;
}

// ����������� � �����������
Fish::Fish(std::string Breed, std::string Color, std::string FoodType) {
	breed = Breed;
	color = Color;
	food_type = FoodType;
}

// ����������
Fish::~Fish() {
	std::cout << "������ ���� \"" << animal_type << "\" ��� ���������" << std::endl;
	system("pause");
}

// ����� �������� ������
void Fish::input() {
	std::cout << "������� ������: ";
	std::cin >> breed;
	std::cout << "������� ����: ";
	std::cin >> color;
	std::cout << "������� �������: ";
	std::cin >> food_type;
}

// ����� ����������� ������
void Fish::display() {
	std::cout << "��� ���������: " << animal_type << std::endl
		<< "������: " << breed << std::endl
		<< "�����: " << color << std::endl
		<< "�������:" << food_type << std::endl;
}

// ����� ��� �������� ������ � ����
void Fish::load_in_file(std::ofstream &file) {
	file <<  animal_type << std::endl
		<< breed << std::endl
		<< color << std::endl
		<< food_type << std::endl;
}

// ����� ��� �������� ������ �� �����
void Fish::load_from_file(std::ifstream &file) {
	std::string line;
	getline(file, line);
	breed = line;
	getline(file, line);
	color = line;
	getline(file, line);
	food_type = line;
}
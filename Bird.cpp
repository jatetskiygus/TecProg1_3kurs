#include "bird.h"

// ����� �������� ������
void Bird::input() {
	std::cout << "������� ������: ";
	std::cin >> breed;
	std::cout << "������� ����: ";
	std::cin >> color;
	std::cout << "������� �������: ";
	std::cin >> food_type;
	std::cout << "������� ����� ��������: ";
	std::cin >> habitat;
}

// ����� ����������� ������
void Bird::display() {
	std::cout << "��� ���������: " << animal_type << std::endl
		<< "������: " << breed << std::endl
		<< "�����: " << color << std::endl
		<< "�������:" << food_type << std::endl
		<< "����� ��������: " << habitat << std::endl;
}

// ����� ��� �������� ������ � ����
void Bird::load_in_file(std::ofstream &file) {
	file << animal_type << std::endl
		<< breed << std::endl
		<< color << std::endl
		<< food_type << std::endl
		<< habitat << std::endl;
}

// ����� ��� �������� ������ �� �����
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

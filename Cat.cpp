#include "Cat.h"

// �����������
Cat::Cat() {
	animal_type = "�����";
	std::cout << "������ ���� \"" << animal_type << "\" ��� ������" << std::endl;
	system("pause");
}

// ����������
Cat::~Cat() {
	std::cout << "������ ���� \"" << animal_type << "\" ��� ���������" << std::endl;
	system("pause");
}

// ����� �������� ������
void Cat::input() {
	std::cout << "������� ������: ";
	std::cin >> breed;
	std::cout << "������� ����: ";
	std::cin >> color;
	std::cout << "������� ��� ���������: ";
	std::cin >> FirstName;
	std::cout << "������� ������� ���������: ";
	std::cin >> LastName;
	std::cout << "������� ������ �����: ";
	std::cin >> NickName;
}

// ����� ����������� ������
void Cat::display() {
	std::cout << "��� ���������: " << animal_type << std::endl
		<< "������: " << breed << std::endl
		<< "�����: " << color << std::endl
		<< "��� ������ ���������:" << FirstName << " " << LastName << std::endl
		<< "������: " << NickName << std::endl;
}

// ����� ��� �������� ������ � ����
void Cat::load_in_file(std::ofstream &file) {
	file << animal_type << std::endl
		<< breed << std::endl
		<< color << std::endl
		<< FirstName << std::endl << LastName << std::endl
		<< NickName << std::endl;
}

// ����� ��� �������� ������ �� �����
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
#pragma once
#include "Base.h"

class Cat : public base {
public:
	std::string FirstName;
	std::string LastName;
	std::string NickName;

	Cat();
	~Cat();

	// ����� �������� ������
	void input() override;

	// ����� ����������� ������
	void display() override;

	// ����� ��� �������� ������ � ����
	void load_in_file(std::ofstream &file) override;

	// ����� ��� �������� ������ �� �����
	void load_from_file(std::ifstream &file) override;
};

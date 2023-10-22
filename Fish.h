#pragma once
#include "Base.h"

class Fish : public base {
public:
	std::string food_type;

	Fish(const Fish& fish);
	Fish(std::string breed, std::string color, std::string food_type);
	Fish();
	~Fish();

	// ����� �������� ������
	void input() override;

	// ����� ����������� ������
	void display() override;

	// ����� ��� �������� ������ � ����
	void load_in_file(std::ofstream &file) override;

	// ����� ��� �������� ������ �� �����
	void load_from_file(std::ifstream &file) override;
};


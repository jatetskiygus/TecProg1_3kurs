#pragma once
#include "Base.h"

class Fish : public base {
public:
	std::string food_type;

	Fish() = default;
	~Fish() = default;

	// ����� �������� ������
	void input() override;

	// ����� ����������� ������
	void display() override;

	// ����� ��� �������� ������ � ����
	void load_in_file(std::ofstream &file) override;

	// ����� ��� �������� ������ �� �����
	void load_from_file(std::ifstream &file) override;
};


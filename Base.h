#pragma once
#include <string>
#include <iostream>
#include <fstream>

class base {
public:
	std::string animal_type;
	std::string breed;
	std::string color;

    base() = default;
     ~base() = default;

    virtual void input() = 0; // ����� ��� ����� ������
    virtual void display() = 0; // ����� ��� ������ ������
    virtual void load_in_file(std::ofstream &file) = 0;// ����� ��� �������� ������ � ����
    virtual void load_from_file(std::ifstream &file) = 0;// ����� ��� �������� ������ �� �����

};


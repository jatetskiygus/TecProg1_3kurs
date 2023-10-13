#pragma once
#include <iostream>
class Base {
public:
	std::string animal_type;
	std::string breed;
	std::string color;

    Base() = default;
    virtual ~Base() = default;

    virtual void input() = 0; // ����� ��� ����� ������
    virtual void display() = 0; // ����� ��� ������ ������

};


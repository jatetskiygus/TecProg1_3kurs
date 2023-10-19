#pragma once
#include "Base.h"
class keeper {
    struct container{
        base* animal;
        container* next;
    };
    int counter = 0;
    container* first;
    container* last;

    keeper();
    ~keeper();


    bool is_empty();
    void push_back(base* animal); // ���������� ������� � ���������
    void pop_back(); // �������� ������� �� ����������
    void saveToFile(const std::string& filename); // ���������� ������ � ����
    void loadFromFile(const std::string& filename); // �������� ������ �� �����

    void displayAllAnimals(); // ����� ���� ��������
};


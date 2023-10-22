#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "Base.h"
#include "Fish.h"
#include "Bird.h"
#include "Cat.h"

class Keeper {
public:
    struct container{
        base* animal;
        container* next;
    };
    int counter = 0;
    container* first;
    container* last;

    Keeper();
    ~Keeper();

    // ������ � �������� �� �������
    container* operator[] (const int index) {
        if (is_empty()) {
            std::cout << "��������� ����";
                return nullptr;
        }
        container* buffer = first;
        for (int i = 0; i < index; i++) {
            buffer = buffer->next;
            if (!buffer) return nullptr;
        }
        return buffer;
    }
    bool is_empty();// �������� �� �������
    void remove_id();// �������� �������� �� ��� �������
    void push_back(base* animal); // ���������� ������� � ���������
    void pop_back(); // �������� ���������� �� ����������
    void loadInFile(const std::string& filename); // ���������� ������ � ����
    Keeper loadFromFile(const std::string& filename); // �������� ������ �� �����
    void displayAllAnimals(); // ����� ���� ��������
};


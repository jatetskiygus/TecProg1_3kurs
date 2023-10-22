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

    // Доступ к элементу по индексу
    container* operator[] (const int index) {
        if (is_empty()) {
            std::cout << "Контейнер пуст";
                return nullptr;
        }
        container* buffer = first;
        for (int i = 0; i < index; i++) {
            buffer = buffer->next;
            if (!buffer) return nullptr;
        }
        return buffer;
    }
    bool is_empty();// Проверка на пустоту
    void remove_id();// Удаление элемента по его индексу
    void push_back(base* animal); // Добавление объекта в контейнер
    void pop_back(); // Удаление последнего из контейнера
    void loadInFile(const std::string& filename); // Сохранение данных в файл
    Keeper loadFromFile(const std::string& filename); // Загрузка данных из файла
    void displayAllAnimals(); // Вывод всех объектов
};


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
    void push_back(base* animal); // Добавление объекта в контейнер
    void pop_back(); // Удаление объекта из контейнера
    void saveToFile(const std::string& filename); // Сохранение данных в файл
    void loadFromFile(const std::string& filename); // Загрузка данных из файла

    void displayAllAnimals(); // Вывод всех объектов
};


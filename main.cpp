#include <iostream>
#include <string>
#include "Keeper.h"
#include "Fish.h"
#include "Bird.h"
#include "Cat.h"

int main() {
    Keeper keeper;
    int choice;

    while (true) {
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Добавить животное" << std::endl;
        std::cout << "2. Удалить последнее животное" << std::endl;
        std::cout << "3. Удалить животное по его номеру в списке" << std::endl;
        std::cout << "4. Отобразить всех животных" << std::endl;
        std::cout << "5. Сохранить все данные в файл" << std::endl;
        std::cout << "6. Загрузить из файла" << std::endl;
        std::cout << "0. Выход" << std::endl;
        std::cout << "Ваш выбор: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                int animalType;
                std::cout << "Выберите тип животного: " << std::endl;
                std::cout << "1. Рыба" << std::endl;
                std::cout << "2. Птица" << std::endl;
                std::cout << "3. Кошка" << std::endl;
                std::cout << "Ваш выбор: ";
                std::cin >> animalType;

                if (animalType == 1) {
                    Fish* fish = new Fish;
                    fish->input();
                    keeper.push_back(fish);
                } else if (animalType == 2) {
                    Bird* bird = new Bird;
                    bird->input();
                    keeper.push_back(bird);
                } else if (animalType == 3) {
                    Cat* cat = new Cat;
                    cat->input();
                    keeper.push_back(cat);
                } else {
                    std::cout << "Выберите цифру из списка, пожалуйста" << std::endl;
                    system("pause");
                }
                break;

            case 2:
                
                keeper.pop_back();
                break;

            case 3:
                keeper.remove_id();
                break;

            case 4:
                keeper.displayAllAnimals();
                system("pause");
                break;

            case 5: {
                std::string filename = "";
                std::cout << "Введите имя файла, куда будут выгружены данные: ";
                std::cin >> filename;
                keeper.loadInFile(filename);
                break;
            }
            case 6: {
                std::string loadFilename = "";
                std::cout << "Введите имя файла, откуда будут загружены данные: ";
                std::cin >> loadFilename;
                keeper = keeper.loadFromFile(loadFilename);
                break;
            }
            case 0:
                return 0;

            default:
                std::cout << "Выберите цифру из списка, пожалуйста" << std::endl;
                system("pause");
        }
    }

    return 0;
}
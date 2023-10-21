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
        std::cout << "1. �������� ��������" << std::endl;
        std::cout << "2. ������� ��������� ��������" << std::endl;
        std::cout << "3. ������� �������� �� ��� ������ � ������" << std::endl;
        std::cout << "4. ���������� ���� ��������" << std::endl;
        std::cout << "5. ��������� ��� ������ � ����" << std::endl;
        std::cout << "6. ��������� �� �����" << std::endl;
        std::cout << "0. �����" << std::endl;
        std::cout << "��� �����: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                int animalType;
                std::cout << "�������� ��� ���������: " << std::endl;
                std::cout << "1. ����" << std::endl;
                std::cout << "2. �����" << std::endl;
                std::cout << "3. �����" << std::endl;
                std::cout << "��� �����: ";
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
                    std::cout << "�������� ����� �� ������, ����������" << std::endl;
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
                std::cout << "������� ��� �����, ���� ����� ��������� ������: ";
                std::cin >> filename;
                keeper.loadInFile(filename);
                break;
            }
            case 6: {
                std::string loadFilename = "";
                std::cout << "������� ��� �����, ������ ����� ��������� ������: ";
                std::cin >> loadFilename;
                keeper = keeper.loadFromFile(loadFilename);
                break;
            }
            case 0:
                return 0;

            default:
                std::cout << "�������� ����� �� ������, ����������" << std::endl;
                system("pause");
        }
    }

    return 0;
}
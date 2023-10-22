#include "Keeper.h"


Keeper::Keeper() {
	first = nullptr;
	last = nullptr;
}
Keeper::~Keeper() {

}


// Удаление элементов по их индексу
void Keeper::remove_id() {
	int index;
	if (is_empty()) {
		std::cout << "Контейнер пуст" << std::endl;
		system("pause");
		return;
	};
	container* buffer = first;
	for (int i = 0; i <= counter; i++) {
		std::cout << i + 1 << ". " << buffer->animal->animal_type << std::endl;
		buffer = buffer->next;
	}
	std::cout << "Введите номер животного в списке, которое хотите удалить: ";
	std::cin >> index;
	if (index == 1) {
		buffer = first;
		first = first->next;
		counter--;
		return;
	}
	if (index == counter) {
		buffer = first;
		while (buffer->next != last) buffer = buffer->next;
		buffer->next = nullptr;
		delete last;
		last = buffer;
		counter--;
		return;
	}
	buffer = first;
	container* buffer_prev = first;
	for (int i = 1; i < index; i++) {
		buffer_prev = buffer;
		buffer = buffer->next;
	}
	buffer_prev->next = buffer->next;
	counter--;
}

// Проверка на наличие элементов 
bool Keeper::is_empty() {
	return first == nullptr;
}
// Добавление объекта в контейнер
void Keeper::push_back(base* animal) {
	container* buffer = new container;
	buffer->animal = animal;
	buffer->next = nullptr;
	if (is_empty()) {
		first = last = buffer;
		return;
	}
	last->next = buffer;
	last = buffer;
	counter++;
}

// Удаление объекта из контейнера
void Keeper::pop_back() {
	if (is_empty()) {
		std::cout << "Контейнер пуст" << std::endl;
		system("pause");
		return;
	}
	if (first == last) {
		first->animal->display();
		first = last = nullptr;
	}
	last->animal->display();
	container* buffer = first;
	while (buffer->next != last) buffer = buffer->next;
	buffer->next = nullptr;
	delete last;
	last = buffer;
	counter--;
	system("pause");
}

// Сохранение данных в файл
void Keeper::loadInFile(const std::string& filename) {
	if (is_empty()) {
		std::cout << "Контейнер пуст" << std::endl;
		system("pause");
		return;
	}
	std::ofstream file(filename);
	if (file.is_open()) {
		container* buffer = first;
		while(buffer->next != nullptr){
			buffer->animal->load_in_file(file);
			buffer = buffer->next;
		}
		buffer->animal->load_in_file(file);
		delete[] buffer;
		first = last = nullptr;
		counter = 0;
		file.close();
	}
	else {
		throw std::runtime_error("Невозможно открыть файл для записи");
		std::cout << std::endl;
		system("pause");
	}
}

// Загрузка данных из файла
Keeper Keeper::loadFromFile(const std::string& filename) {
	Keeper keeper;
	std::ifstream file(filename);
	if (file.is_open()) {
		std::string line;
		while (getline(file, line)) {
			if (line == "Рыба") {
				Fish* fish = new Fish();
				fish->animal_type = line;
				fish->load_from_file(file);
				keeper.push_back(fish);
				counter++;
			}
			else if (line == "Птица") {
				Bird* bird = new Bird();
				bird->animal_type = line;
				bird->load_from_file(file);
				keeper.push_back(bird);
				counter++;
			}
			else if (line == "Кошка") {
				Cat* cat = new Cat();
				cat->animal_type = line;
				cat->load_from_file(file);
				keeper.push_back(cat);
				counter++;
			}
			else {
				std::cerr << "Неизвестный тип: " << line << std::endl;
				system("pause");
			}
		}
		file.close();
		return keeper;
	}
	else {
		throw std::runtime_error("Файл не читается");
		std::cout << std::endl;
		system("pause");
	}
}

// Вывод всех объектов
void Keeper::displayAllAnimals(){
	if (is_empty()) {
		std::cout << "Контейнер пуст" << std::endl;
		return;
	}
	if (first == last) {
		first->animal->display();
	}
	container* buffer = first;
	while (buffer != last) {
		buffer->animal->display();
		std::cout << std::endl;
		buffer = buffer->next;
	}
	buffer->animal->display();
}
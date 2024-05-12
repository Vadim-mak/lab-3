Задание: для всех вариантов задач создать класс с указанными двумя полями
(Поле 1, Поле 2) и тремя методами:

конструктор для инициализации объекта;
функция формирования строки с информацией об объекте;
функция обработки значений полей по индивидуальному варианту.
В основной программе вводить значения полей каждого объекта из компонентов
Edit и выводить результаты в компонент Memo.

#include <iostream>
#include <string>

class BanknoteBatch {
public:
    int denomination; // Номинал купюры
    int quantity;     // Количество купюр

    // Конструктор для инициализации объекта
    BanknoteBatch(int denom, int quant) : denomination(denom), quantity(quant) {}

    // Функция формирования строки с информацией об объекте
    std::string getInfo() const {
        return "Номинал купюры: " + std::to_string(denomination) +
            ", Количество купюр: " + std::to_string(quantity);
    }

    // Функция обработки значений полей
    int calculateTotal() const {
        return denomination * quantity;
    }
};

int main() {
    setlocale(LC_ALL, "ru");
    int denomination, quantity;

    std::cout << "Введите номинал купюры: ";
    std::cin >> denomination;
    std::cout << "Введите количество купюр: ";
    std::cin >> quantity;

    BanknoteBatch batch(denomination, quantity);
    std::cout << batch.getInfo() << std::endl;
    std::cout << "Общая сумма купюр: " << batch.calculateTotal() << std::endl;

    return 0;
}

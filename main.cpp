#include <iostream>
#include <vector>
#include <limits>

// Функция для нахождения минимума в векторе
int findMin(const std::vector<int>& array) {
    // Проверяем, не пуст ли массив
    if (array.empty()) {
        return std::numeric_limits<int>::max(); // Возвращаем максимальное значение int
    }
    
    int min = array[0]; // Предполагаем, что первый элемент - минимальный
    
    // Проходим по всем элементам массива
    for (size_t i = 1; i < array.size(); i++) {
        if (array[i] < min) {
            min = array[i]; // Обновляем минимум, если нашли меньше
        }
    }
    
    return min;
}

int main() {
    std::vector<int> numbers;
    int n;
    
    // Ввод количества элементов
    std::cout << "Введите количество элементов в массиве: ";
    std::cin >> n;
    
    // Проверка корректности ввода
    if (n <= 0) {
        std::cout << "Ошибка! Количество элементов должно быть положительным числом." << std::endl;
        return 1;
    }
    
    // Ввод элементов массива
    std::cout << "Введите " << n << " элементов:" << std::endl;
    for (int i = 0; i < n; i++) {
        int element;
        std::cout << "Элемент " << (i + 1) << ": ";
        std::cin >> element;
        numbers.push_back(element);
    }
    
    // Используем наш метод для нахождения минимума
    int minimum = findMin(numbers);
    
    // Вывод результатов
    std::cout << "\n=== РЕЗУЛЬТАТЫ ===" << std::endl;
    std::cout << "Введенный массив: ";
    for (size_t i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i];
        if (i < numbers.size() - 1) {
            std::cout << ", ";
        }
    }
    
    std::cout << "\nМинимальный элемент: " << minimum << std::endl;
    
    // Дополнительная информация
    if (minimum == std::numeric_limits<int>::max()) {
        std::cout << "Примечание: массив был пуст." << std::endl;
    }
    
    std::cout << "==================" << std::endl;
    
    return 0;
}

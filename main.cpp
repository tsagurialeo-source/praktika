#include <iostream>
#include <vector>
#include <limits>

// Функция для нахождения максимума в векторе
int findMax(const std::vector<int>& array) {
    // Проверяем, не пуст ли массив
    if (array.empty()) {
        return std::numeric_limits<int>::min(); // Возвращаем минимальное значение int
    }
    
    int max = array[0]; // Предполагаем, что первый элемент - максимальный
    
    // Проходим по всем элементам массива
    for (size_t i = 1; i < array.size(); i++) {
        if (array[i] > max) {
            max = array[i]; // Обновляем максимум, если нашли больше
        }
    }
    
    return max;
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
    
    // Используем ранее написанный метод для нахождения максимума
    int maximum = findMax(numbers);
    
    // Вывод результатов
    std::cout << "\n=== РЕЗУЛЬТАТЫ ===" << std::endl;
    std::cout << "Введенный массив: ";
    for (size_t i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i];
        if (i < numbers.size() - 1) {
            std::cout << ", ";
        }
    }
    
    std::cout << "\nМаксимальный элемент: " << maximum << std::endl;
    
    // Дополнительная информация
    if (maximum == std::numeric_limits<int>::min()) {
        std::cout << "Примечание: массив был пуст." << std::endl;
    }
    
    std::cout << "==================" << std::endl;
    
    return 0;
}

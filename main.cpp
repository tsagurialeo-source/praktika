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
    // Пример использования функции
    std::vector<int> numbers = {3, 7, 2, 9, 1, 5};
    
    std::cout << "Массив: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    int maximum = findMax(numbers);
    std::cout << "Максимальный элемент: " << maximum << std::endl;
    
    return 0;
}

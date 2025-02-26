#include <iostream>

// Функция для умножения вектора на матрицу
void multiplyVectorByMatrix(float matrix[4][4], float vector[4], float result[4]) {
    // Обнуляем результирующий вектор
    for (int i = 0; i < 4; i++) {
        result[i] = 0.0f;
    }

    // Умножение вектора на матрицу
    for (int i = 0; i < 4; i++) { // Для каждой строки матрицы
        float accumulator = 0.0f; // Аккумулятор для суммирования произведений
        for (int j = 0; j < 4; j++) { // Для каждой компоненты вектора
            // Суммируем произведения элементов вектора на соответствующие элементы строки матрицы
            accumulator += vector[j] * matrix[j][i];
        }
        result[i] = accumulator; // Записываем результат в соответствующую компоненту результирующего вектора
    }
}

int main() {
    // Ввод матрицы и вектора
    float matrix[4][4];
    float vector[4];

    std::cout << "Enter matrix elements (4x4):\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << "Element [" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }

    std::cout << "Enter vector components (4 elements):\n";
    for (int i = 0; i < 4; i++) {
        std::cout << "Component " << i << ": ";
        std::cin >> vector[i];
    }

    // Вычисление результирующего вектора
    float result[4];
    multiplyVectorByMatrix(matrix, vector, result);

    // Вывод результирующего вектора
    std::cout << "Resulting vector:\n";
    for (int i = 0; i < 4; i++) {
        std::cout << "Component " << i << ": " << result[i] << std::endl;
    }

    return 0;
}
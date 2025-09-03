#include "geometric_figures.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "=== ДЕМОНСТРАЦИЯ ГЕОМЕТРИЧЕСКИХ ФИГУР ===\n\n";

    // Создаем различные фигуры
    Circle circle(1.0, 2.0, 5.0);
    Triangle triangle(3.0, 4.0, 3.0, 4.0, 5.0);
    Rectangle rectangle(5.0, 6.0, 4.0, 6.0);
    Square square(7.0, 8.0, 5.0);

    // Выводим информацию и рисуем каждую фигуру
    cout << "--- Круг ---\n";
    circle.draw();
    circle.print();
    cout << endl;

    cout << "--- Треугольник ---\n";
    triangle.draw();
    triangle.print();
    cout << endl;

    cout << "--- Прямоугольник ---\n";
    rectangle.draw();
    rectangle.print();
    cout << endl;

    cout << "--- Квадрат ---\n";
    square.draw();
    square.print();
    cout << endl;
}

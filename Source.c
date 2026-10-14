#include <stdio.h>
#include <locale.h>

int main(void) {
    double x, y;
    setlocale(LC_CTYPE, "RUS");
    printf("Введите координаты точки (x, y): ");
    if (scanf("%lf %lf", &x, &y) != 2) {
        printf("Ошибка ввода данных.\n");
        return 1;
    }

    /* Проверка принадлежности области */
    if (x >= 0.0 && y >= 0.0 && (5.0 * x + 7.0 * y <= 35.0) && (3.0 * x + 2.0 * y >= 6.0)) {
        printf("Точка (%.2f, %.2f) принадлежит заштрихованной области.\n", x, y);
    }
    else {
        printf("Точка (%.2f, %.2f) НЕ принадлежит заштрихованной области.\n", x, y);
    }

    return 0;
}

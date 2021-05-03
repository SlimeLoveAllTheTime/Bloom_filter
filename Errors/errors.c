#include <stdio.h>
#include "errors.h"
#include <windows.h>

void errors(int err) {
    SetConsoleOutputCP(CP_UTF8);
    if (err == 1) {
        printf("\nОшибка № %d: Файл не существует\n", err);
        exit(err);
    }
    if (err == 2) {
        printf("\nОшибка № %d: Файл неправильно задан\n", err);
        exit(err);
    }
    if (err == 3) {
        printf("\nОшибка № %d: Неправильно задана длина битового поля или количество элементов\n", err);
        exit(err);
    }
    if (err == 4) {
        printf("\nОшибка № %d: Битовое поле слишком мало для такого количества элементов\n", err);
        exit(err);
    }
    if (err == 5) {
        printf("\nОшибка № %d: Некорректный входной элемент, длина больше одного\n", err);
        exit(err);
    }
    if (err == 6) {
        printf("\nОшибка № %d: Некорректный ключ командной строки\n", err);
        exit(err);
    }
    if (err == 7) {
        printf("\nОшибка № %d: Больше нельзя добавить элемент\n", err);
        exit(err);
    }
    if (err == 8) {
        printf("\nОшибка № %d: Не задан элемент для добавления или проверки\n", err);
        exit(err);
    }
}

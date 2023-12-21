#include <locale.h>
#include <wchar.h>
#include <stdio.h>
int main() {
    setlocale(LC_ALL, "");
    wchar_t array[2][3] = {
        L"#&'",
        L"\u2592\u2592",
    };
    for (size_t i = 0; i < sizeof(array)/sizeof(*array); ++i) {
        for (size_t j = 0; j < sizeof(*array)/sizeof(**array); ++j) {
            printf("Array[%zu][%zu]: %lc\n", i, j, array[i][j]);
        }
    }
}

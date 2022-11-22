#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    if (argc != 3)
        return -2;

    // atoi - конвертирует строку в величину типа int
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);

    // FILE - тип данных, определ€ющий файл и информацию по управлению над ним
    FILE* f;
    // freopen - фунцки€ файлового обмена: мы измен€ем директорию стандартного вывода с stdout на out.txt
    f = freopen("out.txt", "w", stdout);

    printf("%d", x + y);
    fclose(f);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    if (argc != 3)
        return -2;

    // atoi - ������������ ������ � �������� ���� int
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);

    // FILE - ��� ������, ������������ ���� � ���������� �� ���������� ��� ���
    FILE* f;
    // freopen - ������� ��������� ������: �� �������� ���������� ������������ ������ � stdout �� out.txt
    f = freopen("out.txt", "w", stdout);

    printf("%d", x + y);
    fclose(f);
}
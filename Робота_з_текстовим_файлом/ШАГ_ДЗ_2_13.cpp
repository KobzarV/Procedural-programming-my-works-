#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    /*1) ��� ��������� ����. ���������� ������� ����� ����, � ������� ����������
�� ��������� ����� ��� �����, ��������� �� ����� ��� �� ���� (7) ����.*/

    /*cout << "Task #1" << endl;
    FILE* pfile_1, * pfile_2;
    char word[40];

    int file_1 = fopen_s(&pfile_1, "file_13_1.txt", "r");
    if (file_1 != NULL)
    {
        cout << "File 1 isn't open!\n" << endl;
        exit(EXIT_FAILURE);
    }

    int file_2 = fopen_s(&pfile_2, "file_13_task_1.txt", "w");
    if (file_2 != NULL)
    {
        cout << "File 2 isn't open!\n" << endl;
        exit(EXIT_FAILURE);
    }

    while (!feof(pfile_1))    // ���� ��������������� �������� ����� � �����, �� ����� ���������� � 2 ����
    {                                     // ��� �������� ������������ ����� �� ��������� ���
        fscanf(pfile_1, "%s", word);
        int size = strlen(word);
        for (int i = 0; i < size; i++)
        {
            if (word[i] >= 33 && word[i] <=64)   // �� ����� �� ���� ����� (+,.;? � �.�.) ��� ���� ���������� �� '\0'
            {
                word[i] = '\0';
                size--;                     // ������� �� ������ ����� ������� ���������� �������, �� ���� �����
            }
        }
        if (size >= 7)
        {
            fprintf(pfile_2, "%s\n", word);
            //printf("%s\n", word);   // ����� ������� �� ������� �����, �� ���������� � ������ ����
        }
    }
    fclose(pfile_1);
    fclose(pfile_2);*/


    /*2) ��� ��������� ����. ���������� ���������� ��� ������ � ������ ����.
������� ����� �� ������ ����� ������ ��������� � �������� ����� � �������� �����.*/

    /*cout << "Task #2" << endl;
    FILE* pfile_1, * pfile_2;
    char str [50];

    int file_1 = fopen_s(&pfile_1, "file_13_1.txt", "r");
    if (file_1 != NULL)
    {
        cout << "File 1 isn't open!\n" << endl;
        exit(EXIT_FAILURE);
    }

    int file_2 = fopen_s(&pfile_2, "file_13_task_2.txt", "w");
    if (file_2 != NULL)
    {
        cout << "File 2 isn't open!\n" << endl;
        exit(EXIT_FAILURE);
    }

    while (!feof(pfile_1))
    {
        fgets(str, 50, pfile_1);
        fprintf(pfile_2, str);
    }
    fclose(pfile_1);
    fclose(pfile_2);*/
    

    /*�������������� �������:
��� ��������� ����. ���������� ���������� ��� ������ � ������ ����.
������� ����� �� ������ ����� ������ ���� �������� �� ��������� � ������� ����� � �������� �����.*/

    /*cout << "Task #3" << endl;
    FILE* pfile_1, * pfile_2;
    char str[100];

    int file_1 = fopen_s(&pfile_1, "file_13_1.txt", "r");
    if (file_1 != NULL)
    {
        cout << "File 1 isn't open!\n" << endl;
        exit(EXIT_FAILURE);
    }

    int file_2 = fopen_s(&pfile_2, "file_13_task_3.txt", "w");
    if (file_2 != NULL)
    {
        cout << "File 2 isn't open!\n" << endl;
        exit(EXIT_FAILURE);
    }

    int count = 0;
    while (!feof(pfile_1))
    {
        fgets(str, 100, pfile_1);
        count++;                          // ��������� ������� �����
    }
    char** strs = new char *[count];     // ����� ���������� ������
    for (int i = 0; i < count; i++)
    {
        strs[i] = new char[100];
    }
    rewind(pfile_1);    // ��������� ������ � ���� �� �������
    for (int i = 0; i < count; i++)
    {
        fgets(strs[i], 100, pfile_1);    // ����� ����������� �� ������
    }
    for (int i = count - 1; i >= 0; i--)
        fprintf(pfile_2,"%s\n", strs[i]);  // � ���� ������ ������������ ������ ���� �������� �� ����� �����
    for (int i = 0; i < count; i++)        // � ���� � ���� ������� �� ������ � ������ ������ ���� 
    {
        delete[]strs[i];
    }
    delete[]strs;
    fclose(pfile_1);
    fclose(pfile_2);*/
}
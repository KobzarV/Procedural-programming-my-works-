#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    /*1) Дан текстовый файл. Необходимо создать новый файл, в который переписать
из исходного файла все слова, состоящие не менее чем из семи (7) букв.*/

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

    while (!feof(pfile_1))    // якщо використовувати українські літери в тексті, то розмір збільшується в 2 рази
    {                                     // для зручності використовую текст на англійській мові
        fscanf(pfile_1, "%s", word);
        int size = strlen(word);
        for (int i = 0; i < size; i++)
        {
            if (word[i] >= 33 && word[i] <=64)   // всі цифри та інші знаки (+,.;? і т.п.) крім букв замінюються на '\0'
            {
                word[i] = '\0';
                size--;                     // віднімаємо від розміру слова кількість непотрібних символів, які були поряд
            }
        }
        if (size >= 7)
        {
            fprintf(pfile_2, "%s\n", word);
            //printf("%s\n", word);   // можна вивести на консоль слова, які запишуться у другий файл
        }
    }
    fclose(pfile_1);
    fclose(pfile_2);*/


    /*2) Дан текстовый файл. Необходимо переписать его строки в другой файл.
Порядок строк во втором файле должен совпадать с порядком строк в заданном файле.*/

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
    

    /*Дополнительное задание:
Дан текстовый файл. Необходимо переписать его строки в другой файл.
Порядок строк во втором файле должен быть обратным по отношению к порядку строк в заданном файле.*/

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
        count++;                          // підраховую кількість рядків
    }
    char** strs = new char *[count];     // масив чаровських масивів
    for (int i = 0; i < count; i++)
    {
        strs[i] = new char[100];
    }
    rewind(pfile_1);    // повертаємо курсор у файлі на початок
    for (int i = 0; i < count; i++)
    {
        fgets(strs[i], 100, pfile_1);    // радки записуються до масиву
    }
    for (int i = count - 1; i >= 0; i--)
        fprintf(pfile_2,"%s\n", strs[i]);  // у файлі чомусь пропускається перший знак переходу на новий рядок
    for (int i = 0; i < count; i++)        // і тому у файлі відступу між першим і другим рядком нема 
    {
        delete[]strs[i];
    }
    delete[]strs;
    fclose(pfile_1);
    fclose(pfile_2);*/
}
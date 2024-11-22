#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data {
    char name[20];
    int mark;
};

int n = 0;
struct data* data;


void menu(int a);
void input_data(void);
void sort_data(void);
void output_data(void);
void binary_search(void);


void menu(int a)
{
    if (a == 1)
    {
        input_data();
        return;
    }
    else if (a == 2)
    {
        sort_data();
        return;
    }
    else if (a == 3)
    {
        output_data();
        return;
    }
    else if (a == 4)
    {
        binary_search();
        return;
    }
    else
    {
        return;
    }
}

void sort_data(void)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (data[j].mark < data[j + 1].mark)
            {
                struct data temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
            else if (data[j].mark == data[j + 1].mark)
            {
                if (strcmp(data[j].name, data[j + 1].name) > 0)
                {
                    struct data temp = data[j];
                    data[j] = data[j + 1];
                    data[j + 1] = temp;
                }
            }
        }
    }
    }

void output_data(void)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s %d\n", data[i].name, data[i].mark);
    }
}

void input_data(void)
{
    scanf("%d", &n);

    data = (struct data*)malloc(n * sizeof(struct data));

    for (int i = 0; i < n; i++)
    {
        scanf("%s %d", data[i].name, &data[i].mark);
    }
}

void binary_search(void)
{
    int index;
    scanf("%d", &index);
    sort_data();
    int left = 0, right = n - 1;
    while (left < right)
    {
        int mid = (left + right) / 2;
        if (data[mid].mark < index)
        {
            right = mid - 1;
            continue;
        }
        else if (data[mid].mark > index)
        {
            left = mid + 1;
            continue;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (data[i].mark == index)
                {
                    printf("%s %d\n", data[i].name, data[i].mark);
                }
            }
            return;
        }
    }
    printf("not found");
    return;
}

int main()
{
    int num = 1;

    while (num != 0)
    {
        scanf("%d", &num);
        menu(num);
    }

    free(data);
    return 0;
}






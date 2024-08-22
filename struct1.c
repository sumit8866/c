#include <stdio.h>
struct Student
{
    int rollno;
    char name[100];
    int mark[3];
    int sum, p;
};

int main()
{
    struct Student s1[3];

    for (int i = 0; i < 3; i++)
    {
        s1[i].sum = 0;
        printf("enter name:");
        scanf("%s", &s1[i].name);
        printf("enter roll no:");
        scanf("%d", &s1[i].rollno);

        for (int j = 0; j < 3; j++)
        {
            printf("enter mark:\n", j);
            scanf("%d", &s1[i].mark[j]);
        }
        for (int j = 0; j < 3; j++)
        {
            s1[i].sum += s1[i].mark[j];
        }

        printf("total mark:%d \n", s1[i].sum);
        s1[i].p = s1[i].sum / 3;
        printf("per:%d \n", s1[i].p);
    }

    return 0;
}

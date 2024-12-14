#include <stdio.h>

struct student
{
    int roll_no;
    char name[20];
    int sci_mark;
    int maths_mark;
    int eng_mark;
};
void main()
{
    int n;
    printf("enter student number:-");
    scanf("%d", &n);
    printf("\n\n");

    struct student s[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter details of Student %d:\n", i + 1);

        printf("enter your name:-");
        scanf("%s", &s[i].name);

        printf("enter your roll no:-");
        scanf("%d", &s[i].roll_no);

        printf("enter your science marks:-:-");
        scanf("%d", &s[i].sci_mark);

        printf("enter your mathamatics marks:-:-");
        scanf("%d", &s[i].maths_mark);

        printf("enter your english marks:-:-");
        scanf("%d", &s[i].eng_mark);
        printf("\n\n");
    }

    for (int i = 0; i < n; i++)
    {
        int total = s[i].sci_mark + s[i].maths_mark + s[i].eng_mark;
        float percentage = (float)total / 3;

       
        printf("\nStudent Data %d:\n\n", i + 1);
        printf("Name :- %s\n", s[i].name);
        printf("Roll no :- %d\n", s[i].roll_no);
        printf("science marks :- %d\n", s[i].sci_mark);
        printf("Mathamatics marks :- %d\n", s[i].maths_mark);
        printf("english marks :- %d\n", s[i].eng_mark);
        printf("Total marks :- %d\n", total);
        printf("Percentahe :- %.2f\n", percentage);
    }
}
/* main.cpp ---> transfer it to obj.C*/
#include <stdio.h>
#include <conio.h>
#include "students.h"
int main()
{
    //Student
    Students student;

    char name[100];
    char last_name[100];
    char group[100];
    
    printf("Name: ");
    scanf("%s", &name);
    printf("Last name: ");
    scanf("%s",&last_name);
    printf("Group: ");
    scanf("%s",&group);
    

    student.set_name(name);
    student.set_last_name(last_name);
    student.set_group(group);

    int scores[5];
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        printf("Score %d: ", i+1);
        scanf("%d", &scores[i]);
        sum += scores[i];
    }
    student.set_scores(scores);
    float average_ball = sum / 5.0;
    student.set_average_ball(average_ball);
    //Student object created ^
    printf("Average score for %s",student.get_name());
    printf(" %s group ",student.get_last_name()); 
    printf("%s ", student.get_group());
    printf("is %.2f",student.get_average_ball());
    return 0;
}
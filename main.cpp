/* main.cpp ---> transfer it to obj.C*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "students.h"

int main()
{    
    printf("[+] Amount of students: ");
    int amount_students;
    scanf("%d", &amount_students);
    int save;
    char *student_base_names[100];
    int *student_base_ses[100][5];
    char temp[100][100];
    /*
    int ses_base[1000][1000];
    */
    for(int cycle = 0; cycle < amount_students; cycle++){
        printf("[+] Student %d\n", cycle+1);
    //Student
        Students student;
        //int temp_scores_names[5];
        char name[15];
        char last_name[15];
        char group[15];
        
        printf("[+] Name: ");
        scanf("%s", &name);
        scanf("%s",&last_name);
        printf("[+] Group: ");
        scanf("%s",&group);
        
        student.set_name(name);
        student.set_last_name(last_name);
        student.set_group(group);

        int ses[5];
        int sum = 0;
        for (int i = 0; i < 5; ++i) {
            printf("[+] Score %d: ", i+1);
            scanf("%d", &ses[i]);
            sum += ses[i];
        }
        student.set_ses(ses);
        float average_ball = sum / 5.0;
        student.set_average_ball(average_ball);
        //Student object created ^
        printf("%s\n", student.get_name());
        printf("%s\n", student.get_last_name());
        printf("%s\n", student.get_group());
        printf("%d\n", strlen(student.get_name()));
        for(int i = 0; i < strlen(student.get_name()); i++){
            temp[cycle][i] = student.get_name()[i];
        }
        /* fix idea 
        char sum[1000];
        sum = student.get_name() + student.get_last_name() + student.get_group();
        */
        //student_base_names[cycle] = student.get_all_name();
    }
    for(int i = 0; i < amount_students; i++){
        printf("%s\n", temp[i]);
    }
    /*
    for(int i = 0; i < amount_students; i++){
        for(int j = 0; j < 3; j++){
            printf("%s ", student_base_names[i][j]);
        }
        printf("\n");
        printf("[+]Scores: ");
        for(int j = 0; j < 5; j++){
            printf("%d ", student_base_ses[i][j]);
        }
        printf("\n");
    }
    */
    return 0;
}

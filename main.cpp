/* main.cpp ---> transfer it to obj.C*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "students.h"

int main()
{    
    /*
    printf("[+] Amount of students: ");
    int amount_students = 1;
    scanf("%d", amount_students);
    */
    int const amount_students = 1;
    
    char *student_base_names[amount_students][3];
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
      
        student_base_names[cycle][0] = student.get_name();
        student_base_names[cycle][1] = student.get_last_name();
        student_base_names[cycle][2] = student.get_group();
        
        printf("\n");
    }
    /*
    for(int i = 0; i < amount_students; i++){
        for(int j = 0; j < 3; j++){
            printf("%s ", student_base_names[i][j]);
        }

    }
    */
    return 0;
}

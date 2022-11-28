/* main.cpp ---> transfer it to obj.C*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "students.h"

int main()
{    
    printf("[+] Amount of students: ");
    int amount_students;
    /*
    char student_base_names[1000][1000];
    int ses_base[1000][1000];
    printf("[+] Amount of students: ");
    */
    scanf("%d", &amount_students);
    for(int cycle = 0; cycle < amount_students; cycle++){
    //Student
        Students student;
        char *temp_names_base[100];
        char names_base[100];
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
        /*
        printf("[+] Average score for %s %s group %s is [%.2f]",
        student.get_name(), student.get_last_name(), 
        student.get_group(), student.get_average_ball());
        */
        /*
        temp_names_base[0] = student.get_name();
        temp_names_base[1] = student.get_last_name();
        temp_names_base[3] = student.get_group();
        printf("%s", temp_names_base);
        */
        //names_base[cycle] = temp_names_base;
        
        printf("\n");
    }
    return 0;
}

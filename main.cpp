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
    Students student[10];
    for(int cycle = 0; cycle < amount_students; cycle++){
        printf("[+] Student %d\n", cycle+1);
    //Student
        //int temp_scores_names[5];
        char name[15];
        char last_name[15];
        char group[15];
        
        printf("[+] Name: ");
        scanf("%s", &name);
        scanf("%s",&last_name);
        printf("[+] Group: ");
        scanf("%s",&group);
        
        student[cycle].set_name(name);
        student[cycle].set_last_name(last_name);
        student[cycle].set_group(group);

        int ses[5];
        int sum = 0;
        for (int i = 0; i < 5; ++i) {
            printf("[+] Score %d: ", i+1);
            scanf("%d", &ses[i]);
            sum += ses[i];
        }
        student[cycle].set_ses(ses);
        float average_ball = sum / 5.0;
        student[cycle].set_average_ball(average_ball);
        //Student object created
    }
    /* printf("%s\n", student[cycle].get_name());
        printf("%s\n", student[cycle].get_last_name());
        printf("%s\n", student.get_group());
        printf("%d\n", strlen(student.get_name()));
        for(int i = 0; i < strlen(student.get_name()); i++){
            temp[cycle][i] = student.get_name()[i];
        }*/
    float array_main[10];
    int array_sub[10];
    for(int i = 0; i < amount_students; i++){
        array_main[i] = student[i].get_average_ball();
        array_sub[i] = i;
    }
    for(int i = 0; i < amount_students; i++){
        float temp;
        int index_temp; 
        for(int j = 0; j < amount_students - 1; j++){
            if(array_main[j]  < array_main[j+1]){
                temp = array_main[j];
                array_main[j] = array_main[j+1];
                array_main[j+1] = temp;
                index_temp = array_sub[j];
                array_sub[j] = array_sub[j+1];
                array_sub[j+1] = index_temp;
            }
        }
    }
    printf("\n");
    for(int i = 0; i < 50; i ++){
        printf("/");
    }
    printf("\n");
    printf("[+] Students rating:\n");

    for(int i = 0; i < amount_students; i++){
        printf("    %d. %s %s %s is %.2f\n", i+1, student[array_sub[i]].get_name(), student[array_sub[i]].get_last_name(),
        student[array_sub[i]].get_group(), student[array_sub[i]].get_average_ball());
    }


    float smarts_count = 0;
    float ses_all[10];
    float ses_all_index[10];
    bool run = true;
    printf("\n[+] High graders:\n");
    for(int i = 0; i < amount_students; i ++){
        run = true;
        for(int j = 0; j < 5; j++){
            if(student[array_sub[i]].get_ses()[j] == 2 || student[array_sub[i]].get_ses()[j] == 3){
                run = false;
            }
        }
        if (run){
            printf("    %d. %s %s\n", i+1, student[array_sub[i]].get_last_name(),
        student[array_sub[i]].get_group());
        }
    }
    for(int i = 0; i < 50; i ++){
        printf("/");
    }
    printf("\n");

    
    
    return 0;
}

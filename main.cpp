//main.cpp main program file 
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "students.h"

int main()
{
    printf("[+] Amount of students: ");
    int amount_students;
    scanf("%d", &amount_students);

    Students student[10]; //creating Student obj. in max of 10

    //creating students obj.
    for(int cycle = 0; cycle < amount_students; cycle++){

        printf("[+] Student %d\n", cycle+1);

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

    }

    //sorting students array by average ball
    float array_main[10];
    int array_sub[10];

    //setting 2 synchronised arrays with values and indexes of char names
    for(int i = 0; i < amount_students; i++){ 

        array_main[i] = student[i].get_average_ball();
        array_sub[i] = i;

    }

    //bubble sorting average ball in main array and changing indexes in sub array
    for(int i = 0; i < amount_students; i++){

        float temp;
        int index_temp;
        for(int j = 0; j < amount_students - 1; j++){

            if(array_main[j]  < array_main[j+1]){

                //sorting scores
                temp = array_main[j];
                array_main[j] = array_main[j+1];
                array_main[j+1] = temp;
                //changing indexes
                index_temp = array_sub[j];
                array_sub[j] = array_sub[j+1];
                array_sub[j+1] = index_temp;

            }

        }

    }
    //giving output
    printf("\n");
    for(int i = 0; i < 50; i ++){

        printf("/");

    }

    printf("\n\n");
    printf("[+] Students rating:\n");
    //printing all students by their rating
    for(int i = 0; i < amount_students; i++){

        printf("    %d. %s %s %s [%.2f] (", i+1, student[array_sub[i]].get_name(), student[array_sub[i]].get_last_name(),
        student[array_sub[i]].get_group(), student[array_sub[i]].get_average_ball());

        for(int j = 0; j < 4; j ++){

            printf("%d, ", student[array_sub[i]].get_ses()[j]);

        }

        printf("%d)\n", student[array_sub[i]].get_ses()[4]);

    }

    //printig students with hugh grades only
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

            printf("    %d. %s %s (", i+1, student[array_sub[i]].get_last_name(),
            student[array_sub[i]].get_group());

            for(int k = 0; k < 4; k ++){

                printf("%d, ", student[array_sub[i]].get_ses()[k]);

            }
            printf("%d)\n", student[array_sub[i]].get_ses()[4]);

        }
    }

    printf("\n");
    for(int i = 0; i < 50; i ++){

        printf("/");

    }

    printf("\n");
    return 0;

}

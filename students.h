//Students class header
#include <string.h>

class Students {
    public:
        //setting and giving student name in char array
        void set_name(char student_name[]) 
        {
            for(int i = 0; i <= strlen(student_name); i++){
                name[i] = student_name[i];
            }
        }

        char * get_name()
        {
            return name;
        }
        //setting and giving student last name in char array
        void set_last_name(char student_last_name[]) 
        {
            for(int i = 0; i <= strlen(student_last_name); i++){
                last_name[i] = student_last_name[i];
            }
        }

        char * get_last_name()
        {
            return last_name;
        }

        //setting and giving student group in char array
        void set_group(char group_number[]){ 
            for(int i = 0; i <= strlen(group_number); i++){
                group[i] = group_number[i];
            }
        }

        char *get_group(){
            return group;
        }

        //setting and giving student marks in int array
        void set_ses(int student_ses[]) 
        {
            for (int i = 0; i <= 4; ++i) {
                ses[i] = student_ses[i];
            }
        }

        int *get_ses(){
            return ses;
        }

        //calculating average ball
        void set_average_ball(float ball)
        {
            average_ball = ball;
        }

        float get_average_ball()
        {
            return average_ball;
        }

    private:
        int ses[5];
        float average_ball;
        char name[15];
        char group[15];
        char last_name[15];
};

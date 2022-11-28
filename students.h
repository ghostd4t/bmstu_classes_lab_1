#include <string.h>

class Students {
    public:
        void set_name(char student_name[])
        {
            for(int i = 0; i <= strlen(student_name); i++){
                name[i] = student_name[i];
                all[save] = student_name[i];
                save++;
                
            }
            all[save+1] = ' ';
            save++;
        }
        char * get_name()
        {
            return name;
        }
        void set_last_name(char student_last_name[])
        {
            for(int i = 0; i <= strlen(student_last_name); i++){
                last_name[i] = student_last_name[i];
                all[save] = student_last_name[i];
                save++;
            }
            all[save+1] = ' ';
            save++;
        }
        char * get_last_name()
        {
            return last_name;
        }

        void set_group(char group_number[]){
            for(int i = 0; i <= strlen(group_number); i++){
                group[i] = group_number[i];
                all[save] = group_number[i];
                save++;
            }
            all[save+1] = ' ';
            save++;
        }

        char *get_group(){
            return group;
        }
        void set_ses(int student_ses[])
        {
            for (int i = 0; i <= 4; ++i) {
                ses[i] = student_ses[i];
            }
        }
        void set_average_ball(float ball)
        {
            average_ball = ball;
        }
        int *get_ses(){
            return ses;
        }
        float get_average_ball()
        {
            return average_ball;
        }
        char *get_all_name(){
            return all;
        }
    private:
        int ses[5];
        float average_ball;
        char name[15];
        char group[15];
        char last_name[15];
        int save = 0;
        char all[100];
};

#include <string.h>

class Students {
    public:
        void set_name(char student_name[])
        {
            for(int i = 0; i <= strlen(student_name); i++){
                name[i] = student_name[i];
                
            }
        }
        void * get_name()
        {
            return name;
        }
        void set_last_name(char student_last_name[])
        {
            for(int i = 0; i <= strlen(student_last_name); i++){
                last_name[i] = student_last_name[i];
            }
        }
        void * get_last_name()
        {
            return last_name;
        }

        void set_group(char group_number[]){
            for(int i = 0; i <= strlen(group_number); i++){
                group[i] = group_number[i];
            }
        }

        void *get_group(){
            return group;
        }
        void set_scores(int student_scores[])
        {
            for (int i = 0; i <= 4; ++i) {
                scores[i] = student_scores[i];
            }
        }
        void set_average_ball(float ball)
        {
            average_ball = ball;
        }
        float get_average_ball()
        {
            return average_ball;
        }

    private:
        int scores[5];
        float average_ball;
        char name[15];
        char group[15];
        char last_name[15];
};

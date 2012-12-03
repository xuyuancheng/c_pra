#include <stdio.h>
#include <stdbool.h>
#define MIN_F 0
#define MAX_F 300
#define STEP_F 20

main()
{
    float f_temp = MIN_F;
    float c_temp;
    for( ;f_temp <= MAX_F; f_temp += STEP_F )
    {
        bool b_min = false;
        if(f_temp == MIN_F)
        {
            f_temp ++;
            b_min = true;
        }
        c_temp = (5.0/9)*(f_temp-32);
        printf("%.1f\t%6.1f\n",f_temp,c_temp);
        if( b_min )
            f_temp --;
    }
}

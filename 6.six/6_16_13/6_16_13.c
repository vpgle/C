// 6.16.13
#include <stdio.h>
#include <math.h>
int main(void)
{
    int power[8];
    int loop;
    int jiaobiao = 0;

         for (loop = 0; loop < 8; loop++)
        {
            power[loop] = pow(2,loop);
        }
            do
            {
                printf("power[%d] is %d\n", jiaobiao, power[jiaobiao]);
                jiaobiao = jiaobiao + 1;

            } while ( jiaobiao < 8);



    return 0;

}

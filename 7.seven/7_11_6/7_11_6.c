// # 7.11.6
#include <stdio.h>
int main(void)
{
    int i = 0;
    while (i < 3){
        printf("out_i = %d\n", i);
        switch (printf("pre_i = %d,i++,", i),i++,printf("suf_i = %d\n", i)){
            
            case 0: printf("in_i = %d", i);printf("fat ");
            case 1: printf("in_i = %d", i);printf("hat ");
            case 2: printf("in_i = %d", i);printf("cat ");
            default: printf("Oh no!");
        }
        putchar('\n');
    }
    return 0;
}

// 5.11.8
#include <stdio.h>
int main(void)
{
    int first_operand;
    int second_operand;
    int moduli;

    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &second_operand);
//    printf("%d\n", second_operand);
    printf("Now enter the first operand:");
    scanf("%d", &first_operand);
//    printf("%d\n", first_operand);

    while ( first_operand > 0)
    {
        moduli = first_operand % second_operand ;
        printf("%d %% %d is %d\n", first_operand, second_operand, moduli);
        // 在printf中%符合需要转义才能正常显示
        printf("Enter next number for first operand (<= 0 to quit): ");
        scanf("%d", &first_operand);
    }
    printf("Done\n");

    return 0;
    
}

    // 6.16.16
    #include <stdio.h>
    int main(void)
    {
        int year;
        double Daphne;
        double Deirdre;

        for (year = 1,Deirdre = 100.0, Daphne = 100.0; (Deirdre == Daphne) || (Deirdre < Daphne); year++)
            //  写判断条件时需要慎重考虑下
        {
            Deirdre = Deirdre * (1 + 0.05);
            Daphne = 100.0 + 0.1 * 100.0 * year;
    //    printf("Daphne is %f, Deirdre is %f\n", Daphne, Deirdre);
        }
        
        printf("%d 年后Deirdre的投资额才会超过Daphne，分别是", year);
        printf("Daphne is %f, Deirdre is %f\n", Daphne, Deirdre);

        return 0;

    }

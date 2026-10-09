#include <stdio.h>
// NRNP
void bill()
{

    float qtu, rate;
    float amount, discount, dis_price, gst, total;

    printf("enter tha quanty:>>");
    scanf("%2f", &qtu);

    printf("enter tha rate:>>");
    scanf("%2f", &rate);

    amount = qtu * rate;

    dis_price = amount * 0.9;
    discount = amount - dis_price;

    total = dis_price * 1.18;
    gst = total - dis_price;

    printf("\n 1\t qut\t Rate\t Amount\t discount\t price\t gst\t total\t");
    printf("\n  \t%.2f\t %.2f\t %.2f\t %.2f\t\t %.2f\t %.2f\t %.2f\t", qtu, rate, amount, discount, dis_price, gst, total);
}

int main()
{
    bill();
    return 0;
}

// // NRWP
// int bill(float qtu, float rate)
// {

//     float amount, discount, dis_price, gst, total;

//     amount = qtu * rate;

//     dis_price = amount * 0.9;
//     discount = amount - dis_price;

//     total = dis_price * 1.18;
//     gst = total - dis_price;

//     printf("\n 1\t qut\t Rate\t Amount\t discount\t price\t gst\t total\t");
//     printf("\n  \t%.2f\t %.2f\t %.2f\t %.2f\t\t %.2f\t %.2f\t %.2f\t", qtu, rate, amount, discount, dis_price, gst, total);
// }

// int main()
// {
//     float qtu, rate;

//     printf("enter tha quanty:>>");
//     scanf("%2f", &qtu);

//     printf("enter tha rate:>>");
//     scanf("%2f", &rate);

//     bill(qtu, rate);
//     return 0;
// }

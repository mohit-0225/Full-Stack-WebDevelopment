#include <stdio.h>

int main()
{

    float qtu, rate;
    float amount, discount, dis_price, gst, total;

    printf("enter tha quanty:>>");
    scanf("%f", &qtu);

    printf("enter tha rate:>>");
    scanf("%f", &rate);

    amount = qtu * rate;

    if (amount > 1000)
    {

        dis_price = amount * 0.9;
        discount = amount - dis_price;

        total = dis_price * 1.18;
        gst = total - dis_price;

        printf("\nSr\tQTY\tRate\tAmount\tDiscount\tPrice\tGST\tTotal");
        printf("\n1\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f", qtu, rate, amount, discount, dis_price, gst, total);
    }
    else
    {

        total = amount * 1.18;
        gst = total - amount;

        printf("\n 1\t qut\t Rate\t Amount\t gst\t total\t");
        printf("\n  \t%.2f\t %.2f\t %.2f\t %.2f\t %.2f\t", qtu, rate, amount, gst, total);
    }

    return 0;
}

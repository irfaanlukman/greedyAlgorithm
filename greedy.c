#include <cs50.h>
#include <stdio.h>
#include <math.h>

float change;
int cents;

int main(void)
{
    do
    {
        change = get_float("What is the change?\n");
        cents = round(change * 100);
    }
    while (change < 0.0);

    int coins = 0; // initialize coins starting with 0
    while (cents >= 25)
    {
        coins ++; // increases coin count
        cents = cents - 25; //updates the change amount
    }
    while (cents >= 10)
    {
        coins ++; // increases coin count
        cents = cents - 10; // update the change amount
    }
    while (cents >= 5)
    {
        coins ++; // increases coin count
        cents = cents - 5; // update the change amount
    }
    while (cents >= 1)
    {
        coins ++;
        cents = cents - 1; // update the change amount
    }

    printf("Minimum number of coins required %i\n", coins);
}


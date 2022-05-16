/*
	Name: Harsh Khandeparkar
	Roll: 21EC30023
	Dept: Electronics and Electrical Communication Engineering
	Package: Visual Studio Code, gcc v11.2.0
	Assign: 1(e)
*/

#include <stdio.h>
#include <math.h>

const float natural_price = 1100.0;
const float synthetic_price = 780.0;

const float natural_gst = 0.2;
const float synthetic_gst = 0.15;

int main() {
    char type_of_wood;

    printf("Enter the type of wood (n for natural wood, s for synthetic wood): ");
    scanf("%c", &type_of_wood);

    if (type_of_wood != 'n' && type_of_wood != 's') {
        printf("Invalid wood type.\n");
    }
    else {
        float wood_price, gst_rate, weight;

        if (type_of_wood == 'n') {
            wood_price = natural_price;
            gst_rate = natural_gst;
        }
        else {
            wood_price = synthetic_price;
            gst_rate = synthetic_gst;
        }

        printf("Enter the weight of wood (in Kg.) you want: ");
        scanf("%f", &weight);

        float base_price = wood_price * weight;
        float gst = base_price * gst_rate;
        float total_price = base_price + gst;

        printf("-------------------------\n");
        printf("Base Price  = %.2f\n", base_price);
        printf("GST         = %.2f\n", gst);
        printf("Total Price = %.2f\n", total_price);
        printf("-------------------------\n");
    }

    return 0;
}
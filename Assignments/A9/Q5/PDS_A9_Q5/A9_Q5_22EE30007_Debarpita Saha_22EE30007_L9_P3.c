/*
* Section 14
* Roll No : 22EE30007
* Name : Debarpita Saha
* Assignment No : 9
* Description : Program to compute the date
*/
 #include <stdio.h>


struct Date {

    int dd;

    int mm;

    int yyyy;

};

struct date x,y;


struct Date ReadDate() {

    struct Date date;

    scanf("%d/%d/%d", &date.dd, &date.mm, &date.yyyy);

    return date;

}


void PrintDate(struct Date x) {

    printf("%d/%d/%d\n", x.dd, x.mm, x.yyyy);

}


int daysInMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


int isLeap(int year) {

    if (year % 4 != 0) {

        return 0;

    }

    if (year % 100 != 0) {

        return 1;

    }

    if (year % 400 != 0) {

        return 0;

    }

    return 1;

}


int daysBetween(struct Date x, struct Date y) {

    int days = 0;


   

    for (int i = x.yyyy; i < y.yyyy; i++) {

        days += 365 + isLeap(i);

    }


    // Days in months before y

    for (int i = x.mm; i < y.mm; i++) {

        days += daysInMonth[i];

        if (i == 2 && isLeap(y.yyyy)) {

            days++;

        }

    }


   

    days += y.dd - x.dd;


    return days;

}


void FindDays(struct Date x, struct Date y) {

    int days = daysBetween(x, y);

    printf("Days = %d\n", days);

}


int main() {

    struct Date x = ReadDate();

    struct Date y = ReadDate();


    PrintDate(x);

    PrintDate(y);

    FindDays(x, y);


    return 0;

}




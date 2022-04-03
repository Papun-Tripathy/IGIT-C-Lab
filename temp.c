#include <stdio.h>
#include <stdlib.h>

struct Test
{
    int value;
    int (*fun)();
};

int hello(int k)
{
    printf("Hello world %d ", k);
    return 0;
}

enum Days
{
    monday,
    tuesday = 4,
    wendesday,
    thrusday,
    friday,
    saturday = 4,
    sunday
};
enum month
{
    Jan,
    Feb,
    Mar,
    Apr = 10,
    May,
    Jun,
    Jul,
    Aug,
    Sep = 10,
    Oct,
    Nov,
    Dec
};

void main()
{
    struct Test obj;
    obj.value = 12;
    obj.fun = hello;

    printf("The value is %d\n", obj.value);
    obj.fun(12);

    enum Days today, thisDay;
    today = tuesday;
    thisDay = saturday;

    printf("Today is %d %d \n", today, thisDay);

    enum month i,m;
    for (i = Jan; i <= Dec; i++)
    {
        printf("%d ", i);
    }
}
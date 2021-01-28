#include <stdio.h>
int main()
{
    double minutes =0.0;
    double hours = 0.0;
    double years=0.0;
    double days =0.0;
    printf("Enter a number of minutes:");
    scanf("%lf", &minutes);
    printf( "\nminutes:  %lf",minutes);
    hours = minutes/60.0;
    printf( "\nhours:  %lf",hours);
    days = hours/24.0;
    printf( "\ndays:  %lf ",days);
    years = days/365.0;
    printf( "\nyears:  %lf ",years);
    printf( "\nminutes:  %lf",minutes);
    printf( "\ndays:  %lf ",days);
    printf( "\nyears:  %lf ",years);
    return 0;
}

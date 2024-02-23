#include <stdio.h>
int main()
{
     int hour, minute, second,hour1, minute1, second1,hour2, minute2, second2;
     printf("Enter the time-1 in HH:MM:SS format :");
     scanf("%d : %d : %d", &hour1, &minute1, &second1);
     printf("Enter the time-2 in HH:MM:SS format :");
     scanf("%d : %d : %d", &hour2, &minute2, &second2);
     second = second1 + second2;
     minute = minute1 + minute2 + (second/60);
     hour = hour1 + hour2 + (minute/60);
     minute = minute % 60;
     second = second % 60;
     printf("\n HOUR:MINUTE:SECOND :%d : %d : %d \n", hour, minute, second);
     return 0;
}

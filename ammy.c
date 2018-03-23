#include <stdio.h>
#include <time.h>
void main()
{ 
/*
  time_t timer;
  timer=time(NULL);
  printf("The current time is %s.\n",asctime(localtime(&timer)));*/
  
  int hours, minutes; char Name[30], answer;

  time_t timer; 
  struct tm *time_now;
  char *the_time;
  
  timer = time(NULL); //can send null pointer 
  time_now = localtime(&timer); //takes timer and makes in current time zone
  the_time = asctime(time_now); //puts time in text form
  printf("System Date and Time: %s \n",the_time);
  printf("Date %2d/%2d/%4d. Time is %2d:%2d\n",
       time_now->tm_mday, time_now->tm_mon, time_now->tm_year + 1900, 
       time_now->tm_hour, time_now->tm_min);
}
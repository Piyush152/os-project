#include<stdio.h>
#include<sys/type.h>
int main()
{
  int count,j,n;
  int time,remaining;
  int flag=0,time_quantum=10;
  int waiting_time=0,turn_around_time=0,arrival_time[10],burst_time[10],rt[10];
  printf("\n\nEnter the Total number of Process:\t ");
  scanf("%d",&n);
  remaining=n;
  for(count=0;count<n;count++)
  {
    printf("Enter Arrival Time and Burst Time for Process Process Number %d :",count+1);
    scanf("%d",&arrival_time[count]);
    scanf("%d",&burst_time[count]);
    rt[count]=burst_time[count];
    
  return 0;
}


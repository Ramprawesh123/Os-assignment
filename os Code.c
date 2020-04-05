//including the essential headers

#include<stdio.h>  

//defining the main function

void main()



{

//declaring array 

  int burst_time[30],process[30],wait_time[30],ta_time[30];

  //declaring the essential variables needed for the program

  int k,j,n,tl=0,psn,t;

  float avg_wtime,avg_tatime;

  //prompt user to enter the number of process



  printf("Please enter the number of process:");



  scanf("%d",&n);  

//prompt user to enter the estimated time

  printf("\nPlease enter the Estimated Time:\n");

//for loop begins 

//to iterate the value of k from 0 to n-1

  for(k=0;k<n;k++)

  {

    printf("p%d:",k+1);

    scanf("%d",&burst_time[k]);

    process[k]=k+1;      



  }  

  for(k=0;k<n;k++)



  {



    psn=k;



    for(j=k+1;j<n;j++)



    {



      if(burst_time[j]<burst_time[psn])



        psn=j;



    }  



    t=burst_time[k];



    burst_time[k]=burst_time[psn];



    burst_time[psn]=t;  



    t=process[k];



    process[k]=process[psn];



    process[psn]=t;



  }  

//wait time for the first process has to be zero 

  wait_time[0]=0;  



  //calculation of waiting time



  for(k=1;k<n;k++)



  {



    wait_time[k]=0;



    for(j=0;j<k;j++)



      wait_time[k]+=burst_time[j];  



    tl+=wait_time[k];



  }  

  

  // calculation of the Average waiting time

  avg_wtime=(float)tl/n; 

  tl=0;  



  printf("\nProcess\t Estimated Time \tWaiting Time\tTurnaround Time");



  for(k=0;k<n;k++)



  {

    //Calculation of the turnaround time



    ta_time[k]=burst_time[k]+wait_time[k];  



    tl+=ta_time[k];



    printf("\np%d\t\t %d\t\t  %d\t\t\t%d",process[k],burst_time[k],wait_time[k],ta_time[k]);



  }  

//Calculation of the Average turnaround time

  avg_tatime=(float)tl/n; 



  printf("\n\nAverage Waiting Time=%f",avg_wtime);



  printf("\nAverage Turnaround Time=%f\n",avg_tatime);



}



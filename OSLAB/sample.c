/* Name Of the Candidate: G.AJAY KISHORE
   Roll No: 204G1A0506
   Title of the Experiment: CPU Scheduling Using FCFS Algorithm
   Date of Creation: 30-08-2022
   Date of Execution: 30-08-2022
*/
//SOURCE CODE
    #include<stdio.h>    
    int main()    
    {    
     int n1=0,n2=1,n3,i,number;    
     printf("Enter the number of elements:");    
     scanf("%d",&number);    
     printf("\n%d %d",n1,n2);//printing 0 and 1    
     for(i=2;i<number;++i)//loop starts from 2 because 0 and 1 are already printed    
     {    
      n3=n1+n2;    
      printf(" %d",n3);    
      n1=n2;    
      n2=n3;    
     }  
      return 0;  
     }    

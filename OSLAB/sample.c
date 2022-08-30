/* Name Of the Candidate: G.AJAY KISHORE
   Roll No: 204G1A0506
   Title of the Experiment: CPU Scheduling Using FCFS Algorithm
   Date of Creation: 30-08-2022
   Date of Execution: 30-08-2022
*/
//SOURCE CODE
   

#include<stdio.h>

void findWaitingTime(int processes[], int n,
						int bt[], int wt[])
{
	// waiting time for first process is 0
	wt[0] = 0;

	// calculating waiting time
	for (int i = 1; i < n ; i++ )
		wt[i] = bt[i-1] + wt[i-1] ;
}


void findTurnAroundTime( int processes[], int n,
				int bt[], int wt[], int tat[])
{
	
	// bt[i] + wt[i]
	for (int i = 0; i < n ; i++)
		tat[i] = bt[i] + wt[i];
}


void findavgTime( int processes[], int n, int bt[])
{
	int wt[n], tat[n], total_wt = 0, total_tat = 0;

	
	findWaitingTime(processes, n, bt, wt);

	
	findTurnAroundTime(processes, n, bt, wt, tat);

	
	printf("Processes Burst time Waiting time Turn around time\n");

	
	for (int i=0; i<n; i++)
	{
		total_wt = total_wt + wt[i];
		total_tat = total_tat + tat[i];
		printf(" %d ",(i+1));
		printf("	 %d ", bt[i] );
		printf("	 %d",wt[i] );
		printf("	 %d\n",tat[i] );
	}
	int s=(float)total_wt / (float)n;
	int t=(float)total_tat / (float)n;
	printf("Average waiting time = %d",s);
	printf("\n");
	printf("Average turn around time = %d ",t);
}


int main()
{
	
	int processes[] = { 1, 2, 3};
	int n = sizeof processes / sizeof processes[0];

	
	int burst_time[] = {10, 5, 8};

	findavgTime(processes, n, burst_time);
	return 0;
}


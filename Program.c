#include<stdio.h>

struct job{
	char processName[20];
	int processId;
	int arrivalTime;
	int burstTime;	
};
        int complete;
	int turnAroundTime;
	int waitingTime;

student[100], faculty[100];

void enqueue(int a[], int rear);
void dequeue(int a[], int front);

void getStats(int findex, int sindex);

void Scheduler();

int timeQuanta= 2;

void Scheduler(){
	int fpointer=0, spointer=0;
	int time= 120, i;
	for(i=0; i<=time; i++){
		if(student[spointer].arrivalTime == i || faculty[fpointer] == i){
			if(faculty[fpointer]== i){

			}
			else{

			}
		}	
		else{
			continue;
		}	
	}
}

int  main()
{
	int total_query, map;
	struct job student[80], faculty[80];
	int total_query,map,i;
	int facultycount=0, studentcount=0;
	printf("Welcome, Mr. Girish\n");
	printf("Please Enter total number of process to handle: ");
	printf("\n\n\n please enter total number of process to handle");
	scanf("%d", &total_query);
	for(int i=0; i<total_query; i++){
		printf("Query (1 for faculty $$$$ 2 for Student): ");
		for(i=0; i<total_query; i++){
		printf("\nQuery Type (1 for faculty $$$$ 2 for Student): ");
		
		scanf("%d", &map);
		if(map==1){
			printf("Faculty's query\n");
			printf("QueryId: "); scanf("%d", &faculty[facultyCount].processId);
			printf("Arrival Time (mins from 10:00 am): "); scanf("%d", &faculty[facultyCount].arrivalTime);
			printf("Query Resolving duration (mins): "); scanf("%d", &faculty[facultyJobCount].burstTime);
			faculty[facultyJobCount].complete= 0;
			facultyCount++;

		} 
		else{
			printf("\nStudent's query\n");
			printf("QueryId: "); scanf("%d", &student[studentCount].processId);
			printf("Arrival Time (mins from 10:00 am) : "); scanf("%d", &student[studentCount].arrivalTime);
			printf("Query Resolving Time (mins): "); scanf("%d", &student[studentCount].burstTime);
			student[studentCount].complete = 0;
			studentCount++;

		}
	}
} 
		getStats(facultyCount, studentCount);
}

void getStats(int findex, int sindex){
	int i;
	printf("\nDeatails of all jobs completed:");
	printf("\nFaculty's QueriesDetails\n");
	printf("\nQuery Id \t Arrival Time \t Resolving Time\n");
	for (i = 0; i < findex; i++) {
		printf("%d \t\t %d \t\t %d\n", faculty[i].processId, faculty[i].arrivalTime, faculty[i].burstTime );
	}
}


#include<stdio.h>

static struct job{
	int processId;
	int arrivalTime;
	int burstTime;
        int bD
	int turnAroundTime;
	int etime;
}
student[80],faculty[80],ready[100];

int facultyCount=0;
int studentCount=0;
int rpointer=0;
int time=0;

void users(){
	int i;
	int jobS=0;
	int jobE=0;
	int tracker=0;
	printf("\nUsers");
	while(time<120){
		printf("\users to the  time : %d", time);
		if(ready[tracker].arrivalTime == time){
			jobE++;
		}
		for(i= jobS ; i<= jobE; i++){
			if(ready[i].bbD>2){
			ready[i].bbD -= 2;
			time += 2;
			} else {
				time += ready[i].bD;
				ready[i].bD = 0;
				ready[i].endTime = time;
				jobS++;
			}	
		}
	}
}


void readyGen(){
	int i;
	int s=0, f=0;
	int r=0;
	for(i=0; i<=120; i++){
		if(i== student[s].arrivalTime && i == faculty[f].arrivalTime){
			ready[r] = faculty[f]; r++; f++;
			while(i== faculty[f].arrivalTime){
				ready[r]= faculty[f]; r++; f++;

			}
			else{
				ready[r]= student[s]; r++; s++;	
			while(i== student[s].arrivalTime){
				ready[r]= student[s]; r++; s++; 

			}
		}	
			else if(i == student[s].arrivalTime){
			ready[r] = student[s];
			r++;
			s++; 
			while(i== student[s].arrivalTime){
				ready[r]= student[s];
				r++; s++;
			}
}
		else if(i == faculty[f].arrivalTime){
			ready[r]= faculty[f];
			r++;
			f++; 
			while(i == faculty[f].arrivalTime){
				ready[r]= faculty[f];
				r++; f++;
			}
		}
		else continue; 
	} 
	rpointer= r;
	}
	void printer(){
	int i=0, j=0;
	printf("\nPrinter\n");
	printf("Faculty Jobs: \n");
	for(i=0; i<facultyCount; i++){
		printf("Id: %d, Arrival time: %d, Bursttime: %d\n", faculty[i].processId, faculty[i].arrivalTime, faculty[i].burstTime);
	}
	printf("Student Jobs: \n");
	for(i=0; i<studentCount; i++){
		printf("Id: %d, Arrival time: %d, Burst time: %d\n", student[i].processId, student[i].arrivalTime, student[i].burstTime);
	}
	printf("\nReady Jobs: \n");
	for(i=0; i<rpointer; i++){
		printf("Id: %d, Arrival time: %d, Burst time: %d\n", ready[i].processId, ready[i].arrivalTime, ready[i].burstTime);
				}
	   }
	void summary(int findex, int sindex);

	
	int  main()
{
	int total_query,map,i;
	printf("Welcome\n");
	printf("\n\n\n please enter total number of process to handle");
	scanf("%d", &total_query);
		for(i=0; i<total_query; i++){
		printf("\nQuery Type (1 for faculty $$$$ 2 for Student): ");
		
		scanf("%d", &map);
		if(map==1){
			printf("Faculty's query\n");
			printf("QueryId: "); scanf("%d", &faculty[facultyCount].processId);
			printf("Arrival Time (mins from 10:00 am): "); scanf("%d", &faculty[facultyCount].arrivalTime);
			printf("Query Resolving duration (mins): "); scanf("%d", &faculty[facultyJobCount].burstTime);
			
			facultyCount++;

		} 
		else{
			printf("\nStudent's query\n");
			printf("QueryId: "); scanf("%d", &student[studentCount].processId);
			printf("Arrival Time (mins from 10:00 am) : "); scanf("%d", &student[studentCount].arrivalTime);
			printf("Query Resolving Time (mins): "); scanf("%d", &student[studentCount].burstTime);
			
			studentCount++;

		}
	}
	readyGen();
	users();
	}

void summary(int findex, int sindex)
{
	int i;
	printf("\n\nSummary");
	printf("\nFaculty's QueriesDetails\n");
	printf("\nQuery Id \t Arrival Time \t Resolving Time\n");
	for (i = 0; i < findex; i++) {
		printf("%d \t\t %d \t\t %d\n", faculty[i].processId, faculty[i].arrivalTime, faculty[i].burstTime );
	}
}


#include<stdio.h>
#include<iostream>
using namespace std;
struct job{
	int prid;
	int art;
	int but;
	int tat;
	int cmpt;
	int wat;
	int rbt;
}f[100], s[100], m[100];

int n, fc=0, sc=0, mc=0;
int quanta;

void RR()
{
	

void merg(){
	int isc=0, ifc= 0, min, flag;
	if( fc!=0  && sc!=0){
		while(isc<sc && ifc<fc){
			if(f[ifc].art == s[isc].art){
				m[mc] = f[ifc];
				mc++;
				ifc++;
				m[mc]= s[isc];
				mc++;
				isc++;
	
			}
			else if(f[ifc].at < s[isc].at){
				m[mc]= f[ifc];
				mc++;
				ifc++;
			}
			else if(f[ifc].at > s[isc].at){
				m[mc]= s[isc];
				mc++;
				isc++;
			}
			else;
			
		}
		if(mc != (fc+sc)){
			if(fc!=ifc){
				while(ifc!=fc){
					m[mc]= f[ifc];
					mc++;
					ifc++;
				}
				
			}
			else if(sc!=isc){
				while(isc!=sc){
					m[mc]= s[isc];
					mc++;
					isc++;
				}
				
			
			}
		}
		
	}
	else if(fc==0){
		while(isc!=sc){
			m[mc]= s[isc];
			mc++;
			isc++;
		}

	}
	else if(sc==0){
		while(ifc!=fc){
			m[mc]= f[ifc];
			mc++;
			ifc++;
		}
	}
	else {
		cout<<"NOT VALID" <<endl;
	}
}
void printer(){
	int i=0; 
	for(i; i<mc; i++){
		
		printf("\n\n\n Id: %d Arrival time: %d, RBT: %d, CMPT: %d", m[i].prid, m[i].art, m[i].rbt, m[i].cmpt);
	}
}

void input(){
	int map,  i, t;
	printf("Enter total no of queries: "); scanf("%d", &n);
	if(n==0) { printf("\n No queries\n"); }
	else{
		printf("\nEnter Quanta for particular Process: "); scanf("%d", &quanta);
		printf("\nEnter 1 for faculty $$$$$ 2 for student\n");
		for(i=0; i<n; i++){
			printf("\nJobType (1/2): "); scanf("%d", &map);
			if(map==1){
				printf("Query Id: "); scanf("%d", &f[fc].prid);
				printf("Arrival Time: "); scanf("%d", &t); f[fc].art= t-1000;
				printf("Resolving Time: "); scanf("%d", &f[fc].but);
				printf("Resolving Time: "); scanf("%d", &f[fc].but); f[fc].rbt= f[fc].but; 
				fc++;
			} else{
				printf("Query Id: "); scanf("%d", &s[sc].prid);
				printf("Arrival Time: "); scanf("%d", &t); s[sc].art= t-1000;
				printf("Resolving Time: "); scanf("%d", &s[sc].but);	
				printf("Resolving Time: "); scanf("%d", &s[sc].but);	 s[sc].rbt= s[sc].but;
				sc++;
			}
		}
	}
}
        main(){
	input();
	merg();
	RR();
	printer();
}


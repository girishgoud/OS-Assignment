#include<stdio.h>
struct job{
	int prid;
	int art;
	int but;
	int tat;
	int wat;
	int rbt;
}f[100], s[100], m[100];

int n, fc=0, sc=0, mc=0;
int quanta;

void RR(){
	int time=0,i, cCount=0;
	while(1){
		for(i=0; i<mc; i++){
			if(m[i].rbt>quanta){
				time += quanta; m[i].rbt -= quanta;
			}
			else if(m[i].rbt ==0){ continue;
			}
			else{
				time += m[i].rbt; m[i].rbt=0; cCount++;
			}
		}
		if(time==120 || cCount == mc) break;
	}

}

void merg(){
	int min= fc, i, flag=1, r=0, maxr=0;
	if( fc>0 && sc>0){
		if(min>sc){ flag=2; min=sc;	}
		while(r != min){
			if(flag==1){
				if(f[r].art == s[maxr].art){
					m[mc]= f[r]; r++; mc++;
					m[mc]= s[maxr]; mc++; maxr++;
				}
				else if(f[r].art < s[maxr].art){
					m[mc]= f[r]; r++; mc++;
				}
				else{
					m[mc]= s[maxr]; maxr++; mc++;
				}		
			}
			else{
				if(s[r].art== f[maxr].art){
					m[mc]= f[maxr]; mc++; maxr++;
					m[mc]= s[r]; mc++; r++;
				}
				else if(s[r].art < f[maxr].art){
					m[mc]= s[r]; mc++; r++;
				}
				else{
					m[mc] = f[maxr]; mc++; maxr++;
				}
			
			}
		}
		if(min!=sc){
			while(maxr!=sc){
				m[mc]= s[maxr]; mc++; maxr++;
			}	
		}
		else{
			while(maxr!=fc){
				m[mc]= f[maxr]; mc++; maxr++;
			}
		}
	}	
	else if(sc==0){
		while(r!=fc){
			m[mc]= f[r]; mc++; r++;
		}
	}
	else if(fc==0){
		while(r!=sc){
			m[mc]= s[r]; mc++; r++;
		}
	}
	else {
		printf("\n Nothing to be done"); exit(0);
	}
}
void printer(){
	int i=0; 
	for(i; i<mc; i++){
		printf("\n\nId: %d Arrivaltime: %d", m[i].prid, m[i].art);
		printf("\n\nId: %d Arrivaltime: %d, RBT: %d", m[i].prid, m[i].art, m[i].rbt);
	}
}

void input(){
	int map,  i, t;
	printf("Enter total no of queries: "); scanf("%d", &n);
	if(n==0) { printf("\n No of queries\n"); exit(0);}
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
void main(){
	input();
	merg();
	RR();
	printer();
}


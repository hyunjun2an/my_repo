#include <stdio.h>

#define MAX_SIZE 20000

int n;
int works[MAX_SIZE];

void main(){
	int i, j;
	int temp;
	float sum=0, devide=0;
	
	while(1){
		for(i=0;;i++){	//input works. if you wants to stop, input -1.
			scanf("%d", &works[i]);
			if(works[i] == -1){
				break;
			}
		}
		scanf("%d", &n); //input n

		for(j=0; j<i; j++){
			sum += works[j];
		}

		sum -= n;
		if(sum <= 0) {
			printf("0\n"); 
			sum = 0;
			continue;
		}

		devide = sum / i;
		temp = devide;

		if(temp == devide){
			printf("%d\n", (int)(devide * devide * i));
		}
		if(temp != devide){
			printf("%d\n", (int)(temp*temp*(i-1) + (temp+1)*(temp+1)));
		}
		sum = 0;
	}
}

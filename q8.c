#include <stdio.h>

int main(){
	int floors,rooms,beds;
	int i,j,k;
	int zerocount=0;
	int onecount =0;
	
	
	printf("enter floors ");
	scanf("%d", &floors);
	printf("enter rooms ");
	scanf("%d", &rooms);
	printf("enter beds ");
	scanf("%d", &beds);
	
	int structure[floors][rooms][beds];
	printf("only enter 1s, for occupied, 0s, for empty\n");
	
	for (k=0;k<floors;k++){
		for (i=0;i<rooms;i++){
		for(j=0;j<beds;j++){
			printf("enter %d%d%d element ", k+1,i+1,j+1);
			scanf("%d", &structure[k][i][j]);
		}
	}
	printf("\n");
    }
    
    for (k=0;k<floors;k++){
		for (i=0;i<rooms;i++){
		for(j=0;j<beds;j++){
			printf("%d ", structure[k][i][j]);
			
		}
		printf("\n");
	}
	printf("\n");
    }
    
    for (k=0;k<floors;k++){
	    for (i=0;i<rooms;i++){
	        for(j=0;j<beds;j++){
			if (structure[k][i][j] == 0){
				zerocount++;
			}
			else{
				onecount++;
			}
		}
	}
	printf("empty beds in floor %d, is %d and occupied beds is %d\n", k+1,zerocount,onecount);
		zerocount=0;
		onecount=0;
    }
}

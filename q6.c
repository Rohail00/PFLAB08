#include <stdio.h>

int main(){
	int rows;
	int columns;
	int i,j,k;
	int flag=0;
	
	printf("enter rows ");
	scanf("%d", &rows);
	printf("enter columns ");
	scanf("%d", &columns);
	
	int classroom[rows][columns];
	printf("only enter 1s and zeros\n");
	for (i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			printf("enter %d%d element ", i+1,j+1);
			scanf("%d", &classroom[i][j]);
		}
	}
	for (i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			printf("%d ", classroom[i][j]);
		}
		printf("\n");
	}
	for (i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			if ((i==j && (classroom[i][j] != 1)) || (i!=j && (classroom[i][j] != 0))){
				flag++;
			}

		}
	}
	if (flag>0 ){
		printf("students are not sitting in their correct seat");
	}
	else{
		printf("students are sitting in their correct seat");
	}
	
}

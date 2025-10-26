#include<stdio.h>

int main(){
	int zerocount = 0;
	int elements = 1;
	int i,j;
	int rows;
	printf("enter the number of rows ");
	scanf("%d", &rows);
	int columns;
	printf("enter the number of columns ");
	scanf("%d", &columns);
	int matrix[rows][columns];
	
	elements = rows*columns;
	
	for (i=0;i<rows;i++){
		for (j=0;j<columns;j++){
			printf("enter %d%d element ", i+1,j+1);
			scanf("%d", &matrix[i][j]);
			}
	}
	
	for (i=0;i<rows;i++){
		for (j=0;j<columns;j++){
			if (matrix[i][j] == 0){
				zerocount = zerocount+1;
			}
		}
	}
	if (zerocount > (elements/2)){
		printf("this is a sparse matrix\n");
	}
	else{
		printf("this is a normal matrix\n");
	}
	for (i=0;i<rows;i++){
		for (j=0;j<columns;j++){
		    printf(" %d", matrix[i][j]);
		}
		printf("\n");
	}
}

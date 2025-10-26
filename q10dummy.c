#include <stdio.h>

int main(){
	int sum=0;
	int i,j,k;
	int patients,vitals;
	int wards = 1;
	printf("enter the number of patients ");
	scanf("%d", &patients);
	printf("enter the number of vitals ");
	scanf("%d", &vitals);
	
	int data[wards][patients][vitals];
	 
	for (k=0;k<wards;k++){
		for (i=0;i<patients;i++){
		for(j=0;j<vitals;j++){
			printf("enter %d%d%d element ", k+1,i+1,j+1);
			scanf("%d", &data[k][i][j]);
		}
	}
	printf("\n");
    }
    printf("\n");
    for (k=0;k<wards;k++){
		for (i=0;i<patients;i++){
		for(j=0;j<vitals;j++){
			printf("%d ", data[k][i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
	printf("vitals of patients ");
	for (k=0;k<wards;k++){
		for (i=0;i<patients;i++){
		for(j=0;j<vitals;j++){
			sum=sum +data[k][i][j];
		}
		printf("%d ", sum);
		sum=0;
	}
	printf("\n");
}
printf("overall wards vitals ");
for (k=0;k<wards;k++){
		for (i=0;i<patients;i++){
		for(j=0;j<vitals;j++){
			sum=sum +data[k][j][i];
		}
		printf("%d ", sum);
		sum=0;
	}
	printf("\n");
}

}

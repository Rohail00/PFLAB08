#include <stdio.h>

int main(){
	int i,j,k;
	int RGB[3][3][3] = {
		{{10,20,30},{1,2,3},{1,2,3}},
		{{5,7,10},{45,56,32},{45,2,89}},
		{{23,6,10},{14,46,32},{89,100,28}}
	};
	int average=0;
	int sum=0;
	int elements=1;
	
	elements = 9;
	
	for (k=0;k<3;k++){
		for (i=0;i<3;i++){
		for(j=0;j<3;j++){
            sum = sum + RGB[k][i][j];
		}
	}
	average = (sum/9);
	printf("average color intensity for  color %d is %d\n", k+1, average);
	average =0;
	sum=0;
    }
	
	
}

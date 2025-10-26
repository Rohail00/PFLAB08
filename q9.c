#include <stdio.h>
int main (){
	int i,j,k;
	int max= -1;
	int maxcity,maxtime,maxday;
	int temp[3][3][3] = {
		{{1,2,3},{1,2,3},{1,2,3}},
		{{5,7,10},{45,56,32},{45,2,89}},
		{{23,6,10},{14,46,32},{89,100,28}}
	};
	
	for (k=0;k<3;k++){
	    for (i=0;i<3;i++){
		    for(j=0;j<3;j++){
			if (temp[k][i][j] > max){
				max = temp[k][i][j];
			}
		}
	}
	printf("max for city %d is %d\n", k,max);

    }
}

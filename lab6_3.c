#include <stdio.h>
#define MAX 100
int main(){
	int x,y,min,i,j;
	int A[MAX][MAX];
	scanf("%d %d",&x,&y);
	for(i = 0; i < x ; i++){
		for(j = 0; j < y ; j++){
			scanf("%d",&A[i][j]);
		}
	}
	min = A[0][0];
	for(i = 0; i < x ; i++){
		for(j = 0; j < y ; j++){
			if(A[i][j] < min){
				min = A[i][j];
			}
		}
	}
	printf("%d\n",min);
	return 0;
}

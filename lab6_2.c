#include <stdio.h>
int main(){
	int x,y;
	scanf("%d %d",&x,&y);
	int A[x][y];
	for(int i = 0; i < x ; i++){
		for(int j = 0; j < y ; j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(int i = 0; i < x ; i++){
		for(int j = 0; j < y ; j++){
			printf("%d",A[i][j] + 1);
			if(j < y - 1){
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

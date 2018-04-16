#include <stdio.h>

float matriz(float v[2][3]){
	printf("%f",v[1][0]);
}
int main(){
	float mat[2][3];
	mat[0][0] = 2;
	mat[0][1]= 3;
	mat[0][2]= 4;
	mat[1][0] = 4;
	mat[1][1] = 6;
	mat[1][2] = 8;
 matriz(mat);	 
	
}

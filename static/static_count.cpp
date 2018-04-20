#include <stdio.hr>
int count(){
	static int n =0;
	n++;
	return n;
}
int main(){
	int r ;
	r = count();
	r = count();
	r = count();
	r = count();
	r = count();
	printf("%d",r);
}

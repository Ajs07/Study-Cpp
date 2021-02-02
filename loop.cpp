/*
Nama	:	David Calvin Tobing
Kelas	:31TK2
NIM		:13318038
Tanggal	:31 Januari 2018

*/
#include<stdio.h>

/*void swap_nums(int *x, int *y)	
{
	int tmp;
	
	tmp = *x;
	*x = *y;
	*y = tmp;
	
}

void swap_pointers(char *x, char *y)
{
	char *tmp;
	tmp = *x;
	x = y;
	y = tmp;
}*/

void print3(int x[]) {
	int i;
	for(i = 0; i < 3; i++) {
		printf("%d ", x[i]);
	}
}

int main(){
	/*int a,b;
	char *s1, *s2;
	
	a= 3; b=4;
	
	swap_nums (&a,&b);
	printf("a is %d\n",a );
	printf("b is %d\n",b);
	
	s1  = "i should print second";
	s2 = ("i should print first");
	swap_pointers(s1,s2);
	
	printf("s1 is %s\n",  s1);
	printf("s2 is %s\n", s2);*/
	
	int x[5] = {0,1,2,3,4};
	print3(&x[0]);
	
	return 0;
	/*perbedaannya yaitu pda middle1 int a[],yaitu isi dari 
	array si a, sedangkan middle2 int *a, yaitu value yang di
	tunjuk oleh pointer a*/
}

#include <stdio.h>

int *bublesort(int *a){

	int j = 0;
	int k = 1;
	int tmp = 0;
	int n = 0;
	int len = 0;

	while(a[n] != '\0'){
		n++;
	}
	len = n;
	n = 0;
	while(1)
	{
		if((j) == len - 1){
			j = 0;
		}
		else if(a[j] > a[j + k]){
			tmp = a[j];
			a[j] = a[j + k];
			a[j + k] = tmp;
			tmp = 0;
			n = 0;
		}
		if(n == len - 1){
			break;
		}
		j++;
		n++;
	}
	return a;
}


int main() {

	int a[] = {1, 3 , 4 , 8 , 6 , 27 , 49, 43, 431 ,4532 , 4324 ,43 , 54 , 1 ,1 ,1};
	int *b = bublesort(a);

int count = 0;

	for(int i = 0; i < 16; i++){
		printf("%d\n", b[i]);
	}

}

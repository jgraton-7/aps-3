#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //clock(), CLOCKS_PER_SEC e clock_t


void selectionSort(int array[], int len) {
	int i, j, m, tmp;
	for (i = 0; i < (len-1); i++)
	{
		m = i;
		for (j = (i+1); j < len; j++) {
		if(array[j] < array[m])
			m = j;
		}
		if (i != m) {
		tmp = array[i];
		array[i] = array[m];
		array[m] = tmp;
		}
	}
}


int main() {

	int a[] = {1, 3 , 4 , 8 , 6 , 27 , 49, 43, 431 ,4532 , 4324 ,43 , 54 , 1 ,1, 89, 995, 9986, 9785, 9558, 8754 };
	selectionSort(a, 22);

int count = 0;

	for(int i = 0; i < 22 ; i++){
		printf("%d\n", a[i]);
	}

}

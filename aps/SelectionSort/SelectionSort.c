#include <stdio.h>
#include <string.h>



int *SelectionSort(int *a){


	int j = 0;
	int k = 1;
	int n = 0;
	int tmp;
	int len;

	while(a[n] != '\0'){
		n++;
	}
	len = n;

	while(1){

		if(k == len){
			k = 0;
			j++;
		}

		if(a[j] > a[k]){
			tmp = a[j];
			a[j] = a[k];
			a[k] = tmp;
		}
		k++;
		if(j == len - 1)
			break;
	}
	return a;
}

int main() {

	int a[] = {1, 3 , 4 , 8 , 6 , 27 , 49, 43, 431 ,4532 , 4324 ,43 , 54 , 1 ,1, 89, 995, 9986, 9785, 9558, 8754 };
	int *b = SelectionSort(a);

int count = 0;


	for(int i = 0; i < 22 ; i++){
		printf("%d\n", a[i]);
	}

}

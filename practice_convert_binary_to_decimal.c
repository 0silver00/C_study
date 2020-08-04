#include <stdio.h>

int main(){
	int decimal = 0;
	int binary[4] = {1,1,0,1};
	int position = 0;

	for (int i = sizeof(binary) / sizeof(int) - 1; i>=0; i--){
		if(binary[i] == 1){
			decimal += 1 << position;
		}
		position++;
	}

	printf("%d\n", decimal);

	return 0;
}

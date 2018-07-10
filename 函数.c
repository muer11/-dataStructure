#include <stdio.h>

//void sumNumbers(int, int); //声明 
void sumNumbers(int s, int e); //这种声明方式对开发者更友好 

int main(){
	
	//int allSum;
	
	sumNumbers(1,10);
	sumNumbers(20, 30);
	sumNumbers(35, 45);
	
	
//	allSum = sumNumbers(1,10) + sumNumbers(20, 30) + sumNumbers(35, 45);
	
//	printf("1到10，20到30,35到45三个和为%f", allSum);

	return 0; 
} 

void sumNumbers(int s, int e){ //定义 
	int i;
	int sum = 0;
	for(i = s; i <= e; i++){
		sum += i; 
	}
	//return sum;
	printf("%d加%d的和为%d;  ", s, e, sum);
}

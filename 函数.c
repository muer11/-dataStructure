#include <stdio.h>

//void sumNumbers(int, int); //���� 
void sumNumbers(int s, int e); //����������ʽ�Կ����߸��Ѻ� 

int main(){
	
	//int allSum;
	
	sumNumbers(1,10);
	sumNumbers(20, 30);
	sumNumbers(35, 45);
	
	
//	allSum = sumNumbers(1,10) + sumNumbers(20, 30) + sumNumbers(35, 45);
	
//	printf("1��10��20��30,35��45������Ϊ%f", allSum);

	return 0; 
} 

void sumNumbers(int s, int e){ //���� 
	int i;
	int sum = 0;
	for(i = s; i <= e; i++){
		sum += i; 
	}
	//return sum;
	printf("%d��%d�ĺ�Ϊ%d;  ", s, e, sum);
}

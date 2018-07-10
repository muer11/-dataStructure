#include <stdio.h>

// int main(){
 	//int i = 0;
// 	int a;
// 	a = 6;
// 	
// 	printf("sizeof(int)=%ld\n", sizeof(int)); //4  表示在内存中占据4个字节，即32个比特 即32位
//	printf("sizeof(double)=%ld\n", sizeof(double)); //8
// 	printf("sizeof(a)=%ld\n", sizeof(a));
// 	
// 	printf("0x%p\n", &a);
 	
 	//printf("%x", &i);
 	
 	//return 0;
// } 


//const int Max = 3;
// 	
//int main(){
//	int var[] = {10, 100, 200};
//	int i, *ptr;
//	
//	ptr = var;
//	
//	for( i = 0; i < Max; i++){
//		printf("存储地址：var[%d] = %x\n", i, ptr);
//		printf("存储值：var[%d] = %d\n", i, *ptr);
//		ptr++;
//	 }
//	 
//	 return 0;
// }


const int MAX = 4;
int main(){
	const char names[] = {
		"zara ali",
		"hina ali",
		"nuha ali",
		"sara ali"
	};
	
	int *name1 = &names;
	
	int i = 0;
	for(i; i < MAX; i++){
		printf("Value of names[%d] = %s\n", i, name1[i]);
	}
}



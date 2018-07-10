#include <stdio.h>
#include "./SequenceList.c"

/* 测试调用的函数原型 */
Status CmpGreater(LElemType_Sq e, LElemType_Sq data);
void PrintElem(LElemType_Sq e);

int main(int argc, char **argv){
	SqList L;
	int i;
	LElemType_Sq e;
	{
		printf("InitList_Sq 初始化顺序表 L ...");
		InitList_Sq(&L);
		printf("\n");
	}
	PressEnter;
	
	{
		printf("ListEmpty_Sq ...");
		ListEmpty_Sq(L) ? printf("L为空！！\n") : printf("L不为空！\n");
		printf("\n");
	}
	PressEnter;
	
	{
		printf("ListInsert_Sq ...");
		for(i = 1; i <= 6; i++){
			printf("作为示范，在L第%d个位置插入\"%d\" ... \n", i, 2*i);
			ListInsert_Sq(&L, i, 2*i); 
		}
		printf("\n");
	}
	PressEnter;
} 










































 

#include <stdio.h>
#include "./SequenceList.c"

/* ���Ե��õĺ���ԭ�� */
Status CmpGreater(LElemType_Sq e, LElemType_Sq data);
void PrintElem(LElemType_Sq e);

int main(int argc, char **argv){
	SqList L;
	int i;
	LElemType_Sq e;
	{
		printf("InitList_Sq ��ʼ��˳��� L ...");
		InitList_Sq(&L);
		printf("\n");
	}
	PressEnter;
	
	{
		printf("ListEmpty_Sq ...");
		ListEmpty_Sq(L) ? printf("LΪ�գ���\n") : printf("L��Ϊ�գ�\n");
		printf("\n");
	}
	PressEnter;
	
	{
		printf("ListInsert_Sq ...");
		for(i = 1; i <= 6; i++){
			printf("��Ϊʾ������L��%d��λ�ò���\"%d\" ... \n", i, 2*i);
			ListInsert_Sq(&L, i, 2*i); 
		}
		printf("\n");
	}
	PressEnter;
} 










































 

#include <stdio.h>
#include "./MergeSqList.c"

void PrintElem(LElemType_Sq e);

int main(int argc, char **argv){  // ??**argv��ɶ��˼ 
	SqList La, Lb, Lc1, Lc2;
	LElemType_Sq a[4] = {3, 5, 8, 11};
	LElemType_Sq b[7] = {2, 6, 8, 9, 11, 15, 20};
	int i;
	
	InitList_Sq(&La);
	for(i=1; i<=4; i++){
		ListInsert_Sq(&La, i, a[i-1]); 
	}
	
	InitList_Sq(&Lb);
	for(i=1; i<=7; i++){
		ListInsert_Sq(&Lb, i, b[i-1]);
	}
	
	printf("La= ");
	ListTraverse_Sq(La, PrintElem);
	printf("Lb= ");
	ListTraverse_Sq(Lb, PrintElem);
	printf("\n\n");
	
	MergeSqList_1(La, Lb, &Lc1);
	printf("�ϲ�La��LbΪLc1= ");
	ListTraverse_Sq(Lc1, PrintElem);
	printf("\n\n");
	
	MergeSqList(La, Lb, &Lc2);
	printf("�ϲ�La��LbΪLc2= ");
	ListTraverse_Sq(Lc2, PrintElem);
	printf("\n\n");
	
	return 0;
}

void PrintElem(LElemType_Sq e){
	printf("%d", e);
}



#ifndef SEQUENCELIST_C
#define DEQUENCELIST_C

#include "./SequenceList.h"
/* 2.3 */
Status InitList_Sq(SqList *L){
	(*L).elem = (LElemType_Sq*)malloc(LIST_INIT_SIZE*sizeof(LElemType_Sq));
	if(!(*L).elem) exit(OVERFLOW); //�����ڴ�ʧ�� 
	(*L).length = 0; //��ʼ��˳�����Ϊ0 
	(*L).listsize = LIST_INIT_SIZE; //˳����ʼ�ڴ������ 
	return OK;  //��ʼ���ɹ� 
}

void ClearList_Sq(SqList *L){
	(*L).length = 0;
} 

void DestroyList_Sq(SqList *L){
	free((*L).elem);
	(*L).elem = NULL; //�ͷ��ڴ���ÿ�ָ�� 
	(*L).length = 0;
	(*L).listsize = 0;
}

Status ListEmpty_Sq(SqList L){
	return L.length == 0 ? TRUE : FALSE;
} 

int ListLength_Sq(SqList L){
	return L.length;
}

Status GetElem_Sq(SqList L, int i, LElemType_Sq *e){
	if(i < 1 || i > L.length){ 
		return ERROR; //iֵ���Ϸ�
	}else{
		*e = L.elem[i - 1];
	} 
	
	return OK; 
}

/* 2.6 */
int LocateElem_Sq(SqList L, LElemType_Sq e, Status(Compare)(LElemType_Sq, LElemType_Sq)){
	int i = 1;
	while(i <= L.length && !Compare(e, L.elem[i-1])) ++i;
	if(i <= L.length){
		return 1;
	}else{
		return 0;
	}
}

Status PriorElem_Sq(SqList L, LElemType_Sq cur_e, LElemType_Sq *pre_e){
	int i = 1;
	if(L.elem[0] != cur_e){
		while(i < L.length && L.elem[i] != cur_e) ++i;
		if(i < L.length){
			*pre_e = L.elem[i-1];
			return OK;
		}
	}
	return ERROR;
}

Status NextElem_Sq(SqList L, LElemType_Sq cur_e, LElemType_Sq *next_e){
	int i = 0;
	while(i < L.length && L.elem[i] != cur_e) ++i;
	if(i < L.length - 1 ){
		*next_e = L.elem[i+1];
		return OK;
	}
	return ERROR;
}


/* 2.4 */
Status ListInsert_Sq(SqList *L, int i, LElemType_Sq e){
	LElemType_Sq *newbase;
	LElemType_Sq *p, *q;
	if(i<1 || i>(*L).length+1) return ERROR; 
	if((*L).length >= (*L).listsize){ //���洢�ռ������� ���迪���¿ռ� 
		//realloc(void *__ptr, size_t __size)�������Ѿ����õ��ڴ�ռ䣬��������malloc()����������ڴ�ռ�Ĵ�С��
		newbase = (LElemType_Sq*)realloc((*L).elem, ((*L).listsize + LISTINCREMENT)*sizeof(LElemType_Sq));
		if(!newbase) exit(OVERFLOW);
		(*L).elem = newbase;
		(*L).listsize += LISTINCREMENT;
	}
	q = &(*L).elem[i-1]; //qΪ����λ��
	for(p = &(*L).elem[(*L).length-1]; p >= q; --p){
		*(p+1) = *p; //����λ�ü�֮���Ԫ�غ��� 
	} 
	*q = e; //����e 
	(*L).length ++; //����1 
	return OK;
}

/* 2.5 */
Status ListDelete_Sq(SqList *L, int i, LElemType_Sq *e){
	int j;
	LElemType_Sq *p, *q;
	if(i<1 || i>(*L).length) return ERROR;
	
	p = &(*L).elem[i-1]; //pΪ��ɾ��Ԫ�ص�λ�� 
	*e = *p; 
	q = (*L).elem+(*L).length - 1; //��βԪ��λ�� 
	
	for(++p; p<=q; ++p){
		*(p-1) = *p; //��ɾ��Ԫ��֮���Ԫ������ 
	}
	(*L).length --;
	return OK;
} 


Status ListTraverse_Sq(SqList L, void(Visit)(LElemType_Sq)){
	int i;
	for(i = 0; i<L.length; i++){
		Visit(L.elem[i]);
	}
	return OK;
}

#endif


























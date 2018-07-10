/*˳�����ز����б�*/ 

#ifndef SEQUENCELIST_H
#define SEQUENCELIST_H 

#include <stdio.h>
#include <stdlib.h>
#include "./Status.h"

/*�궨��*/
#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10

/*˳������Ͷ���*/
#ifndef LELEMTYPE_SQ
#define LELEMTYPE_SQ
typedef int LElemType_Sq;
#endif  

typedef struct{
	LElemType_Sq *elem; //�洢�ռ��ַ��ָ���һ������ָ�룩 
	int length; //��ǰ˳����� 
	int listsize;	//��ǰ����Ĵ洢���� 
}SqList; //˳���0�ŵ�Ԫ����ʹ��

/*˳������б�*/
Status InitList_Sq(SqList *L);  //��ʼ����˳���L
void ClearList_Sq(SqList *L); //���˳���L
void DestroyList_Sq(SqList *L); //����˳���L
Status ListEmpty_Sq(SqList L); //�ж�˳���L�Ƿ�Ϊ��
int ListLength_Sq(SqList L); //����˳���L��Ԫ�ظ���
Status GetElem_Sq(SqList L, int i, LElemType_Sq *e); //��e����˳���L�е�i��Ԫ��
int LocateElem_Sq(SqList L, LElemType_Sq e, Status(Compare)(LElemType_Sq, LElemType_Sq)); //����˳���L���׸���e����Compare��ϵ��Ԫ��λ��
Status PriorElem_Sq(SqList L, LElemType_Sq cur_e, LElemType_Sq *pre_e); //��pre_e����cur_e��ǰ�� 
Status NextElem_Sq(SqList L, LElemType_Sq cur_e, LElemType_Sq *next_e); //��next_e����cur_e�ĺ��
Status ListInsert_Sq(SqList *L, int i, LElemType_Sq e); //��˳���L�ĵ�i��λ���ϲ���e
Status ListDelete_Sq(SqList *L, int i, LElemType_Sq *e); //ɾ��˳���L�ϵ�i��λ�õ�Ԫ�أ�����e����
Status ListTraverse_Sq(SqList L, void(Visit)(LElemType_Sq)); //��visit��������˳���L 

#endif

 

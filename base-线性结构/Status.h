/*״̬�뼰�꺯���б�*/

#ifndef STATUS_H
#define STATUS_H

/*״̬��*/
#define TRUE 1
#define FALSE 0
#define YES 1
#define NO 0
#define OK 1
#define ERROR 0
#define SUCCESS 1
#define UNSUCCESS 0
#define INFEASIBLE -1 //������ 

#ifndef _MATH_H_ //ϵͳ�����д�״̬�붨�壬Ҫ�����ͻ 
#define OVERFLOW -2 //��ջ���� 
#define UNDERFLOW -3 //��ջ���� 
#endif

#ifndef NULL
#define NULL ((void*)0)
#endif

/*״̬��ʶ������*/
typedef int Status;  //��status������int���ͣ������ѧ����, ���Լ���status����int����

/*�꺯��*/
//������ͣһ��ʱ�� 
#define Wait(x)\
{\
	double _Loop_Num_; \
	for(_Loop_Num_ = 0.01; _Loop_Num_ <= 100000.0*x; _Loop_Num_ += 0.01)\
	;\
}//����һ����ѭ��
 
//enter���� 

#define PressEnter\
{\
	fflush(stdin);\
	printf("Press Enter...");\
	getchar();\
	fflush(stdin);\
}

#endif




/*状态码及宏函数列表*/

#ifndef STATUS_H
#define STATUS_H

/*状态码*/
#define TRUE 1
#define FALSE 0
#define YES 1
#define NO 0
#define OK 1
#define ERROR 0
#define SUCCESS 1
#define UNSUCCESS 0
#define INFEASIBLE -1 //不可行 

#ifndef _MATH_H_ //系统中已有此状态码定义，要避免冲突 
#define OVERFLOW -2 //堆栈上溢 
#define UNDERFLOW -3 //堆栈下溢 
#endif

#ifndef NULL
#define NULL ((void*)0)
#endif

/*状态码识别类型*/
typedef int Status;  //用status来代替int类型，方便教学而已, 所以见到status就是int类型

/*宏函数*/
//函数暂停一段时间 
#define Wait(x)\
{\
	double _Loop_Num_; \
	for(_Loop_Num_ = 0.01; _Loop_Num_ <= 100000.0*x; _Loop_Num_ += 0.01)\
	;\
}//设立一个空循环
 
//enter继续 

#define PressEnter\
{\
	fflush(stdin);\
	printf("Press Enter...");\
	getchar();\
	fflush(stdin);\
}

#endif




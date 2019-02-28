#ifndef __COMMENT_CONVERT_H__
#define __COMMENT_CONVERT_H__

#include <stdio.h>
#include <stdlib.h>

typedef enum State//枚举法表示操作选项
{
	NUL_STATE,//无状态
	C_STATE,//C注释状态
	CPP_STATE,//C++注释状态
	END_STATE//结束状态
}State;

void DoNulState(FILE* pfRead, FILE* pfWrite, State* ps);
void DoCState(FILE* pfRead, FILE* pfWrite, State* ps);
void DoCppState(FILE* pfRead, FILE* pfWrite, State* ps);

void CommentConvert(FILE* pfRead, FILE* pfWrite);

#endif //__COMMENT_CONVERT_H__

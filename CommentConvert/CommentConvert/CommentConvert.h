#ifndef __COMMENT_CONVERT_H__
#define __COMMENT_CONVERT_H__

#include <stdio.h>
#include <stdlib.h>

typedef enum State//ö�ٷ���ʾ����ѡ��
{
	NUL_STATE,//��״̬
	C_STATE,//Cע��״̬
	CPP_STATE,//C++ע��״̬
	END_STATE//����״̬
}State;

void DoNulState(FILE* pfRead, FILE* pfWrite, State* ps);
void DoCState(FILE* pfRead, FILE* pfWrite, State* ps);
void DoCppState(FILE* pfRead, FILE* pfWrite, State* ps);

void CommentConvert(FILE* pfRead, FILE* pfWrite);

#endif //__COMMENT_CONVERT_H__

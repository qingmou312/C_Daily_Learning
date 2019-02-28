#include "CommentConvert.h"
void CommentConvert(FILE* pfRead, FILE* pfWrite)
{
	State state = NUL_STATE;//³ÌÐòµ±Ç°µÄ×´Ì¬
	while (state != END_STATE)
	{
		switch (state)
		{
		case NUL_STATE:
			DoNulState(pfRead, pfWrite, &state);
			break;
		case C_STATE:
			DoCState(pfRead, pfWrite, &state);
			break;
		case CPP_STATE:
			DoCppState(pfRead, pfWrite, &state);
			break;
		case END_STATE:
			break;
		}
	}
}

void DoNulState(FILE* pfRead, FILE* pfWrite, State* ps)//ÎÞ×´Ì¬
{
	int first = fgetc(pfRead);
	switch (first)
	{
	case '/':
	{
		int second = fgetc(pfRead);
		switch (second)
		{
		case'*':
			{
				fputc('/', pfWrite);
				fputc('/', pfWrite);
				*ps = C_STATE;
			}
			break;
		case '/':
			{
				fputc(first, pfWrite);
				fputc(second, pfWrite);
				*ps = CPP_STATE;
			}
			break;
		default:
			{
				fputc(first, pfWrite);
				fputc(second, pfWrite);
			}
			break;
		}
	}
		break;
	case 'EOF':
	{
		*ps = END_STATE;
	}
		break;
	default:
	{
		fputc(first, pfWrite);
	}
		break;
	}
}

void DoCState(FILE* pfRead, FILE* pfWrite, State* ps)//C×´Ì¬
{
	int first = fgetc(pfRead);
	switch (first)
	{
	case '*':
	{
		int second = fgetc(pfRead);
		switch (second)
		{
		case '/':
		{
			int third = 0;
			*ps = NUL_STATE;
			third = fgetc(pfRead);
			if (third != '\n')
			{
				fputc('\n', pfWrite);
				ungetc(third, pfRead);
			}
			else
			{
				fputc(third, pfWrite);
			}
		}
			break;
		case '*':
		{
			int third = 0;
			*ps = NUL_STATE;
			third = fgetc(pfRead);
			if (third = '/')
				fputc(first, pfWrite);
		}
			break;
		default:
		{
			fputc(first, pfWrite);
			fputc(second, pfWrite);
		}
			break;
		}
	}
		break;
	case '\n':
	{
		fputc(first, pfWrite);
		fputc('/', pfWrite);
		fputc('/', pfWrite);
	}
		break;
	default:
	{
		fputc(first, pfWrite);
	}
		break;
	}
}

void DoCppState(FILE* pfRead, FILE* pfWrite, State* ps)//C++×´Ì¬
{
	int first = fgetc(pfRead);
	switch (first)
	{
	case 'EOF':
	{
		*ps = END_STATE;
	}
		break;
	case '\n':
	{
		fputc(first, pfWrite);
		*ps = NUL_STATE;
	}
	    break;
	default:
	{
		fputc(first, pfWrite);
	}
		break;
	}
}
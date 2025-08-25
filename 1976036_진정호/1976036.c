#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TOKEN " \t\n\"\'"

int main() {
	char buffer[100];  // 한 줄 읽기를 위한 문자열 변수
	FILE* fp = fopen("c:\\temp\\example.asm", "r");  // 읽기 파일 열기

	if (fp == NULL) {  // 읽기 파일 없을 때, 종료
		printf("파일이 존재하지 않습니다.");

		fclose(fp);
	}

	else {
		FILE* fp1 = fopen("c:\\temp\\output.lst", "w+");  // 토큰을 하나씩 입력받는 텍스트파일

		while (!feof(fp)) {
			fgets(buffer, 100, fp);  // 한 줄 읽기
			if (feof(fp))  // 파일의 끝이면 종료
				break;

			char* token = strtok(buffer, TOKEN);  // 토큰화
			
			while (token != NULL) {  // 토큰이 NULL이면 종료

				if (sizeof(token) == 4) {  // 정수 타입일때 10진수 변환
					int x;
					int n = sscanf(token, "%d", &x);
					fputs("%s\n", token);  // 토큰 입력받기

					token = strtok(NULL, TOKEN);
					
				}
				else
				{
					fputs("%s\n", token);

					token = strtok(NULL, TOKEN);
				}
			}
		}

		fclose(fp1);
		fclose(fp);
	}
	ojcode();
}

void ojcode() {
	FILE* fp2 = fopen("c:\\temp\\output.lst", "r");
	FILE* fp3 = fopen("c:\\temp\\output.obj", "w+");
	char buffer[100] = malloc(buffer);
	char string[100] = malloc(string);
	char* ret2 = strchr(buffer, '+');
	char* token = malloc(token = 0);
	while (!feof(fp2)) {
		fgets(buffer, 100, fp2);  // 한 줄 읽기
		if (ret2 != NULL) {
			char string = buffer;
		}
		if (feof(fp2))  // 파일의 끝이면 종료
			break;
		else {  // 레코드 
			fputs("H%s%d%d\n", 'COPY', addr(buffer), Locctr(buffer));  // 헤더
			fputs("T%d%d", Locctr(buffer),strlen(symTab(token)));  // 텍스트
			while (token != NULL) { fputs("%d\n", symTab(token)); }
			while (string != NULL) { fputs("M%d%d\n", addr(string), 05); }
			fputs("E%d", addr(buffer));  // 엔드
		}
	}

	fclose(fp2);
	fclose(fp3);
}

int opTab(char* token) {
	char* token = malloc(token = 0);
	if (token == 'ADD')
		return 0x18;
	else if (token == 'ADDF')
		return 0x58;
	else if (token == 'ADDR')
		return 0x90;
	else if (token == 'AND')
		return 0x40;
	else if (strncmp(token, "CLEAR", 5) == 0)
		return 0xB4;
	else if (token == 'COMP')
		return 0x28;
	else if (strncmp(token, "COMPR", 5) == 0)
		return 0xA0;
	else if (strncmp(token, "COMPF", 5) == 0)
		return 0x88;
	else if (token == 'DIV')
		return 0x24;
	else if (token == 'DIVF')
		return 0x64;
	else if (token == 'DIVR')
		return 0x9C;
	else if (token == 'FIX')
		return 0xC4;
	else if (strncmp(token, "FLOAT", 5) == 0)
		return 0xC0;
	else if (token == 'HIO')
		return 0xF4;
	else if (token == 'J')
		return 0x3C;
	else if (token == 'JEQ')
		return 0x30;
	else if (token == 'JGT')
		return 0x34;
	else if (token == 'JLT')
		return 0x38;
	else if (token == 'JSUB')
		return 0x48;
	else if (token == 'LDA')
		return 0x00;
	else if (token == 'LDB')
		return 0x68;
	else if (token == 'LDCH')
		return 0x50;
	else if (token == 'LDF')
		return 0x70;
	else if (token == 'LDL')
		return 0x08;
	else if (token == 'LDS')
		return 0x6C;
	else if (token == 'LDT')
		return 0x74;
	else if (token == 'LDX')
		return 0x04;
	else if (token == 'LPS')
		return 0xD0;
	else if (token == 'MUL')
		return 0x20;
	else if (token == 'MULF')
		return 0x60;
	else if (token == 'MULR')
		return 0x98;
	else if (token == 'NORM')
		return 0xC8;
	else if (token == 'OR')
		return 0x44;
	else if (token == 'RD')
		return 0xD8;
	else if (token == 'RMO')
		return 0xAC;
	else if (token == 'RSUB')
		return 0x4C;
	else if (token == 'SIO')
		return 0xF0;
	else if (token == 'SSK')
		return 0xEC;
	else if (token == 'STA')
		return 0x0C;
	else if (token == 'STB')
		return 0x78;
	else if (token == 'STCH')
		return 0x54;
	else if (token == 'STF')
		return 0x80;
	else if (token == 'STI')
		return 0xD4;
	else if (token == 'STL')
		return 0x14;
	else if (token == 'STS')
		return 0x7C;
	else if (token == 'STSW')
		return 0xE8;
	else if (token == 'STT')
		return 0x84;
	else if (token == 'STX')
		return 0x10;
	else if (token == 'SUB')
		return 0x1C;
	else if (token == 'SUBF')
		return 0x5C;
	else if (token == 'SUBR')
	     return 0x94;
	else if (token == 'SVC')
	     return 0xB0;
	else if (token == 'TD')
	     return 0xE0;
	else if (token == 'TIO')
	     return 0xF8;
	else if (token == 'TIX')
	     return 0x2C;
	else if (token == 'TIXR')
	     return 0xB8;
	else if (token == 'WD')
	     return 0xDC;
	else
	     return NULL;
}  
// 연산명령어의 연산 코드값 정의

int symTab(char* token) {
	char* token = malloc(token = 0);  // 인자로 받을 token 정의 및 메모리 초기화
	int y, z;  // ojcode의 구성이 될 인자들

	if ('#' != NULL)  // 직접 지정일 때
		y = opTab(token) + 0x1;
	else if ('@' != NULL)  // 간접 지정일 때
		y = opTab(token) + 0x2;
	else
		y = opTab(token) + 0x3;
		
	if (',X' != NULL)  // 인덱스 지정일 때
	{
		if (addr(token) - Locctr(token) <= 0x1111)  // 주소값에 pc값을 뺐을 때 
			z = 0xA + addr(token) - Locctr(token);  // pc주소 지정
		else
			z = 0xC + addr(token) - Locctr('BASE'); // base 주소 지정
	}
	else if ('+' != NULL) {
		if (addr(token) - Locctr(token) <= 0x1111)
			z = 0x300000 + addr(token) - Locctr(token);
		else
			z = 0x500000 + addr(token) - Locctr('BASE');
	}
	else {  // 인덱스 지정이 아닐 때
		if (addr(token) - Locctr(token) <= 0x1111)
			z = 0x2 + addr(token) - Locctr(token);
		else
			z = 0x4 + addr(token) - Locctr('BASE');
	}
	return ("%d%d", y, z);
}

int Locctr(char* buffer) {  
	char* buffer[100] = malloc(buffer);
	char* ret1 = strchr(buffer, 'r');
	char* ret2 = strchr(buffer, '+');

	int l = 0x000000;  // 시작 주소
	
	if (ret1 != NULL)
		return l += 2;  // r이 있으면 2바이트 추가
	else if (ret2 != NULL)
		return l += 4;  // +가 있으면 4바이트 추가
	else if (sizeof(buffer) == 4)
		return l += (int)buffer;  // buffer가 정수라면 버퍼만큼 바이트 추가
	else
		return l += 3;  // 일반적인 상황에 3바이트 추가
	
}

int addr(char* buffer) {  // 명령어의 주소를 받는 함수
	char* buffer[100] = malloc(buffer);

	FILE* fp2 = fopen("c:\\temp\\output.lst", "r");

	while (!feof(fp2)) {
		if (Locctr(buffer) != NULL) {
			char b = fgets(buffer, 100, fp2);
			char* ret5 = strstr(buffer, fp2);
			if (ret5 != NULL) {
				int pos = ftell(fp2);
				fseek(fp2, pos, SEEK_CUR);  // 파일 포인터를 검색한 문자열의 위치로 옮긴다.
				b = Locctr(buffer);  // 그 위치의 Locctr값을 얻어서 반환한다. 
			}
		}
	}
	fclose(fp2);
}

int link(buffer) {
	char* buffer[100] = malloc(buffer);
	int LISTA = 0x004040;
	int LISTB = 0X0040C3;
	int LISTC = 0x004112;
	int ENDA = 0x004054;
	int ENDB = 0x004070;
	int ENDC = 0x004042;
	FILE* fp4 = fopen("c:\\temp\\output.obj", "r");
	while (!feof(fp4)) {
		fgets(buffer, 100, fp4);
		int i = addr(buffer);
		if ('+' != NULL && 'ISTA' != NULL) {
			i + 0x004040;
		}
		if ('-' != NULL && 'ISTA' != NULL) {
			i - 0x004040;
		}
		if ('+' != NULL && 'ISTB' != NULL) {
			i + 0x0040C3;
		}
		if ('-' != NULL && 'ISTB' != NULL) {
			i - 0x0040C3;
		}
		if ('+' != NULL && 'ISTC' != NULL) {
			i + 0x004112;
		}
		if ('-' != NULL && 'ISTC' != NULL) {
			i - 0x004112;
		}

		if ('+' != NULL && 'ENDA' != NULL) {
			i + 0x004054;
		}
		if ('-' != NULL && 'ENDA' != NULL) {
			i + 0x004054;
		}
		if ('+' != NULL && 'ENDB' != NULL) {
			i + 0x004070;
		}
		if ('-' != NULL && 'ENDB' != NULL) {
			i + 0x004070;
		}
		if ('+' != NULL && 'ENDC' != NULL) {
			i + 0x004042;
		}
		if ('-' != NULL && 'ENDC' != NULL) {
			i + 0x004042;
		}

	}
	fclose(fp4);
}

void load() {
	char* buffer[100] = malloc(buffer);
	int LISTA = 0x004040;
	int LISTB = 0X0040C3;
	int LISTC = 0x004112;
	int ENDA = 0x004054;
	int ENDB = 0x004070;
	int ENDC = 0x004042;
	int a = link(buffer);
	FILE* fp4 = fopen("c:\\temp\\output.obj", "r");
	FILE* fp5 = fopen("c:\\temp\\loadmap.obj", "w+");
	while (!feof(fp4)) {
		for (int i = 0x004000; i < 0X004140; i++) {
			fputs("%d ", i);
			fputs("........  ", fp5);
			fputs("........  ", fp5);
			fputs("........  ", fp5);
			fputs("........\n", fp5);
			i += 0x10;
		}
		fgets(buffer, 100, fp4);
		
		if ('T' != NULL) {
			char a = fprintf("%s", buffer + 9);  // 필요한 내용만 출력 
		}

		if ('M' != NULL) {
			char b = fprintf("%s", buffer + 9);
		}
		fseek(fp5, -a, SEEK_CUR);
		fputs("%s", buffer);
	}
	fclose(fp4);
	fclose(fp5);
}
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TOKEN " \t\n\"\'"

int main() {
	char buffer[100];  // �� �� �б⸦ ���� ���ڿ� ����
	FILE* fp = fopen("c:\\temp\\example.asm", "r");  // �б� ���� ����

	if (fp == NULL) {  // �б� ���� ���� ��, ����
		printf("������ �������� �ʽ��ϴ�.");

		fclose(fp);
	}

	else {
		FILE* fp1 = fopen("c:\\temp\\output.lst", "w+");  // ��ū�� �ϳ��� �Է¹޴� �ؽ�Ʈ����

		while (!feof(fp)) {
			fgets(buffer, 100, fp);  // �� �� �б�
			if (feof(fp))  // ������ ���̸� ����
				break;

			char* token = strtok(buffer, TOKEN);  // ��ūȭ
			
			while (token != NULL) {  // ��ū�� NULL�̸� ����

				if (sizeof(token) == 4) {  // ���� Ÿ���϶� 10���� ��ȯ
					int x;
					int n = sscanf(token, "%d", &x);
					fputs("%s\n", token);  // ��ū �Է¹ޱ�

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
		fgets(buffer, 100, fp2);  // �� �� �б�
		if (ret2 != NULL) {
			char string = buffer;
		}
		if (feof(fp2))  // ������ ���̸� ����
			break;
		else {  // ���ڵ� 
			fputs("H%s%d%d\n", 'COPY', addr(buffer), Locctr(buffer));  // ���
			fputs("T%d%d", Locctr(buffer),strlen(symTab(token)));  // �ؽ�Ʈ
			while (token != NULL) { fputs("%d\n", symTab(token)); }
			while (string != NULL) { fputs("M%d%d\n", addr(string), 05); }
			fputs("E%d", addr(buffer));  // ����
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
// �����ɾ��� ���� �ڵ尪 ����

int symTab(char* token) {
	char* token = malloc(token = 0);  // ���ڷ� ���� token ���� �� �޸� �ʱ�ȭ
	int y, z;  // ojcode�� ������ �� ���ڵ�

	if ('#' != NULL)  // ���� ������ ��
		y = opTab(token) + 0x1;
	else if ('@' != NULL)  // ���� ������ ��
		y = opTab(token) + 0x2;
	else
		y = opTab(token) + 0x3;
		
	if (',X' != NULL)  // �ε��� ������ ��
	{
		if (addr(token) - Locctr(token) <= 0x1111)  // �ּҰ��� pc���� ���� �� 
			z = 0xA + addr(token) - Locctr(token);  // pc�ּ� ����
		else
			z = 0xC + addr(token) - Locctr('BASE'); // base �ּ� ����
	}
	else if ('+' != NULL) {
		if (addr(token) - Locctr(token) <= 0x1111)
			z = 0x300000 + addr(token) - Locctr(token);
		else
			z = 0x500000 + addr(token) - Locctr('BASE');
	}
	else {  // �ε��� ������ �ƴ� ��
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

	int l = 0x000000;  // ���� �ּ�
	
	if (ret1 != NULL)
		return l += 2;  // r�� ������ 2����Ʈ �߰�
	else if (ret2 != NULL)
		return l += 4;  // +�� ������ 4����Ʈ �߰�
	else if (sizeof(buffer) == 4)
		return l += (int)buffer;  // buffer�� ������� ���۸�ŭ ����Ʈ �߰�
	else
		return l += 3;  // �Ϲ����� ��Ȳ�� 3����Ʈ �߰�
	
}

int addr(char* buffer) {  // ��ɾ��� �ּҸ� �޴� �Լ�
	char* buffer[100] = malloc(buffer);

	FILE* fp2 = fopen("c:\\temp\\output.lst", "r");

	while (!feof(fp2)) {
		if (Locctr(buffer) != NULL) {
			char b = fgets(buffer, 100, fp2);
			char* ret5 = strstr(buffer, fp2);
			if (ret5 != NULL) {
				int pos = ftell(fp2);
				fseek(fp2, pos, SEEK_CUR);  // ���� �����͸� �˻��� ���ڿ��� ��ġ�� �ű��.
				b = Locctr(buffer);  // �� ��ġ�� Locctr���� �� ��ȯ�Ѵ�. 
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
			char a = fprintf("%s", buffer + 9);  // �ʿ��� ���븸 ��� 
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
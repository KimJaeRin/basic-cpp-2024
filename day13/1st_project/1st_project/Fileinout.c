/*
       File: Fileinout.c

       Created: 24-03-13
       Author: ���縰
    */


#include <stdio.h>
#include <string.h>
#define MAX_ID_LENGTH 20
#define MAX_PASSWORD_LENGTH 20
int main() {
    char id[MAX_ID_LENGTH];
    char pw[MAX_PASSWORD_LENGTH];
    char stid[MAX_ID_LENGTH];    // ����� ���̵�
    char stpw[MAX_PASSWORD_LENGTH];    // ����� ��й�ȣ

    // ����� ���̵�� ��й�ȣ ����
    strcpy(stid, "hello6234");   // strcpy�� ����� ������ ���ڿ��� ���߿� �����ؾ� �� ���� �ְ�, ����ڷκ��� �Է��� �޴� ��쿡 �ڵ带 �����ϰ� �����ϸ鼭 �������� ���� �� �ֱ� ����
    strcpy(stpw, "rlawofls");
    // ���̵� �Է�
    printf("���̵� �Է��ϼ���: ");
    scanf("%s", id);

    // ��й�ȣ �Է�
    printf("��й�ȣ�� �Է��ϼ���: ");
    scanf("%s", pw);
    // �Էµ� ���̵�� ��й�ȣ�� ����� �Ͱ� ��ġ�ϴ��� Ȯ��
    if (strcmp(id, stid) == 0 && strcmp(pw, stpw) == 0) {   // strcmp() �Լ��� ����Ͽ� �� ���ڿ� ��   // id < stid �� ��� ���� ��ȯ, �ݴ�� ��� ��ȯ, ������ 0�� ��ȯ
        printf("�α��� ����!\n");
        // ���� ����
        FILE* file = fopen("myinfo.txt", "r");     // myinfo ���� �б�
        if (file != NULL) {
            printf("������ �������ϴ�.\n");
            // ���� ���� �б� �� ���� �۾� ����
            fclose(file); // ���� �ݱ�
        }
        else {
            printf("������ �� �� �����ϴ�.\n");
        }
    }
    else {
        printf("���̵� �Ǵ� ��й�ȣ�� ��ġ���� �ʽ��ϴ�.\n");

    }
    return 0;
}





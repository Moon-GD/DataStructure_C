#include<stdio.h>
#include "Member.h"
#include "LinkedList.h"

int main() {
	int ans = 0;
	List list;
	Initialize(&list);
	while (1) {
		printf("(1) �Ӹ��� ��带 ���� (2) ������ ��带 ���� (3) �Ӹ� ��带 ����\n");
		printf("(4) ���� ��带 ���� (5) ������ ��带 ��� (6) ������ ��带 ����\n");
		printf("(7) ��ȣ�� �˻� (8) �̸����� �˻� (9) ��� ��带 ���\n");
		printf("(10) ��� ��带 ���� (0) ���� : ");
		scanf_s("%d", &ans);

		// 0�� �Է¹����� ����
		if (ans == 0) {
			break;
		}
		Member x;
		switch (ans) {
		case 1:
			x = ScanMember("�Ӹ��� ����", MEMBER_NAME | MEMBER_NO);
			InsertFront(&list, &x);
			break;

		case 2:
			x = ScanMember("������ ����", MEMBER_NO | MEMBER_NAME);
			InsertRear(&list, &x);
			break;

		case 3:
			RemoveFront(&list);
			break;

		case 4:
			RemoveRear(&list);
			break;

		case 5:
			PrintLnCurrent(&list);
			break;

		case 6:
			RemoveCurrent(&list);
			break;

		case 7:
			x = ScanMember("�˻�", MEMBER_NO);
			if (Search(&list, &x, MemberNoCmp) != NULL) {
				PrintLnCurrent(&list);
			}
			else {
				printf("�˻��ϴ� ��ȣ�� �����Ͱ� �����ϴ�.\n");
			}
			break;

		case 8:
			x = ScanMember("�˻�", MEMBER_NAME);
			if (Search(&list, &x, MemberNameCmp) != NULL) {
				PrintLnCurrent(&list);
			}
			else {
				printf("�˻��ϴ� �̸��� �����Ͱ� �����ϴ�.\n");
			}
			break;

		case 9:
			Print(&list);
			break;
		}
	}

	Terminate(&list);

	return 0;
}
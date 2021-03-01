#include<stdio.h>
#include "Member.h"
#include "LinkedList.h"

int main() {
	int ans = 0;
	List list;
	Initialize(&list);
	while (1) {
		printf("(1) 머리에 노드를 삽입 (2) 꼬리에 노드를 삽입 (3) 머리 노드를 삭제\n");
		printf("(4) 꼬리 노드를 삭제 (5) 선택한 노드를 출력 (6) 선택한 노드를 삭제\n");
		printf("(7) 번호로 검색 (8) 이름으로 검색 (9) 모든 노드를 출력\n");
		printf("(10) 모든 노드를 삭제 (0) 종료 : ");
		scanf_s("%d", &ans);

		// 0을 입력받으면 종료
		if (ans == 0) {
			break;
		}
		Member x;
		switch (ans) {
		case 1:
			x = ScanMember("머리에 삽입", MEMBER_NAME | MEMBER_NO);
			InsertFront(&list, &x);
			break;

		case 2:
			x = ScanMember("꼬리에 삽입", MEMBER_NO | MEMBER_NAME);
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
			x = ScanMember("검색", MEMBER_NO);
			if (Search(&list, &x, MemberNoCmp) != NULL) {
				PrintLnCurrent(&list);
			}
			else {
				printf("검색하는 번호의 데이터가 없습니다.\n");
			}
			break;

		case 8:
			x = ScanMember("검색", MEMBER_NAME);
			if (Search(&list, &x, MemberNameCmp) != NULL) {
				PrintLnCurrent(&list);
			}
			else {
				printf("검색하는 이름의 데이터가 없습니다.\n");
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
#include <iostream>
using namespace std;

#define ROW 10 // 오전 10시 ~ 오후 8시
#define COL 4  // 월, 화, 수, 목

// 총 19명 (a ~ r) -> 이름 가나다 순  ※ 이성현, 송민규 -> 비상 대기 / 송영근, 정혜진 -> X
// 기존 13 : 강기윤, 김서연, 김지현, 박소연, 박채빈, (소)찬호, 송민규, 이경원, 장서영, 조인철, (주)수현, 천재현, (최)여원 
// 신입 6 : 안준호, 장윤혜, 정유진, 정윤주, 황보효인, 최희승

int 강기윤, 김서연, 김지현, 박소연, 박채빈, 소찬호, 송민규, 이경원, 장서영, 조인철, 주수현, 천재현, 최여원;
int 안준호, 장윤혜, 정유진, 정윤주, 황보효인, 최희승;

// 미래 - 진리 - 자유/정의 순으로 배치 (우선순위)
// 1명씩
string 자유[10] = {};
string 정의[10] = {};
// 2명씩
string 진리_여[3][20] = {};
string 진리_남[3][20] = {};
string 미래_여[3][20] = {};
string 미래_남[3][20] = {};

class PossibleTime {
public:

	string every[ROW][];

	every[0][] = {"김서연", "박채빈", "소찬호", "박소연", "이경원", "정유진", "주수현", "최여원", "황보효인", "장서영"};

};

	// https://kin.naver.com/qna/detail.nhn?d1id=1&dirId=1040101&docId=303730404&qb=6rCI67mE7LSI67Cl&enc=utf8&section=kin.qna&rank=17&search_sort=0&spq=0

void random() {
	// 6명 경우 -> 모두 1명씩
	// 7명 경우 ->
	// 8명 경우 -> 미래 2명씩, 나머지 1명씩
	// 9명 경우 -> 
	// 10명 경우 -> 미래 2명, 진리 2명, 나머지 1명씩 (BEST)
	// 그 이상 -> 남는 인원 그냥 두기

}

void printSchedule() {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			cout << endl;
		}
	}

}

int main() {


	printSchedule();

	return 0;
}

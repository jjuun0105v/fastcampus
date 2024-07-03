#include <iostream>


using namespace std;

// 둘 다 정적변수
// 프로그램이 종료될때 해제
// 프로그램이 실행될 때 한 번 초기화됨
int num;
static int num;

// 여기에 있는애는 프로그램이 종료될 때 자동 해제됨
int *p = new int;

int main()
{
    {
        // 자동 변수, 블록을 벗어나면 해제됨, 블록에 들어올 때마다 초기화
        int num0;

        // 정적 변수, 블록을 벗어나도 해제가 되지 않음. 프로그램 종료 시 해제, 단 한 번 초기화
        // stack/heap과는 다른 data 영역에 저장됨
        static int num1; // int num같은 자동 변수는 stack에 할당됨
    }
    {
        for (int i = 0; i < 10; ++i)
        {
            int num0 = 0;
            ++num0;
            cout << num0 << endl; // 1

            static int num1 = 0;
            ++num1;
            cout << num1 << endl; // 계속 증가
        }

      // 여기서 num1 접근 불가. 지역변수 이기때문에.
    }
    {
        // 동적 공간, 이름이 없다
        int *p = new int;
        delete p; // 수동으로 해제야 함, 안해주면 int 메모리가 할당된 상태로 둥둥 떠다님
        
        // 해당 블록이 벗어날 때 p 자체는 해제가 되지만 p가 가리키는 *p는 해제 되지 않는다.
    }
}

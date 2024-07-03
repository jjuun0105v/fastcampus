extern int x; // 선언이나 정의는 한 번만 되어야함
// x를 여러 파일에서 한 번만 정의해서 쓰고싶을때임
// 그게 아니라 각 파일에서 똑같은 변수이름으로해서 각기 다른 용도로 쓰고싶다면
// static int x; 로 해주면 되는데
// static은 파일 내 scope
int y = 10;

int getX()
{
    return x;
}


int getY()
{
    return y;
}

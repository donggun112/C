#include <stdio.h>
#include <math.h>

int main() {
    int a;
    double x, y, r, theta;

    printf("좌표 변환 프로그램\n");
    printf("1. 직교좌표 -> 극좌표 변환\n");
    printf("2. 극좌표 -> 직교좌표 변환\n");
    printf("번호를 선택하세요 (1 또는 2): ");
    scanf_s("%d", &a);

    if (a == 1) {
        printf("x 좌표를 입력하세요: ");
        scanf_s("%lf", &x);
        printf("y 좌표를 입력하세요: ");
        scanf_s("%lf", &y);

        r = sqrt(x * x + y * y);
        theta = atan2(y, x) * (180.0 / M_PI);
        printf("극좌표: r = %.lf, radian = %.lf 도\n", r, theta);
    }
    else if (a == 2) {
        printf("반지름 r을 입력하세요: ");
        scanf_s("%lf", &r);
        printf("각도를 입력하세요: ");
        scanf_s("%lf", &theta);

        double theta_rad = theta * M_PI / 180.0;
        x = r * cos(theta_rad);
        y = r * sin(theta_rad);

        printf("\n직교좌표: (x = %.lf, y = %.lf)\n", x, y);
    }
    return 0;
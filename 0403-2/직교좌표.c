#include <stdio.h>
#include <math.h>

int main() {
    int a;
    double x, y, r, theta;

    printf("��ǥ ��ȯ ���α׷�\n");
    printf("1. ������ǥ -> ����ǥ ��ȯ\n");
    printf("2. ����ǥ -> ������ǥ ��ȯ\n");
    printf("��ȣ�� �����ϼ��� (1 �Ǵ� 2): ");
    scanf_s("%d", &a);

    if (a == 1) {
        printf("x ��ǥ�� �Է��ϼ���: ");
        scanf_s("%lf", &x);
        printf("y ��ǥ�� �Է��ϼ���: ");
        scanf_s("%lf", &y);

        r = sqrt(x * x + y * y);
        theta = atan2(y, x) * (180.0 / M_PI);
        printf("����ǥ: r = %.lf, radian = %.lf ��\n", r, theta);
    }
    else if (a == 2) {
        printf("������ r�� �Է��ϼ���: ");
        scanf_s("%lf", &r);
        printf("������ �Է��ϼ���: ");
        scanf_s("%lf", &theta);

        double theta_rad = theta * M_PI / 180.0;
        x = r * cos(theta_rad);
        y = r * sin(theta_rad);

        printf("\n������ǥ: (x = %.lf, y = %.lf)\n", x, y);
    }
    return 0;
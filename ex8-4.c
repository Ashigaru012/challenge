#include <stdio.h>
void read_vector3D(double vector[]);
void outer_product3D(double vector1[], double vector2[], double vector3[]);
double inner_product3D(double vector1[], double vector2[]);

int main(void)
{
    double vector1[3];
    double vector2[3];
    double vector3[3];
    printf("ベクトル1の3成分を入力してください\n");
    read_vector3D(vector1);

    printf("ベクトル2の3成分を入力してください\n");
    read_vector3D(vector2);

    printf("2つのベクトルに垂直なベクトル3（外積）は");
    outer_product3D(vector1, vector2, vector3);
    printf("(%.2f,%.2f,%.2f)です\n", vector3[0], vector3[1], vector3[2]);

    printf("\n入力ベクトル1とベクトル3の内積は%.2fです\n", inner_product3D(vector1, vector3));
    printf("入力ベクトル2とベクトル3の内積は%.2fです\n", inner_product3D(vector2, vector3));

    return 0;
}

void read_vector3D(double vector[])
{
    scanf("%lf", &vector[0]);
    scanf("%lf", &vector[1]);
    scanf("%lf", &vector[2]);
}

void outer_product3D(double vector1[], double vector2[], double vector3[])
{
    vector3[0] = vector1[1] * vector2[2] - vector1[2] * vector2[1];
    vector3[1] = vector1[2] * vector2[0] - vector1[0] * vector2[2];
    vector3[2] = vector1[0] * vector2[1] - vector1[1] * vector2[0];
}

double inner_product3D(double vector1[], double vector2[])
{
    return vector1[0] * vector2[0] + vector1[1] * vector2[1] + vector1[2] * vector2[2];
}
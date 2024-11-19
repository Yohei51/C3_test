/*
 * - 長方形の面積を計算 -
 */
#include <stdio.h>
 
int main(void)
{

  /* 長方形の面積 */
  float area;

  /* よこ・たての長さ */
  float length_yoko;
  float length_tate;

  /* よこ・たての長さを入力 */
  printf("長方形のよこの長さを入力: a = ");
  scanf("%f", &length_yoko);
  printf("長方形のたての長さを入力: b = ");
  scanf("%f", &length_tate);

  /* 長方形の面積を計算・出力 */
  area = length_yoko * length_tate;
  printf("長方形の面積: S = %.3f\n", area);
  printf("test\n");
  printf("test4\n");
  printf("\n");

  return 0;
}

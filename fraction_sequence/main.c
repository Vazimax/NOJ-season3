#include <stdio.h>
int main() {

  double numenator[20] = {0};
  double denumenator[20] = {0};


  int t1 = 2, t2 = 3, nextTerm = 0;
  nextTerm = t1 + t2;
  int i = 0;

  while (i < 20) {
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
    numenator[i] = nextTerm;
    i++;
  }

  int x1 = 1, x2 = 2, nextTermx = 0;
  nextTermx = x1 + x2;
  int z = 0;

  while (z < 20) {
    x1 = x2;
    x2 = nextTermx;
    nextTermx = x1 + x2;
    denumenator[z] = nextTermx;
    z++;
  }

  double sum = 0;
  for (int i=0;i<20;i++){
    sum += numenator[i]/denumenator[i];
  }

  printf("%.6f",sum);

  return 0;
}

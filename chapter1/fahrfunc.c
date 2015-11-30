#include <stdio.h>

main()
{
  float fahr;
  int lower, upper, step;

  float fahrtocelc(float f);
  
  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("%3s\t%6s\n", "F", "C");
  while (fahr <= upper) {
    printf("%3.0f\t%6.1f\n", fahr, fahrtocelc(fahr));
    fahr = fahr + step;
  }

}

float fahrtocelc(float f) {
  return (5.0/9.0) * (f-32.0);
}

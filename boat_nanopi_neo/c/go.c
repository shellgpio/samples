#include <wiringPi.h>
#include <softPwm.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argv[]){
  if(argc<8){
    printf("\n");
    printf(argv[0]);
    printf(" pin1 pwm1 pin2 pwm2 pin3 pwm3 pin4 pwm4\n");
    printf(" pwm[0~100]\n");
    printf("\n");
    exit(-1);
  }
  int pin_1 = atoi(argv[1]);
  int pwm_1 = atoi(argv[2]);
  int pin_2 = atoi(argv[3]);
  int pwm_2 = atoi(argv[4]);
  int pin_3 = atoi(argv[5]);
  int pwm_3 = atoi(argv[6]);
  int pin_4 = atoi(argv[7]);
  int pwm_4 = atoi(argv[8]);

  if(-1==wiringPiSetup()){
    printf("setup err");
    exit(-1);
  }
  softPwmCreate(pin_1,0,100);
  softPwmCreate(pin_2,0,100);
  softPwmCreate(pin_3,0,100);
  softPwmCreate(pin_4,0,100);
  while (1){
    softPwmWrite(pin_1, pwm_1);
    softPwmWrite(pin_2, pwm_2);
    softPwmWrite(pin_3, pwm_3);
    softPwmWrite(pin_4, pwm_4);
    delay(1);
  }
  return 0;
}

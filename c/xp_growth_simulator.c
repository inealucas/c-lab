#include <stdio.h>
#include <math.h>

int main (){

  double BaseXP = 0.0;
  double Growrate = 0.0;
  int level = 0;
  int cyclesPerLevel = 0;
  double FinalXP = 0.0;



printf("Base XP: ");
scanf("%lf", &BaseXP);

printf("Growth Rate (%%): ");
scanf("%lf", &Growrate);
Growrate = Growrate / 100;

printf("Levels: ");
scanf("%d", &level);

printf("Cycles per Level: ");
scanf("%d", &cyclesPerLevel);

FinalXP = BaseXP * (1 + Growrate * cyclesPerLevel * level);

printf("Your total XP is: %.2lf", FinalXP);




    return 0;
}
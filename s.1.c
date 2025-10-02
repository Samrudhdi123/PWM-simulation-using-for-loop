#include <stdio.h>

int main() 
{
    int dutyCycle;      // Duty cycle in percentage (0 to 100)
  
  int period = 20;    // Total number of pulses in one PWM cycle
  
  int onPulses, offPulses;

    printf("Enter duty cycle (0-100%%): ");
    scanf("%d", &dutyCycle);

    if(dutyCycle < 0 || dutyCycle > 100) {
        printf("Invalid duty cycle!
");
        return 1;
    }

    onPulses = (dutyCycle * period) / 100;
    offPulses = period - onPulses;

    printf("PWM cycle simulation:
");

    for(int i = 0; i < onPulses; i++) {
        printf("#");  // ON pulse
    }

    for(int i = 0; i < offPulses; i++) {
        printf("-");  // OFF pulse
    }

    printf("
");

    return 0;
}

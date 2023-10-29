#include <stdio.h>
#include<math.h>
int main() {
	start:
    int choice;
    printf("\t \t WELCOME TO SMART CALCULATOR!!\n");
    printf("Smart Calculator can do a variety of mathematical operations\n ");
    printf("Here are the operations:\n");
    printf("1. Addition \n2. Subtraction \n3. Multiplication \n4. Division (Quotient) \n5. Exponential \n6. Factorial \n7. Natural Logarithm \n8. Common Logaritm \n9. Square Root \n10. Sine");
    printf("\n11. Cosine \n12. Tan \n13. Cosec \n14. Secant \n15. Cot \n16. Simple Interest \n17. Compound Interest \n18. EMI Calculator \n19. FV Annuity Immediate \n20. PV Annuity Immediate ");
    printf("\n\nEnter the number of the operation: ");
    scanf("%d", &choice);

   if (choice==1)
   {
	int num_of_integers1, i1, num1, sum1 = 0;

    printf("Enter the number of integers to add: ");
    scanf("%d", &num_of_integers1);

    if (num_of_integers1 <= 0) {
        printf("Please enter a positive number of integers.\n");
        return 1; 
    }

    printf("Enter %d integers:\n", num_of_integers1);
    for (i1 = 0; i1 < num_of_integers1; i1++) {
        scanf("%d", &num1);
        sum1 += num1;
    }

    printf("The sum of the %d integers is: %d\n", num_of_integers1, sum1);

    return 0;
}
   else if (choice==2)
   {
   	int num_of_integers2, num2, difference2;

    printf("Enter the number of integers to subtract: ");
    scanf("%d", &num_of_integers2);

    if (num_of_integers2 <= 0) {
        printf("Please enter a positive number of integers.\n");
        return 1; 
    }

    printf("Enter integer 1: ");
    scanf("%d", &difference2);

    for (int i2 = 2; i2 <= num_of_integers2; i2++) {
        printf("Enter integer %d: ", i2);
        scanf("%d", &num2);
        difference2 -= num2;
    }

    printf("The difference of the %d integers is: %d\n", num_of_integers2, difference2);

   }
    
   else if (choice==3)
   {
   	 int num_of_integers3, num3, product3 =1;
    printf("Enter the number of integers to multiply: ");
    scanf("%d", &num_of_integers3);

    if (num_of_integers3 <= 0) {
        printf("Please enter a positive number of integers.\n");
        return 1; 
    }

    for (int i3 = 1; i3 <= num_of_integers3; i3++) {
        printf("Enter integer %d: ", i3);
        scanf("%d", &num3);
        product3 *= num3; 
    }

    printf("The product of the %d integers is: %d\n", num_of_integers3, product3);
   }
   
   else if (choice==4)
   {
   	int a4,b4,quotient4;
   	printf("Enter the dividend:");
   	scanf("%d",&a4);
   	printf("Enter the divisor:");
   	scanf("%d",&b4);
   	quotient4=a4/b4;
   	printf("The Quotient is: %d",quotient4);
   }
   
   else if (choice==5)
   {
   	double base5, exponent5, result5;

    printf("Enter the base: ");
    scanf("%lf", &base5);

    printf("Enter the exponent: ");
    scanf("%lf", &exponent5);

    result5 = pow(base5, exponent5);

    printf("The result of %.2lf raised to the power of %.2lf is %.2lf\n", base5, exponent5, result5);
   	
   }
   
   else if (choice==6)
   {
   	int number6;
    double factorial6 = 1; 

    printf("Enter a positive integer: ");
    scanf("%d", &number6);

    if (number6 < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {

        for (int i6 = 1; i6 <= number6; i6++) {
            factorial6 *= i6;
        }

        printf("Factorial of %d is %lf\n", number6, factorial6);
    }

   
   
}
   else if (choice==7)
   {
   	 double number7, result7;

    printf("Enter a positive number: ");
    scanf("%lf", &number7);

    if (number7 <= 0) {
        printf("Logarithm is not defined for non-positive numbers.\n");
    } else {

        result7 = log(number7);

        printf("The natural logarithm of %.2lf is %.2lf\n", number7, result7);
    }
   }
   
   else if(choice==8)
   {
   	 double number8, result8;

    printf("Enter a positive number: ");
    scanf("%lf", &number8);

    if (number8 <= 0) {
        printf("Logarithm is not defined for non-positive numbers.\n");
    } else {

        result8 = log10(number8);

        printf("The common logarithm (base 10) of %.2lf is %.2lf\n", number8, result8);
    }
   }
   
   else if(choice==9)
   {
   	    double number9, result9;

    printf("Enter a non-negative number: ");
    scanf("%lf", &number9);

    if (number9 < 0) {
        printf("Square root is not defined for negative numbers.\n");
    } else {

        result9 = sqrt(number9);

        printf("The square root of %.2lf is %.2lf\n", number9, result9);

   }
}

   else if (choice==10)
   { 
       double angle_degrees10, angle_radians10, result10;

    printf("Enter an angle in degrees: ");
    scanf("%lf", &angle_degrees10);

    angle_radians10 = angle_degrees10 * (M_PI / 180.0);  

    result10 = sin(angle_radians10);

    printf("The sine of %.2lf degrees is %.2lf\n", angle_degrees10, result10);

   }
   
   else if (choice==11)
   {
   	  double angle_degrees11, angle_radians11, result11;

    printf("Enter an angle in degrees: ");
    scanf("%lf", &angle_degrees11);

    angle_radians11 = angle_degrees11 * (M_PI / 180.0);  

    result11 = cos(angle_radians11);

    printf("The cosine of %.2lf degrees is %.2lf\n", angle_degrees11, result11);
   }
   
      else if (choice==12)
   {
   	  double angle_degrees12, angle_radians12, result12;

    printf("Enter an angle in degrees: ");
    scanf("%lf", &angle_degrees12);

    angle_radians12 = angle_degrees12 * (M_PI / 180.0);  

    result12 = tan(angle_radians12);

    printf("The tan of %.2lf degrees is %.2lf\n", angle_degrees12, result12);
   }
   
      else if (choice==13)
   {
   	  double angle_degrees13, angle_radians13, result13;

    printf("Enter an angle in degrees: ");
    scanf("%lf", &angle_degrees13);

    angle_radians13 = angle_degrees13 * (M_PI / 180.0);  

    result13 = 1/sin(angle_radians13);

    printf("The cosecant of %.2lf degrees is %.2lf\n", angle_degrees13, result13);
   }
   
   else if (choice==14)
   {
   	  double angle_degrees14, angle_radians14, result14;

    printf("Enter an angle in degrees: ");
    scanf("%lf", &angle_degrees14);

    angle_radians14 = angle_degrees14 * (M_PI / 180.0);  

    result14 = 1/cos(angle_radians14);

    printf("The secant of %.2lf degrees is %.2lf\n", angle_degrees14, result14);
   }
   
      else if (choice==15)
   {
   	  double angle_degrees15, angle_radians15, result15;

    printf("Enter an angle in degrees: ");
    scanf("%lf", &angle_degrees15);

    angle_radians15 = angle_degrees15 * (M_PI / 180.0);  

    result15 = 1/tan(angle_radians15);

    printf("The cot of %.2lf degrees is %.2lf\n", angle_degrees15, result15);
   }
   
   else if (choice==16)
   {
   	 double principal16, rate16, time16, simple_interest16;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal16);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%lf", &rate16);

    printf("Enter the time period (in years): ");
    scanf("%lf", &time16);

    simple_interest16 = (principal16 * rate16 * time16) / 100.0;

    printf("Simple Interest: %.2lf\n", simple_interest16);
   }
   
   else if (choice==17)
   {
   	 double principal17, rate17, time17, compound_interest17;
    int frequency17;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal17);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate17);

    printf("Enter the time period in years: ");
    scanf("%lf", &time17);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &frequency17);

    compound_interest17 = principal17 * pow(1 + rate17 / (frequency17 * 100), frequency17 * time17) - principal17;

    printf("Compound Interest: %.2lf\n", compound_interest17);
   }
   
   else if(choice==18)
   {
   	double principal18, annual_roi18, monthly_roi18, emi18;
    int no_of_months18;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal18);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &annual_roi18);

    printf("Enter the loan tenure in months: ");
    scanf("%d", &no_of_months18);

    monthly_roi18 = (annual_roi18 / 12.0) / 100.0;

    emi18 = principal18 * monthly_roi18 * pow(1 + monthly_roi18, no_of_months18) /
          (pow(1 + monthly_roi18, no_of_months18) - 1);

    printf("Monthly EMI: %.2lf\n", emi18);
   }
   
   else if(choice==19)
   {
   	 double a19,roi19,no_of_periods19,fv19;
   	 
   	 printf("Enter the value of annuity: ");
   	 scanf("%lf",&a19);
   	 
   	 printf("Enter the value of rate of interest in decimal (For eg, 5 percent is 0.05): ");
   	 scanf("%lf",&roi19);
   	 
   	 
   	 printf("Enter the number of time periods: ");
   	 scanf("%lf",&no_of_periods19);
   	 
   	 fv19=(pow(1+roi19,no_of_periods19)-1)*a19/roi19;
   	 
   	 printf("The Future Value of the Annuity Immediate is : %.2lf",fv19);
   }
   
   else if(choice==20)
   {
   	 double a20,roi20,no_of_periods20,pv20;
   	 
   	 printf("Enter the value of annuity: ");
   	 scanf("%lf",&a20);
   	 
   	 printf("Enter the value of rate of interest in decimal (For eg, 5 percent is 0.05): ");
   	 scanf("%lf",&roi20);
   	 
   	 printf("Enter the number of time periods: ");
   	 scanf("%lf",&no_of_periods20);
   	 
   	 pv20=((pow(1+roi20,no_of_periods20)-1)/pow(1+roi20,no_of_periods20))*a20/roi20;
   	 
   	 printf("The Future Value of the Annuity Immediate is : %.2lf",pv20);
   }
    else printf("\nInvalid number entered. Enter only integers from 1 to 20.\n");
    goto start;
}



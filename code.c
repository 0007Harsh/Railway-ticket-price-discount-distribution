#include <stdio.h>
void main() {
    float dist,age,tkt,fin_tkt;
    printf("Enter Distance (5 rs per KM):  ");
    scanf("%f",&dist);
    tkt=dist*5;
    printf("Enter Age: ");
    scanf("%f",&age);
    if(age<=5){
        fin_tkt=0;
        printf("Original Price: %f \n",tkt);
        printf("Final Price: %f",fin_tkt);
    } 
    else if(age>5 && age<=15){
        fin_tkt= tkt/2;
        printf("Original Price: %f \n",tkt);
        printf("Final Price: %f",fin_tkt);
    }
    else if(age>15 && age<=60){
        fin_tkt=tkt;
        printf("Original Price: %f \n",tkt);
        printf("Final Price: %f",fin_tkt);
    }
    else if(age>60 && age<=110){
        fin_tkt=(60*tkt)/100;
        printf("Original Price: %f \n",tkt);
        printf("Final Price: %f",fin_tkt);
    }
    else{
        printf("Invaid age");
    }
    
}

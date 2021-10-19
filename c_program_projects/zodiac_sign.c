#include <stdio.h>

int main()
{
    int month, day, menu, error;
    int ctr;
    int run, run1 = 0;
    char name[50];
    printf("\n\n\t\t********** WELCOME **********\n");
MENU:
    printf("\n\tThis MENU \n");
    printf("For checking your zodiac sign\nPRESS \n(1) for checking\n (2) for EXIT\n: ");
    scanf("%d", &menu);
    switch (menu)
    {
    case 1:
        printf("You have selected to check your zodiac sign\n");

        break;
    case 2:
        printf("You have exited from the menu\n");
        break;
    default:
        printf("\t\t***ERROR***");
        printf("You have selected wrong option\n RETRY\n");
        goto MENU;

        break;
    }
    if (menu == 1)
    {
        printf("Enter your name :\n");
        scanf("%s", name);
        printf("ENTER your birth day(date)\n:");
        scanf("%d", &day);
        printf("ENTER your birth month (number)\n:");
        scanf("%d", &month);
    }
    if ((month <= 12 && month > 0) && (day <= 31 && day > 0))
    {
        ctr = 1;
    }
    else
    {
        printf("\n\t\t****ERROR****\n");
        // printf("\tYou have entered wrong details\n");
        //printf("IF you want to retry \n\t PRESS (1)- for retry,\n(0)-for anyway exit\n");
        //scanf("%d",&error);
        //if(error ==1){
        //  goto MENU;
        ctr = 0;
    }

    while (ctr == 1)
    {
        if (month == 3 && day >= 21 || month == 4 && day <= 19)
        {
            printf("\t\n%s : ***'ARIES'*** is your zodiac sign\n", name);
            printf("(March 21 - April 19)is within which this zodiac sign lies\n");
            printf("Symbol: The Ram \n Ruling Planet: Mars\n");
            printf("Key Traits: Competitive, energetic, impulsive, fearless\n");
        }
        if (month == 4 && day >= 20 || month == 5 && day <= 20)
        {
            printf("\t\n%s : ***'TAURUS'*** is your zodiac sign\n", name);
            printf("(April 20 - May 20)is within which this zodiac sign lies\n");
            printf("Symbol: The Bull  \n Ruling Planet: Venus");
            printf("Key Traits: Resolute, grounded, tenacious, sensual\n");
        }
        if (month == 5 && day >= 21 || month == 6 && day <= 20)
        {
            printf("\t\n%s : ***'GEMINI'*** is your zodiac sign\n", name);
            printf("(May 21- June 20)is within which this zodiac sign lies\n");
            printf("Symbol: The Twins \n Ruling Planet: Mercury\n");
            printf("Key Traits: Witty, curious, charming, flighty\n");
        }
        if (month == 6 && day >= 21 || month == 7 && day <= 22)
        {
            printf("\t\n%s : ***'CANCER'*** is your zodiac sign\n", name);
            printf("(June 21 - July 22)is within which this zodiac sign lies\n");
            printf("Symbol: The Crab \n Ruling Planet: Moon\n");
            printf("Key Traits: Compassionate, giving, sentimental, nurturing\n");
        }
        if (month == 7 && day >= 23 || month == 8 && day <= 22)
        {
            printf("\t\n%s : ***'LEO'*** is your zodiac sign\n", name);
            printf("(July 23 - August 22)is within which this zodiac sign lies\n");
            printf("Symbol: The Lion \n Ruling Planet: Sun\n");
            printf("Key Traits: Charismatic, generous, optimistic, dramatic\n");
        }
        if (month == 8 && day >= 23 || month == 9 && day <= 22)
        {
            printf("\t\n%s : ***'VIRGO'*** is your zodiac sign\n", name);
            printf("(July 23 - August 22)is within which this zodiac sign lies\n");
            printf("Symbol: The Virgin or Maiden \n Ruling Planet: Mercury\n");
            printf("Key Traits: Health-conscious, analytical, service-oriented, detail-focused\n");
        }
        if (month == 9 && day >= 23 || month == 10 && day <= 22)
        {
            printf("\t\n%s : ***'LIBRA'*** is your zodiac sign\n", name);
            printf("(September 23 - October 22)is within which this zodiac sign lies\n");
            printf("Symbol: The Scales \n Ruling Planet: Venus\n");
            printf("Key Traits: Romantic, artistic, indecisive, diplomatic\n");
        }
        if (month == 10 && day >= 23 || month == 11 && day <= 21)
        {
            printf("\t\n%s : ***'SCORPIO'*** is your zodiac sign\n", name);
            printf("(October 23 - November 21)is within which this zodiac sign lies\n");
            printf("Symbol: The Scorpion \n Ruling Planets: Pluto and Mars\n");
            printf("Key Traits: Mysterious, magnetic, power-seeking, spiritual\n");
        }
        if (month == 11 && day >= 22 || month == 12 && day <= 21)
        {
            printf("\t\n%s : ***'SAGITTARIUS'*** is your zodiac sign\n", name);
            printf("(November 22 - December 21)is within which this zodiac sign lies\n");
            printf("Symbol: The Archer \n Ruling Planet: Jupiter\n");
            printf("Key Traits: Philosophical, free-spirited, unfiltered, wanderlusting\n");
        }
        if (month == 12 && day >= 22 || month == 1 && day <= 19)
        {
            printf("\t\n%s : ***'CAPRICON'*** is your zodiac sign\n", name);
            printf("(December 22 - January 19)is within which this zodiac sign lies\n");
            printf("Symbol: The Goat \n Ruling Planet: Saturn\n");
            printf("Key Traits: Traditional, down-to-earth, industrious, disciplined \n");
        }
        if (month == 1 && day >= 20 || month == 2 && day <= 18)
        {
            printf("\t\n%s : ***'AQUARIUS'*** is your zodiac sign\n", name);
            printf("(January 20 - February 18)is within which this zodiac sign lies\n");
            printf("Symbol: The Water Bearer \n Ruling Planet: Uranus\n");
            printf("Key Traits: Humanitarian, eccentric, individualistic, cool\n");
        }
        if (month == 2 && day >= 19 || month == 3 && day <= 20)
        {
            printf("\t\n%s : ***'PISCES'*** is your zodiac sign\n", name);
            printf("(February 19 - March 20)is within which this zodiac sign lies\n");
            printf("Symbol: The Fish \n Ruling Planets: Neptune\n");
            printf("Key Traits: Empathic, artistic, psychic, dreamy\n");
        }
        break;
    }
    printf(" \n\t\t THANKYOU!  %s\n ", name);
    printf("\n\tIF you want again check your zodiac sign\n");
    printf("\nThen PRESS:(1) for again try \n(2) for exit\n:");
    scanf("%d", &run);
    if (run == 1)
    {
        goto MENU;
    }
    else
    {
        printf("\n\t\t THANKYOU\n");
    }
    printf("\n\n\t\t\t-----------------------*************-------------------BY Radhe\n");
    return 0;
}

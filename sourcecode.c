#include<stdio.h>
int main()
{
    printf("Select: V.velur or K.karur-");
    char a[20];
    scanf("%s",&a);
    for(int i=0;a[i];i++)
    {
        char d=a[i];
    }
    if(a[0] == 'V' || a[0] == 'v')
    {
        char b[20];
        printf("Select: A.shiva or B.abirami-");
        scanf("%s",&b);
        for(int i=0;b[i];i++)
        {
            char d=b[i];
        }
        if(b[0] == 'A')
        {
            printf("4K Projection with AC");
            printf("\n1.Movie:joe...Timing-10:00am");
            printf("\n2.Movie:leo...Timing-2:00pm");
            printf("\n3.Movie:Jigarthanda 2...Timing-9:00pm");
            char c[20];
            printf("\nselect 1,2,3 for movie:");
            scanf("%s",&c);
            int C=1;
            if(C==1)
            {
                int d;
                printf("\nRs:150 per Ticket");
                printf("\nEnter your seat no:");
                scanf("%d",&d);
                if(d>50)
                {
                    printf("\nYes Available..");
                    printf("\n\n\n*THANK YOU VISIT AGAIN*");
                }
                else
                {
                    printf("Sorry it's Not Available");
                    printf("\n\n\n*THANK YOU VISIT AGAIN*");
                }
            }
        }
        else //if(b[j] == 'B')
        {
            printf("4K Projection and JBL sound bar");
            printf("\n1.Movie:Padmini...Timing-10:00am");
            printf("\n2.Movie:Parking...Timing-2:00pm");
            printf("\n3.Movie:Rangoli...Timing-9:00pm");
            char c[20];
            printf("\nselect 1,2,3 for movie:");
            scanf("%s",&c);
            int C=1;
            
            if(C==1)
            {
                int d;
                printf("\nRs:140 per Ticket");
                printf("\nEnter your seat no:");
                scanf("%d",&d);
                if(d<50)
                {
                    printf("\nYes Available..");
                    printf("\n\n\n*THANK YOU VISIT AGAIN*");
                }
                else
                {
                    printf("Sorry it's Not Available");
                    printf("\n\n\n*THANK YOU VISIT AGAIN*");
                }
            }
        }
    }
else
{
    char b[20];
    printf("Select: A.Ajantha Ellora or B.Thinnapa or C.Kalaiarangam-");
    scanf("%s",&b);
    for(int i=0;b[i];i++)
    {
        char d=b[i];
    }
    if(b[0] == 'A')
    {
        printf("4K Projection with AC and JBL Sound Bars");
        printf("\n1.Movie:Fight Club...Timing-10:00am");
        printf("\n2.Movie:Parking...Timing-2:00pm");
        printf("\n3.Movie:Conjuring Kannappan...Timing-9:00pm");
        char c[20];
        printf("\nselect 1,2,3 for movie:");
        scanf("%s",&c);
        int C=1;
        if(C==1)
        {
            int d;
            printf("\nRs:200 per Ticket");
            printf("\nEnter your seat no:");
            scanf("%d",&d);
            if(d>50)
            {
                printf("\nYes Available..");
                printf("\n\n\n*THANK YOU VISIT AGAIN*");
            }
            else
            {
                printf("Sorry it's Not Available");
                printf("\n\n\n*THANK YOU VISIT AGAIN*");
            }
            
        }
    }
    //for(int i=0;b[i];i++)
    //{x
    //    char d=b[i];
    //}
    else if(b[0] == 'B')
    {
        printf("4K Projection Apics");
        printf("\n1.Movie:Aalambana...Timing-10:00am");
        printf("\n2.Movie:Aalambana...Timing-2:00pm");
        printf("\n3.Movie:Aalambana...Timing-9:00pm");
        char c[20];
        printf("\nselect 1,2,3 for movie:");
        scanf("%s",&c);
        int C=1;
        if(C==1)
        {
            int d;
            printf("\nRs:180 per Ticket");
            printf("\nEnter your seat no:");
            scanf("%d",&d);
            if(d>50)
            {
                printf("\nYes Available..");
                printf("\n\n\n*THANK YOU VISIT AGAIN*");
                
            }
            else
            {
                printf("Sorry it's Not Available");
                printf("\n\n\n*THANK YOU VISIT AGAIN*");
            }
            
        }
    }
    //for(int i=0;b[i];i++)
    //{
    //    char d=b[i];
    //}
    else //if(b[3] == 'C')
    {
        printf("Apics and Pushback Seats with AC");
        printf("\n1.Movie:Kannagi...Timing-10:00am");
        printf("\n2.Movie:Kannagi...Timing-2:00pm");
        printf("\n3.Movie:Kannagi...Timing-9:00pm");
        char c[20];
        printf("\nselect 1,2,3 for movie:");
        scanf("%s",&c);
        int C=1;
        if(C==1)
        {
            int d;
            printf("\nRs:160 per Ticket");
            printf("\nEnter your seat no:");
            scanf("%d",&d);
            if(d>50)
            {
                printf("\nYes Available..");
                printf("\n\n\n*THANK YOU VISIT AGAIN*");
                
            }
            else
            {
                printf("Sorry it's Not Available");
                printf("\n\n\n*THANK YOU VISIT AGAIN*");
            }
            
        }
    }
}
}

#include<stdio.h>


struct batsman
 {
   char name[25];
   int runs,score,balls,toruns,tobal,ones,twos,threes,fours,sixes;
   float str;

 }pl1[100],pl3;


struct bowler
 {
   char name[25];
   int runsgv,wkttkn,overs;
   float econ;
 }pl2[100],pl4;


int main()
{
 int plno,choice;
  int i,n,m;
  printf("Enter the Batsman detail:\n");
  printf("Enter the number of batsman:\n");
  scanf("%d",&m);
  for(i=0;i<m;i++)
   {

       printf("Enter name of batsman%d:\n",i+1);
       scanf("%s",pl1[i].name);


       printf("Enter the number of ones scored by player%d:\n ",i+1);
       scanf("%d",&pl1[i].ones);


       printf("Enter the number of twos scored by player%d:\n ",i+1);
       scanf("%d",&pl1[i].twos);


       printf("Enter the number of threes scored by player%d:\n ",i+1);
       scanf("%d",&pl1[i].threes);


       printf("Enter the number of fours scored by player%d:\n ",i+1);
       scanf("%d",&pl1[i].fours);


       printf("Enter the number of sixes scored by player%d:\n ",i+1);
       scanf("%d",&pl1[i].sixes);


       printf("Enter the balls played by the player%d:\n",i+1);
       scanf("%d",&pl1[i].balls);
   }



   printf("\nEnter the bowlers details:\n");

   printf("Enter the number of bowlers:\n");

   scanf("%d",&n);


   for(i=0;i<n;i++)
   {

       printf("\nEnter name of bowler%d:",i+1);
       scanf("%s",pl2[i].name);


       printf("Enter the runs given by the bowler%d:\n ",i+1);
       scanf("%d",&pl2[i].runsgv);


       printf("Enter the overs bowled by the bowler%d:\n",i+1);
       scanf("%d",&pl2[i].overs);


       printf("Enter the wickets taken by the bowler%d\n",i+1);
       scanf("%d",&pl2[i].wkttkn);

   }

   printf("Thank you all details are recorded\n");


   do
    {

       printf("Enter the choice:\n 1)Match summary:\n 2)Exit\n ");
       scanf("%d",&choice);

     switch(choice)
      {


        case 1:
              printf("                     Match summary\n");
              printf("==========================================================================\n");
              printf(" Batsman        runs           balls        fours       sixes         sr   \n");
              printf("==========================================================================\n");

              for(i=0;i<1;i++)
                {
                    pl1[i].runs=(1*pl1[i].ones)+(2*pl1[i].twos)+(3*pl1[i].threes)+(4*pl1[i].fours)+(6*pl1[i].sixes);
                    pl3.toruns+=pl1[i].runs;
                    pl1[i].str=(pl1[i].runs*100.00)/pl1[i].balls;
                    printf(" %-15s %-14d %-13d %-11d %-11d %-9.2f\n\n",pl1[i].name,pl1[i].runs,pl1[i].balls,pl1[i].fours,pl1[i].sixes,pl1[i].str);
                }
                printf("TOTAL RUNS:%d\n\n",pl3.toruns);
              printf("\n\n");
              printf("=================================================================\n");
              printf(" Bowler        overs           runs        wicket       economy\n");
              printf("=================================================================\n");

               for(i=0;i<n;i++)
               {   pl2[i].econ=pl2[i].runsgv/pl2[i].overs;
                   printf(" %-15s %-14d %-13d %-11d %-11.2f\n\n\n",pl2[i].name,pl2[i].overs,pl2[i].runsgv,pl2[i].wkttkn,pl2[i].econ);
               }


               break;




        case 2:
            exit(1);

        default:
             printf("Enter the correct choice\n");
             break;

      }

    }while(choice!=2);


   return 0;

}

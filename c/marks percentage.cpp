#include<stdio.h>
main()
{
float math,physics,chemistry,hindi,english,totalmarks,sciencemarks,percentage;
printf("ENTER MARKS OBTAINED IN MATHEMATICS");
scanf("%f",&math);
printf("ENTER MARKS OBTAINED IN PHYSICS");
scanf("%f",&physics);
printf("ENTER MARKS OBTAINED IN CHEMISTRY");
scanf("%f",&chemistry);
printf("ENTER MARKS OBTAINED IN HINDI");
scanf("%f",&hindi);
printf("ENTER MARKS OBTAINED IN ENGLISH");
scanf("%f",&english);
totalmarks=math+physics+chemistry+hindi+english;
sciencemarks=math+physics+chemistry;
percentage=(totalmarks/500)*100;
printf("\nYOUR TOTAL MARKS OBTAINED IS: %f",totalmarks);
printf("\nYOUR MARKS OBTAINED IN SCIENCE IS %f:",sciencemarks);
printf("\nYOUR PERCENTAGE OF TOTAL MARKS IS: %f",percentage);
}


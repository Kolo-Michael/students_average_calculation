#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ma1,ma2,en1,en2,ph1,ph2,ch1,ch2;
    printf("Welcome to this program to calculate two students` results\n");
    printf("Please enter student 1's marks in the following: \n Maths: ");
    scanf("%d",&ma1);
    if(ma1<20){
    int ma1r=ma1/20*100;
    printf("English: ");
    scanf("%d",&en1);
    printf("Physics: ");
    scanf("%d",&ph1);
    printf("Chemistry: ");
    scanf("%d",&ch1);
    int stud1=ma1+en1+ph1+ch1;
    float Av1=stud1/4;
    printf("\nThanhs\n");
    printf("Please enter student 2's marks in the following: \n Maths: ");
    scanf("%d",&ma2);
    printf("English: ");
    scanf("%d",&en2);
    printf("Physics: ");
    scanf("%d",&ph2);
    printf("Chemistry: ");
    scanf("%d",&ch2);
    int stud2=(ma2+en2+ph2+ch2);
    float Av2=(stud2/4);

    printf("Results can be seen below\n");

    for(int i=1; i<2; i++){

    if(stud1>stud2){
        printf("|Students position |Subjects          |Average    \n");
        printf("|__________________|__________________|___________\n");
        printf("|student 1         |Maths|%d|         |           \n",ma1);
        printf("|                  |English|%d|       |           \n",en1);
        printf("|                  |physics|%d|       |           \n",ph1);
        printf("|                  |Chemistry|%d|     |           \n",ch1);
        printf("|Total marks       |                  ||%d|       \n",stud1);
        printf("|Average           |                  ||%f|       \n",Av1);
        printf("|__________________|__________________|___________\n");
        printf("|Students position |Subjects          |Average    \n");
        printf("|__________________|__________________|___________\n");
        printf("|student 2         |Maths|%d|         |           \n",ma2);
        printf("|                  |English|%d|       |           \n",en2);
        printf("|                  |physics|%d|       |           \n",ph2);
        printf("|                  |Chemistry|%d|     |           \n",ch2);
        printf("|Total marks       |                  ||%d|       \n",stud2);
        printf("|Average           |                  ||%f|       \n",Av2);
        printf("|__________________|__________________|___________\n");
    } else if(stud2>stud1){
        printf("|Students position |Subjects          |Average       \n");
        printf("|__________________|__________________|______________\n");
        printf("|student 2         |Maths|%d|         |              \n",ma2);
        printf("|                  |English|%d|       |              \n",en2);
        printf("|                  |physics|%d|       |              \n",ph2);
        printf("|                  |Chemistry|%d|     |              \n",ch2);
        printf("|Total marks       |                  ||%d|          \n",stud2);
        printf("|Average           |                  ||%f|          \n",Av2);
        printf("|__________________|__________________|______________\n");
        printf("|Students position |Subjects          |Average       \n");
        printf("|__________________|__________________|______________\n");
        printf("|student 1         |Maths|%d|         |              \n",ma1);
        printf("|                  |English|%d|       |              \n",en1);
        printf("|                  |physics|%d|       |              \n",ph1);
        printf("|                  |Chemistry|%d|     |              \n",ch1);
        printf("|Total marks       |                  ||%d|          \n",stud1);
        printf("|Average           |                  ||%f|          \n",Av1);
        printf("|__________________|__________________|______________\n");
    } else{
    printf("\nInaccurate information");
    }
    }
    } else{
      printf("Wrong range marks must be below 20");
    }

    return 0;
}

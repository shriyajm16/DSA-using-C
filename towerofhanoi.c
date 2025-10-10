#include <stdio.h>
#include <stdlib.h>

void towerofhanoi(int n,char source,char temp,char destination)
{
    if(n==1)
    {
        printf("Move disc 1 from %c -> %c\n",source,destination);
        return;
    }
    towerofhanoi(n-1,source,destination,temp);
    printf("Move disc %d from %c -> %c\n",n,source,destination);
    towerofhanoi(n-1,temp,source,destination);
}
int main()
{
    int n;
    printf("Enter number of disc : ");
    scanf("%d",&n);
    printf("\n Sequence of moves : \n");
    towerofhanoi(n,'S','T','D');
     int totalMoves = ( 1 << n) - 1;
    printf("\n Total number of moves = %d\n",totalMoves);
    return 0;
}

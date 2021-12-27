#include <stdio.h>


int main()
{
    int nm1,nm2,nm3,nm4;
    int id1,id2,id3,id4;
    scanf("%d.%d.%d.%d",&nm1,&nm2,&nm3,&nm4);
    scanf("%d.%d.%d.%d",&id1,&id2,&id3,&id4);
    printf("%d.%d.%d.%d",nm1&id1,nm2&id2,nm3&id3,nm4&id4);
}

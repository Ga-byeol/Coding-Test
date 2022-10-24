#include<stdio.h>

main()
{
    int n,team,mm,ss,win=0,bwin=0;
    scanf("%d",&n);
    int score[3]={0},wint[3]={0},sec[3]={0};
    for(int i=0;i<n;i++)
    {
        scanf("%d %d:%d",&team,&mm,&ss);
        score[team]++;
        if(score[1]>score[2]) win=1;
        else if(score[1]<score[2]) win=2;
        else if(score[1]==score[2]) win=0;
        ss+=mm*60;
        if(win==1&&bwin!=1)
        {   
            sec[1]=ss;
            bwin=1;
        }
        else if(win==2&&bwin!=2)
        {
            sec[2]=ss;
            bwin=2;
        }
        if(win==0&&bwin!=0)
        {
            wint[bwin]+=ss-sec[bwin];
            bwin=0;
        }
    }
    wint[win]+=2880-sec[win];
    
    printf("%02d:%02d\n%02d:%02d",wint[1]/60,wint[1]%60,wint[2]/60,wint[2]%60);
}
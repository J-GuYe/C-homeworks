#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多
    吃了一个第二天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天
    剩下的一半零一个。到第 10 天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少.
    int peach = 1,i = 10;
    while(i > 1)
    {
        peach = (peach + 1) * 2;
        i--;
        printf("第%d天的桃子数量为%d\n\n",i,peach);
    }
    printf("第一天的桃子数量为%d\n",peach);*/





    /*编写一个程序，根据输入某个班级学员的成绩，计算该班学员的平均成绩。班级的人数要求用户输入。根据输入的人数，分别录入学员的成绩。
    //最后询问用户是否继续，直到用户自己确定要结束程序退出
    int population,i = 1;
    double grade,sum = 0,average;
    char answer;
    printf("请输入班级人数：\n");
    scanf("%d",&population);
    answer = 'y';
    while(answer == 'y')
    {
        while(i <= population)
        {
            printf("请输入学号为%d的学生的成绩： ",i);
            scanf("%lf",&grade);
            sum = sum + grade;
            i++;
        }
        average = sum / population;
        printf("平均分为%.2lf\n",average);
        printf("是否继续？（y/n）\n");
        fflush(stdin);
        scanf("%c",&answer);
    }*/




    //将一个正整数分解质因数。例如：输入 90，打印出 90 = 2 * 3 * 3 * 5
    int i,num,j;
    printf("请输入一个数：");
    scanf("%d",&num);
    printf("\n%d=",num);
    j = num;
    for(i = 2;i < j;i++)
    {
        if(num % i == 0)
        {
            num = num / i;
            printf("%d",i);
            i = 1;
            if(num == 1)
            {
                break;
            }
            printf("*");
        }
        continue;
    }
    printf("\n");








    /*输入一个正整数，求该数的阶乘。询问用户是否愿意继续.
    int mynum,factorial;
    char answer;
    answer = 'y';
    while(answer == 'y')
    {
        printf("请输入一个正整数：\n");
        scanf("%d",&mynum);
        factorial = 1;
        while(mynum >= 1)
        {
            factorial = factorial * mynum;
            mynum--;
        }
        printf("factorial=%d\n",factorial);
        fflush(stdin);
        printf("\n是否继续？（y/n）\n");
        scanf("%c",&answer);
    }*/




    /*编写一个程序，用于接收用户输入的数字，然后显示从 0 到该数为止表示的所有字符。
    //询问用户是否愿意再次继续同样的过程。
    int mynum,cnt;
    char answer;
    answer = 'y';
    while(answer == 'y')
    {
        answer = ' ';
        printf("请输入一个数字：\n");
        scanf("%d",&mynum);
        cnt = 0;
        while(cnt < mynum)
        {
            printf("\n %d: %c",cnt,cnt);
            printf("\n");
            cnt++;
        }
        printf("\n您是否要继续（y/n）：");
        fflush(stdin);
        scanf("%c",&answer);
    }*/




    /*编写一个程序，让用户输入一个正整数，然后计算该数字各位数之和。
    int n,i,sum = 0;
    printf("请输入n的值：\n");
    scanf("%d",&n);
    while(n != 0)
    {
        i = n % 10;
        sum = sum + i;
        n = n / 10;
    }
    printf("sum=%d\n",sum);*/




    /*计算级数 n + (n - 1) + (n - 2) + …+ 3 + 2 + 1 的值，其中 n 的值由用户输入。
    int n,sum = 0;
    printf("请输入n的值：\n");
    scanf("%d",&n);
    while(n > 0)
    {
        sum = sum + n;
        n--;
    }
    printf("sum=%d\n",sum);*/


    return 0;
}

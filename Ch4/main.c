#include <stdio.h>
#include <stdlib.h>

int main()
{
    //以表格格式显示 1 到 10 的乘法表
    int x = 1;
    int i,j;
    printf("x:\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\n");
    printf("-----------------------------------------------------------------------------------\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d:\t",i + 1);
        for(j = 0; j < 10; j++)
        {
            printf("%d\t",(i + 1) * (j + 1));
        }
        printf("\n");
    }













    /*求 1 + 2! + 3! + … + 10!的和
    int i,j;
    double sum = 0,factorial = 1;
    for(i = 1; i < 11; i++)
    {
        for(j = 11 - i; j >= 1; j--)
        {
            factorial = factorial * j;
        }
        sum += factorial;
    }
    printf("阶乘和为%.2lf",sum);*/






    /*用星号打印一个如下的空心菱形图案
    int i,j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j <= 1 - i; j++)    // 在边界打印空格，使之在中央
        {
            printf(" ");
        }
        for(j = 0;j <= 2 * i; j++)
        {
            if(j == 0 || j == 2 * i)    // 只在边界打印*
            {
                printf("*");
                continue;
            }
            printf(" ");
        }
        printf("\n");
     }
     for(i = 0; i <= 1; i++)          // 后两行
     {
         for(j = 0; j <= i;j++)
         {
             printf(" ");
         }
         for(j = 0; j <= 2 - 2 * i; j++)
         {
             if(j == 0 || j == 2 - 2 * i)
             {
                 printf("*");
                 continue;
             }
             printf(" ");
         }
         printf("\n");
     }*/






    /*编写一个程序，最多接收 10 个数字，求这些数字之和。用户可以通过输入 999 终止程序，
      并显示输入的数字之和。
      int i,j = 0;
      double num,sum = 0;
      printf("请输入最多10个数字，或输入999结束输入\n");
      for(i = 0; i < 10; i++)
      {
          printf("请输入第%d个数字： ",i + 1);
          scanf("%lf",&num);
          if(num == 999)
          {
              break;
          }
          if(num < 0)
          {
              continue;
          }
          sum = sum + num;
          j++;
      }
      printf("\n这%d个数的和为%.2lf\n",j,sum);*/





    /*编写一个程序，用于接收用户输入 10 个字符，统计其中大写字母和小写字母的个数。
    char letter;     //用于接受字母
    int num1,num2,i;
    num1 = 0;
    num2 = 0;
    for(i = 0; i < 10; i++)
    {
        printf("请输入第%d个字符,只能是大写字母或小写字母: ",i+1);
        scanf("%c",&letter);
        fflush(stdin);
        if(letter >= 65 && letter <= 90)
        {
            num1++;
            continue;
        }
        num2++;
    }
    printf("\n小写字母有%d个\n",num2);
    printf("大写字母有%d个\n",num1);
    if(num1 >= num2)
    {
        printf("\n大写字母比小写字母多%d个\n",num1 - num2);
    }
    else
    {
        printf("\n小写字母比大写字母多%d个\n",num2 - num1);
    }*/


    return 0;
}

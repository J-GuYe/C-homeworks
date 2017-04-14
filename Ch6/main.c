#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 从键盘输入 10 个整数，合法值为 1， 2， 3，不是这三个数字的认为是非法数字，试编
       程统计每个整数和非法数字的个数。
       int count = 10;
       int legal[3] = {1, 2, 3};
       int input[10];
       int Inlegal_Num = 0,num,temp,index;
       int i,j,k;
       printf("请输入%d个整数值：\n",count);
       for(i = 0;i < count;i++)        //存放输入的10个整数
       {
           printf("请输入第%d个数字:",i + 1);
           scanf("%d",&input[i]);
           printf("\n");
       }
       for(i = 0;i < count;i++)      //统计非法数字的个数
       {
           temp = 0;
           for(j = 0;j < 3;j++)
           {
               if(input[i] != legal[j])
               {
                   temp += 1;
                   continue;
               }
               else
               {
                   break;
               }
           }
           if(temp == 3)
           {
               Inlegal_Num += 1;
           }
       }
       printf("非法数字有%d个\n\n",Inlegal_Num);

       for(i = 0;i < count;i++) // 统计每个数字的个数
       {
           num = 1;
           for(j = i + 1;j < count;j++)
           {
               if(input[i] == input[j])
               {
                   num += 1;
                   index = j;
                   for(k = index;k < count;k++)
                   {
                       input[k] = input[k + 1];
                   }
                   count--;
                   j--;
               }
           }

           printf("%d这个数一共出现%d次\n",input[i],num);
       }*/
    return 0;
}

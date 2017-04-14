#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*某神奇百货公司当日消费积分最高的八名顾客，他们的积分分别是：18， 25， 7， 36，
      13， 2， 89， 63.编写程序找出最低的积分以及在数组中的索引（下标）。
      int integral[8] = {18, 25, 7, 36, 13, 2, 89, 1};
      int i = 0,count = 7;
      int min,index;
      min = integral[i];
      for(;i < count;i++)
      {
          if(min > integral[i + 1])
          {
              min = integral[i + 1];
              index = i + 1;
          }
      }
      printf("最低的积分为%d,在数组中的索引为%d\n",min,index);*/




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

       for(i = 0;i < count;i++)  // 统计每个数字的个数
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







    /*输入 10 个整数，使用冒泡排序法按照从小到大的顺序排列，并打印出排序前后的数字。
      int i,j,count = 10;
      int temp;
      int array[10];
      for(i = 0;i < count;i++)
      {
          printf("请输入第%d个数字：",i + 1);
          scanf("%d",&array[i]);
      }
      for(i = 0;i < count;i++)
      {
          for(j = 0;j < count - i - 1;j++)
          {
              if(array[j] > array[j + 1])
              {
                  temp = array[j];
                  array[j] = array[j + 1];
                  array[j + 1] = temp;
              }
          }
      }
      for(i = 0;i < count;i++)
      {
          printf("%d\t",array[i]);
      }*/



    /*已知数组 a 中的元素已按由小到大顺序排列，一下程序的功能是将输入的一个数插入数
      组 a 中，插入后，数组 a 中的元素仍然由小到大顺序排列。
      int array[8] = {0, 2, 5, 9, 10, 14, 26};
      int count = 8;
      int i,j,Insert_Num,index;
      printf("请输入一个整数：");
      scanf("%d",&Insert_Num);
      for(i = 0;i < count;i++)
      {
          if(Insert_Num > array[i] && Insert_Num < array[i + 1])
          {
              index = i;
              j = 1;
              do
              {
                  array[count - j] = array[count - j - 1];
                  j++;
              }
              while(count - j -1 >= index + 1);
              array[i + 1] = Insert_Num;
              break;
          }
          continue;
      }
      for(i = 0;i < count;i++)
      {
          printf("%d\t",array[i]);
      }*/



    /*输入 10 个整数存放在一维数组中，打印输出它们的平均值以及高于平均值的数的个数。
      int array[10];
      int i,count = 10;
      double ave,sum = 0;
      for(i = 0;i < count;i++)
      {
          printf("请输入第%d个整数：",i + 1);
          scanf("%d",&array[i]);
      }
      for(i = 0;i < count;i++)
      {
          sum = sum + array[i];
      }
      ave = sum / count;
      printf("平均数为%.2lf\n",ave);
      for(i = 0;i < count;i++)
      {
          if(array[i] > ave)
          {
              printf("%d\t",array[i]);
          }
      }*/



    /*数据是小于8位的整数，首先将数据倒序，然后将每位数字都加上 5，再用和除以 10 的余数代替该数字，最后将第
      一位和最后一位数字交换。*/
      int num;
      int data[7];
      int i = 0,count;
      int temp;                    //临时变量
      printf("请输入一个小于八位数的整数：");
      scanf("%d",&num);
      do
      {
          data[i] = num % 10;
          num = num / 10;
          i++;
      }
      while(num > 0);       //将数据拆分，并倒序
      count = i;            //确定数据数组的长度
      for(i = 0;i < count;i++)
      {
          data[i] = data[i] + 5;   //将每位数字加上5
          data[i] = data[i] % 10;  //用和除以10的余数代替该数字
      }

      temp = data[0];          //将第一位数和最后一位数字交换
      data[0] = data[count - 1];
      data[count - 1] = temp;

      for(i = 0;i < count;i++)  //打印出数据
      {
          printf("%d",data[i]);
      }




    return 0;
}

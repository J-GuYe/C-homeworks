#include <stdio.h>
#include <stdlib.h>

int main()
{
    //�Ա���ʽ��ʾ 1 �� 10 �ĳ˷���
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













    /*�� 1 + 2! + 3! + �� + 10!�ĺ�
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
    printf("�׳˺�Ϊ%.2lf",sum);*/






    /*���ǺŴ�ӡһ�����µĿ�������ͼ��
    int i,j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j <= 1 - i; j++)    // �ڱ߽��ӡ�ո�ʹ֮������
        {
            printf(" ");
        }
        for(j = 0;j <= 2 * i; j++)
        {
            if(j == 0 || j == 2 * i)    // ֻ�ڱ߽��ӡ*
            {
                printf("*");
                continue;
            }
            printf(" ");
        }
        printf("\n");
     }
     for(i = 0; i <= 1; i++)          // ������
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






    /*��дһ������������ 10 �����֣�����Щ����֮�͡��û�����ͨ������ 999 ��ֹ����
      ����ʾ���������֮�͡�
      int i,j = 0;
      double num,sum = 0;
      printf("���������10�����֣�������999��������\n");
      for(i = 0; i < 10; i++)
      {
          printf("�������%d�����֣� ",i + 1);
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
      printf("\n��%d�����ĺ�Ϊ%.2lf\n",j,sum);*/





    /*��дһ���������ڽ����û����� 10 ���ַ���ͳ�����д�д��ĸ��Сд��ĸ�ĸ�����
    char letter;     //���ڽ�����ĸ
    int num1,num2,i;
    num1 = 0;
    num2 = 0;
    for(i = 0; i < 10; i++)
    {
        printf("�������%d���ַ�,ֻ���Ǵ�д��ĸ��Сд��ĸ: ",i+1);
        scanf("%c",&letter);
        fflush(stdin);
        if(letter >= 65 && letter <= 90)
        {
            num1++;
            continue;
        }
        num2++;
    }
    printf("\nСд��ĸ��%d��\n",num2);
    printf("��д��ĸ��%d��\n",num1);
    if(num1 >= num2)
    {
        printf("\n��д��ĸ��Сд��ĸ��%d��\n",num1 - num2);
    }
    else
    {
        printf("\nСд��ĸ�ȴ�д��ĸ��%d��\n",num2 - num1);
    }*/


    return 0;
}

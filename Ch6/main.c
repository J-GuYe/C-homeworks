#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* �Ӽ������� 10 ���������Ϸ�ֵΪ 1�� 2�� 3���������������ֵ���Ϊ�ǷǷ����֣��Ա�
       ��ͳ��ÿ�������ͷǷ����ֵĸ�����
       int count = 10;
       int legal[3] = {1, 2, 3};
       int input[10];
       int Inlegal_Num = 0,num,temp,index;
       int i,j,k;
       printf("������%d������ֵ��\n",count);
       for(i = 0;i < count;i++)        //��������10������
       {
           printf("�������%d������:",i + 1);
           scanf("%d",&input[i]);
           printf("\n");
       }
       for(i = 0;i < count;i++)      //ͳ�ƷǷ����ֵĸ���
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
       printf("�Ƿ�������%d��\n\n",Inlegal_Num);

       for(i = 0;i < count;i++) // ͳ��ÿ�����ֵĸ���
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

           printf("%d�����һ������%d��\n",input[i],num);
       }*/
    return 0;
}

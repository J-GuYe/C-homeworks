#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*ĳ����ٻ���˾�������ѻ�����ߵİ����˿ͣ����ǵĻ��ֱַ��ǣ�18�� 25�� 7�� 36��
      13�� 2�� 89�� 63.��д�����ҳ���͵Ļ����Լ��������е��������±꣩��
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
      printf("��͵Ļ���Ϊ%d,�������е�����Ϊ%d\n",min,index);*/




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

       for(i = 0;i < count;i++)  // ͳ��ÿ�����ֵĸ���
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







    /*���� 10 ��������ʹ��ð�����򷨰��մ�С�����˳�����У�����ӡ������ǰ������֡�
      int i,j,count = 10;
      int temp;
      int array[10];
      for(i = 0;i < count;i++)
      {
          printf("�������%d�����֣�",i + 1);
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



    /*��֪���� a �е�Ԫ���Ѱ���С����˳�����У�һ�³���Ĺ����ǽ������һ����������
      �� a �У���������� a �е�Ԫ����Ȼ��С����˳�����С�
      int array[8] = {0, 2, 5, 9, 10, 14, 26};
      int count = 8;
      int i,j,Insert_Num,index;
      printf("������һ��������");
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



    /*���� 10 �����������һά�����У���ӡ������ǵ�ƽ��ֵ�Լ�����ƽ��ֵ�����ĸ�����
      int array[10];
      int i,count = 10;
      double ave,sum = 0;
      for(i = 0;i < count;i++)
      {
          printf("�������%d��������",i + 1);
          scanf("%d",&array[i]);
      }
      for(i = 0;i < count;i++)
      {
          sum = sum + array[i];
      }
      ave = sum / count;
      printf("ƽ����Ϊ%.2lf\n",ave);
      for(i = 0;i < count;i++)
      {
          if(array[i] > ave)
          {
              printf("%d\t",array[i]);
          }
      }*/



    /*������С��8λ�����������Ƚ����ݵ���Ȼ��ÿλ���ֶ����� 5�����úͳ��� 10 ��������������֣���󽫵�
      һλ�����һλ���ֽ�����*/
      int num;
      int data[7];
      int i = 0,count;
      int temp;                    //��ʱ����
      printf("������һ��С�ڰ�λ����������");
      scanf("%d",&num);
      do
      {
          data[i] = num % 10;
          num = num / 10;
          i++;
      }
      while(num > 0);       //�����ݲ�֣�������
      count = i;            //ȷ����������ĳ���
      for(i = 0;i < count;i++)
      {
          data[i] = data[i] + 5;   //��ÿλ���ּ���5
          data[i] = data[i] % 10;  //�úͳ���10���������������
      }

      temp = data[0];          //����һλ�������һλ���ֽ���
      data[0] = data[count - 1];
      data[count - 1] = temp;

      for(i = 0;i < count;i++)  //��ӡ������
      {
          printf("%d",data[i]);
      }




    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*���ӳ������⣺���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬����񫣬�ֶ�
    ����һ���ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ����һ�����Ժ�ÿ�����϶�����ǰһ��
    ʣ�µ�һ����һ�������� 10 ���������ٳ�ʱ����ֻʣ��һ�������ˡ����һ�칲ժ�˶���.
    int peach = 1,i = 10;
    while(i > 1)
    {
        peach = (peach + 1) * 2;
        i--;
        printf("��%d�����������Ϊ%d\n\n",i,peach);
    }
    printf("��һ�����������Ϊ%d\n",peach);*/





    /*��дһ�����򣬸�������ĳ���༶ѧԱ�ĳɼ�������ð�ѧԱ��ƽ���ɼ����༶������Ҫ���û����롣����������������ֱ�¼��ѧԱ�ĳɼ���
    //���ѯ���û��Ƿ������ֱ���û��Լ�ȷ��Ҫ���������˳�
    int population,i = 1;
    double grade,sum = 0,average;
    char answer;
    printf("������༶������\n");
    scanf("%d",&population);
    answer = 'y';
    while(answer == 'y')
    {
        while(i <= population)
        {
            printf("������ѧ��Ϊ%d��ѧ���ĳɼ��� ",i);
            scanf("%lf",&grade);
            sum = sum + grade;
            i++;
        }
        average = sum / population;
        printf("ƽ����Ϊ%.2lf\n",average);
        printf("�Ƿ��������y/n��\n");
        fflush(stdin);
        scanf("%c",&answer);
    }*/




    //��һ���������ֽ������������磺���� 90����ӡ�� 90 = 2 * 3 * 3 * 5
    int i,num,j;
    printf("������һ������");
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








    /*����һ����������������Ľ׳ˡ�ѯ���û��Ƿ�Ը�����.
    int mynum,factorial;
    char answer;
    answer = 'y';
    while(answer == 'y')
    {
        printf("������һ����������\n");
        scanf("%d",&mynum);
        factorial = 1;
        while(mynum >= 1)
        {
            factorial = factorial * mynum;
            mynum--;
        }
        printf("factorial=%d\n",factorial);
        fflush(stdin);
        printf("\n�Ƿ��������y/n��\n");
        scanf("%c",&answer);
    }*/




    /*��дһ���������ڽ����û���������֣�Ȼ����ʾ�� 0 ������Ϊֹ��ʾ�������ַ���
    //ѯ���û��Ƿ�Ը���ٴμ���ͬ���Ĺ��̡�
    int mynum,cnt;
    char answer;
    answer = 'y';
    while(answer == 'y')
    {
        answer = ' ';
        printf("������һ�����֣�\n");
        scanf("%d",&mynum);
        cnt = 0;
        while(cnt < mynum)
        {
            printf("\n %d: %c",cnt,cnt);
            printf("\n");
            cnt++;
        }
        printf("\n���Ƿ�Ҫ������y/n����");
        fflush(stdin);
        scanf("%c",&answer);
    }*/




    /*��дһ���������û�����һ����������Ȼ���������ָ�λ��֮�͡�
    int n,i,sum = 0;
    printf("������n��ֵ��\n");
    scanf("%d",&n);
    while(n != 0)
    {
        i = n % 10;
        sum = sum + i;
        n = n / 10;
    }
    printf("sum=%d\n",sum);*/




    /*���㼶�� n + (n - 1) + (n - 2) + ��+ 3 + 2 + 1 ��ֵ������ n ��ֵ���û����롣
    int n,sum = 0;
    printf("������n��ֵ��\n");
    scanf("%d",&n);
    while(n > 0)
    {
        sum = sum + n;
        n--;
    }
    printf("sum=%d\n",sum);*/


    return 0;
}

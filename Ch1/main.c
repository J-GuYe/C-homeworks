#include <stdio.h>
#include <stdlib.h>

int main()
{
    //��дһ�� C ���򣬽����û��������λ��������������ÿһλ������Ӳ���ʾ�����
    int i;
    int a,b,c,d,sum;
    printf("������һ����λ��:\n");
    scanf("%d",&i);
    a = i % 10;
    b = i / 10 % 10;
    c = i / 100 % 10;
    d = i / 1000 % 10;
    sum = a + b + c + d;
    printf("a=%d\tb=%d\tc=%d\td=%d\n",a,b,c,d);
    printf("sum=%d\n",sum);






    /*����������ְ�˳��ת������Ӧ�� ASCII �룬��ӡ����Ӧ�� ASCII �벢������ϣ���������λ�������ֲ�������Ƭ��
    //�������£�97��110��103��101��108��97��66��97��98��121
    char one,two,three,four,five,six,seven,eight,nine,ten;
    one = 97;
    two = 110;
    three = 103;
    four = 101;
    five = 108;
    six = 97;
    seven = 66;
    eight = 97;
    nine = 98;
    ten = 121;
    printf("one=%c\ntwo=%c\nthree=%c\nfour=%c\nfive=%c\n",one,two,three,four,five);
    printf("six=%c\nseven=%c\neight=%c\nnine=%c\nten=%c\n",six,seven,eight,nine,ten);*/




    /*��дһ������Ҫ������û�������εĳ��Ϳ�������ε�������ܳ�
    double length,width;
    double s,c;
    printf("��������εĳ���\n");
    scanf("%lf",&length);
    printf("��������εĿ�\n");
    scanf("%lf",&width);
    s = length * width;
    c = 2 * (length + width);
    printf("�˾��ε����Ϊ%.2lf,�ܳ�Ϊ%.2lf",s,c);*/





    /*ĳ���е��¶����Ի��϶�Ϊ��λ��¼�ġ���дһ�����򣬽��¶�ת��Ϊ���϶ȣ����Ի��϶Ⱥ����϶�Ϊ��λ��ʾ�¶ȡ�
    double t,T;
    printf("�����뻪���¶ȣ�\n");
    scanf("%lf",&T);
    t = 5 / 9.0 * (T - 32);
    printf("��Ӧ�����϶�Ϊ%.2lf",t);*/




    //��дһ������Ҫ���û�����һ��Сд��ĸ��Ȼ����ʾ��Ӧ�Ĵ�д��ĸ��

    /*char i,j;
    printf("������һ��Сд��ĸ��\n");
    scanf("%c",&i);
    fflush(stdin);    //��ջ�����,����س����������ڶ���������ַ�����scanf��ȡ
    while(i < 97 || i > 123)
    {
        printf("�������������һ��Сд��ĸ��\n");
        scanf("%c",&i);
        fflush(stdin);
    }
    j = i - 32;
    printf("��Сд��ĸ��Ӧ�Ĵ�д��ĸΪ%c\n",j);*/


    /*char i;
    do
    {
        printf("������һ��!Сд!��ĸ��\n");
        scanf("%c",&i);
        fflush(stdin);
    }
    while(i < 97 || i > 123);    //��ֹ�û���������ַ�

    i = i - 32;
    printf("��Сд��ĸ��Ӧ�Ĵ�д��ĸ�ǣ�%c\n",i);*/




    /*ĳ��˾ΪԱ���ṩ�˻������ʡ���۽��������������������۽���ռ�������ʵ� 40%��
     �������ռ�������ʵ� 20%����дһ���������ʵ�칤�ʣ�Ҫ������ĳԱ���Ļ������ʣ�
      ����Ӧ���Ա��֧����ʵ�ʹ��ʡ�

    double basic_salary,price,house,real_salary; // ����������ʣ���۽��������������ʵ�ʹ���

    printf("������������ʣ�\n");
    scanf("%lf",&basic_salary);

    price = basic_salary * 0.4;
    house = basic_salary * 0.2;
    real_salary = basic_salary + price + house;    //����ʵ�ʹ���

    printf("\n");
    printf("������ϸ��\n");
    printf("��������Ϊ%.2lf\n",basic_salary);
    printf("��۽���Ϊ%.2lf\n",price);
    printf("�������Ϊ%.2lf\n",house);
    printf("ʵ�ʹ���Ϊ%.2lf\n",real_salary);*/




    /*����������ֵ

    int i,j,k;           // �������
    printf("������i��ֵ��\n");
    scanf("%d",&i);
    printf("������j��ֵ��\n");
    scanf("%d",&j);      //��������ֵ

    printf("��ʱi=%d,j=%d\n\n",i,j);  // ��ʾ����֮ǰ��i,j��ֵ

    k = i;
    i = j;
    j = k;                      // ��������i,j��ֵ

    printf("�������i��j��ֵ\n");
    printf("i = %d\t,j = %d\n",i,j);  //��ӡ����֮���ֵ*/
    return 0;
}

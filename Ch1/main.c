#include <stdio.h>
#include <stdlib.h>

int main()
{
    //编写一个 C 程序，接收用户输入的四位整数，将该数的每一位数字相加并显示结果。
    int i;
    int a,b,c,d,sum;
    printf("请输入一个四位数:\n");
    scanf("%d",&i);
    a = i % 10;
    b = i / 10 % 10;
    c = i / 100 % 10;
    d = i / 1000 % 10;
    sum = a + b + c + d;
    printf("a=%d\tb=%d\tc=%d\td=%d\n",a,b,c,d);
    printf("sum=%d\n",sum);






    /*将下面的数字按顺序转换成相应的 ASCII 码，打印出相应的 ASCII 码并进行组合，看看是哪位明星名字并贴出照片。
    //数字如下：97、110、103、101、108、97、66、97、98、121
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




    /*编写一个程序，要求根据用户输入矩形的长和宽，计算矩形的面积和周长
    double length,width;
    double s,c;
    printf("请输入矩形的长：\n");
    scanf("%lf",&length);
    printf("请输入矩形的宽：\n");
    scanf("%lf",&width);
    s = length * width;
    c = 2 * (length + width);
    printf("此矩形的面积为%.2lf,周长为%.2lf",s,c);*/





    /*某城市的温度是以华氏度为单位记录的。编写一个程序，将温度转换为摄氏度，并以华氏度和摄氏度为单位显示温度。
    double t,T;
    printf("请输入华氏温度：\n");
    scanf("%lf",&T);
    t = 5 / 9.0 * (T - 32);
    printf("相应的摄氏度为%.2lf",t);*/




    //编写一个程序，要求用户输入一个小写字母，然后显示相应的大写字母。

    /*char i,j;
    printf("请输入一个小写字母：\n");
    scanf("%c",&i);
    fflush(stdin);    //清空缓存区,避免回车键被当做第二个输入的字符，被scanf获取
    while(i < 97 || i > 123)
    {
        printf("输入错误，请输入一个小写字母：\n");
        scanf("%c",&i);
        fflush(stdin);
    }
    j = i - 32;
    printf("此小写字母对应的大写字母为%c\n",j);*/


    /*char i;
    do
    {
        printf("请输入一个!小写!字母：\n");
        scanf("%c",&i);
        fflush(stdin);
    }
    while(i < 97 || i > 123);    //防止用户输入错误字符

    i = i - 32;
    printf("此小写字母对应的大写字母是：%c\n",i);*/




    /*某公司为员工提供了基本工资、物价津贴及房租津贴。其中物价津贴占基本工资的 40%，
     房租津贴占基本工资的 20%。编写一个程序计算实领工资，要求输入某员工的基本工资，
      计算应向该员工支付的实际工资。

    double basic_salary,price,house,real_salary; // 定义基本工资，物价津贴，房租津贴和实际工资

    printf("请输入基本工资：\n");
    scanf("%lf",&basic_salary);

    price = basic_salary * 0.4;
    house = basic_salary * 0.2;
    real_salary = basic_salary + price + house;    //计算实际工资

    printf("\n");
    printf("工资明细：\n");
    printf("基本工资为%.2lf\n",basic_salary);
    printf("物价津贴为%.2lf\n",price);
    printf("房租津贴为%.2lf\n",house);
    printf("实际工资为%.2lf\n",real_salary);*/




    /*交换变量的值

    int i,j,k;           // 定义变量
    printf("请输入i的值：\n");
    scanf("%d",&i);
    printf("请输入j的值：\n");
    scanf("%d",&j);      //给变量赋值

    printf("此时i=%d,j=%d\n\n",i,j);  // 显示交换之前的i,j的值

    k = i;
    i = j;
    j = k;                      // 交换变量i,j的值

    printf("互换后的i与j的值\n");
    printf("i = %d\t,j = %d\n",i,j);  //打印互换之后的值*/
    return 0;
}

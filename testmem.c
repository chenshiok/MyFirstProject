#include <stdio.h>
#include <malloc.h>

int shengsheng = 250; //全局变量已初始化
int sheng; //全局变量未初始化

int main()
{
    static int shengdi; //静态变量未初始化
    const static int hange = 3; //静态只读局部变量
    char *s1 = "abcde";
    char *s2 = "abcde";
    char s3[] = "abcde";
    long int *s4[100];
    char *s5 = "abcde";
    int a = 5;
    int b =6;//a,b在栈上，&a>&b 地址反向增长
    int *c,*q;
    c=(int *)malloc(4); 
    q=(int *)malloc(4);
    
    printf("\n stack_&s1=%p stack_&s2=%p stack_&s3=%p stack_&s4=%p\n ", &s1,&s2,&s3,&s4);
    printf(" stack_&s5=%p stack_a=%p stack_b=%p\n",&s5,&a,&b);

   printf("\n\n stack_s1=%p, stack_s2=%p, stack_s3=%p\n",s1,s2,s3);
   printf(" stack_s4=%p, stack_s5=%p \n",s4,s5);
   
   printf("\n global_init_shengsheng=%p const_static_init_hange=%p\n",&shengsheng,&hange);
   
   printf("\nglobal_shengdi=%p heap_c=%p heap_q=%p\n\n",&shengdi,c,q);
   printf(" &head_c=%p head_q=%p\n\n",&c,&q);
    
    return 0;


}


#include <stdio.h>

int main()
{

    /*
      int age=333;
    int *ptr;
      ptr=&age;
      printf("%p\n",&age);
       printf("%d\n",ptr);
        printf("%p\n",&ptr);
         printf("%p\n",*ptr);

             printf("%u\n",&age);
       printf("%u\n",ptr);
        printf("%u\n",&ptr);
         printf("%u\n",*ptr);*/
   /* int *ptr;
    int x;
    ptr = &x;
    *ptr = 0;
    printf("x=%d\n", x);
    printf("*ptr=%d\n", *ptr);
    printf("\n");
    *ptr += 5;

    printf("x=%d\n", x);
    printf("*ptr=%d\n", *ptr);
    printf("\n");

    (*ptr)++;
    printf("x=%d\n", x);
    printf("*ptr=%d\n", *ptr);*/
    int i;
    int *ptr=&i;
    int **pptr=&ptr;
    **pptr=5;
    printf("%d\n",i);
     printf("%p\n",i);
    
     printf("%u\n",ptr);
    
     printf("%d\n",*ptr);
     printf("%p\n",ptr);
    
     printf("%p\n",&ptr);
       printf("%p\n",&pptr);
        printf("%p\n",pptr);
         printf("%p\n",**pptr);
    


    return 0;
}

#include <iostream>
using namespace std;

int main(void) {
    int b = 0;
    int c = 89;
    int a[] = {3,6,1,2,7};
    
    int *p;
    printf("please b number \n");
    scanf("%d",&b);
    printf("b=%d \n",b);
    printf("&b=%x \n",&b);
    
    p = &b;
    printf("b=%d \n",*p);
    printf("&b=%x \n",p);
    
    printf("a[0]=%d\n",a[0]);
    printf("a[1]=%d\n",a[1]);
    printf("&a[0]=%d\n",&a[0]);
    printf("&a[0]=%d\n",a);
    p = a;
    printf("a[0]=%d\n",*p);
    printf("a[0]=%d\n",*(p+1));
    return 0;
}
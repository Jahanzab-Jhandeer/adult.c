#include<stdio.h>

int main () {

    int age;
    printf("Type your age :");
    scanf("%d" , &age);

if(age > 18) {
    printf("1. HE is Adult Now \n");
    printf("2. HE can Vote Now \n");
    printf("3. HE can Drive Now \n");
}
else {
    printf("1. HE is not Adult now \n");
    printf("2. HE is not able to drive now \n");
    printf("3. HE can't vote now \n");
}

return 0;
}
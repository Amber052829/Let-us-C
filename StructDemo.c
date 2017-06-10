#include<stdio.h>
#include<string.h>


struct Student {
    char name[10];
    int id;
    char colg[20];
};

int main() {
    struct Student students[3];
    int i;
    for(i = 0;i < 3; i++){
        scanf("%s",students[i].name);
        scanf("%d",&students[i].id);
        scanf("%s",students[i].colg);
    }
    
    for(i = 0;i < 3; i++){
        printf("\n %s \n", students[i].name);
        printf("\n %d \n", students[i].id);
        printf("\n %s \n", students[i].colg);    

    }
    


    /*
    struct Student deepanshu, amber, harsh;
    //Deepanshu Data
    strcpy(deepanshu.name, "Deepanshu");
    deepanshu.id = 100;
    strcpy(deepanshu.colg, "SRM");
    //Amber Data
    strcpy(amber.name, "Amber");
    deepanshu.id = 101;
    strcpy(deepanshu.colg, "SRM");
    //harsh Data
    strcpy(harsh.name, "harsh");
    deepanshu.id = 102;
    strcpy(deepanshu.colg, "HIM");
    */
    

    return 0;
}
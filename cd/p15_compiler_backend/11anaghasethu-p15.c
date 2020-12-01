#include<stdio.h>
#include<string.h>
void main(){
char icode[10][30], str[20], opr[10];
int i=0;
printf("\nEnter the set of intermediate code (terminated by exit):\n");
do{
scanf("%s", icode[i]);
}
while(strcmp(icode[i++],"exit")!=0);
printf("\nTarget code generation");
printf("\n*******************");
i=0;
do{
strcpy(str,icode[i]);
switch(str[3]){
case '+':
strcpy(opr,"ADD");
break;
case '-':
strcpy(opr,"SUB");
break;
case '*':
strcpy(opr,"MUL");
break;
case '/':
strcpy(opr,"DIV");
break;

}

printf("\n\tMov %c,R%d", str[2],i);
printf("\n\%s%c,,R%d", opr,str[4],i);
printf("\n\tMov R%d%c", i,str[0]);
}while(strcmp(icode[++i],"exit")!=0); }

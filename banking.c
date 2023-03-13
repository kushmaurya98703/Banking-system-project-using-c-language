#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int totaldep=0,totalwit=0,totaltra=0,totalamount=1000,amount,amo,tra;
int acc;
char a[100];
int list(){
int ch;
printf("\n1: Diposite Amount:");
printf("\n2: Withdraw Amount:");
printf("\n3: Transfer Amount:");
printf("\n4: Check Detail:");
printf("\n 5: Exit:");
printf("\n enter your choice:");
scanf("%d",&ch);
return(ch);
}

void deposite(){
    printf("\n enter your deposite amount: ");
    scanf("%d",&amount);
    totalamount=totalamount+amount;
}
void withdraw(){
    printf("\n enter your withdraw amount:");
    scanf("%d",&amo);
    if(amo<=totalamount){
        totalamount=totalamount-amo;
    }
    else
    printf("\n less amount withdraw not possible:");
}

void transfer(){
    printf("\n enter the amount u want to transfer:");
    scanf("%d",&tra);
    if(tra<=totalamount){
        totalamount=totalamount-tra;
    }
    else{
        printf("your amount is not sufficent to transfer");
    }
}

void check(){
    printf("\nTotal amount %d",totalamount);
    printf("\nTotal deposite %d",totaldep);
    printf("\ntotal withdraw %d",totalwit);
    printf("\n total transfer %d",totaltra);

}
void last(){
    printf("\n************************\n");
    printf("\n your Name=%s",a);
    printf("\naccount Number=%d",acc);
    printf("\nTotal amount %d",totalamount);
    printf("\nTotal deposite %d",totaldep);
    printf("\ntotal withdraw %d",totalwit);
    printf("\n total transfer %d",totaltra);
    printf("\n\n *********Thanks**********\n ");

}

 
void main(){
    printf("\nenter your name: ");
    gets(a);
    printf("\n enter your account no:");
    scanf("%d",&acc);    
    while(1){
        system("cls");
    switch(list()){
        case 1:
              deposite();
              totaldep=totaldep+amount;
              break;
        case 2:
              withdraw();
              if(amo<=totalamount)
              totalwit=totalwit+amo;
              break;
        case 3:
              transfer();
              if(tra<=totalamount)
              totaltra=totaltra+tra;
              break;
        case 4:
              check();
              break;

        case 5:
        system("cls");
        last();
        getch();
        exit(0);

        default:
        printf("\ninvalid choice:");
    }
getch();
    }
    
    
}
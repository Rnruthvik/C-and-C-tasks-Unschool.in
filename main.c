#include <stdio.h>
#include <conio.h>
#include <string.h>

int count=0,sc=0,l=0;

struct sfo{

    char name[50];
    int price;
    int food;
    int on;

}s1[1000];

void menu()
{
    printf("MENU :\n");
    printf("Item Code#     Description                 Size                       price(Rs.)\n");
    printf("[1]------------Chicken pizza---------------12/14/16inch---------------750/975/1250\n");
    printf("[2]------------Burger----------------------200/300gm------------------130/180\n");
    printf("[3]------------Fried Chicken---------------2/6/12 pcs-----------------85/320/790\n");
    printf("[4]------------Grilled Chicken-------------Half/Full------------------120/240\n");
    printf("[5]------------Noodles---------------------Half/Full------------------50/100\n");
    printf("[6]------------Veg. Manchurian-------------Half/Full------------------60/110\n");
    printf("[7]------------Oreo Shake------------------250ml----------------------180\n");
    printf("[8]------------Soft Drinks-----------------250ml/500ml----------------65/120\n");
    printf("[9]------------cappuccino------------------250ml----------------------70\n");
    printf("[10]-----------Fruit Juice-----------------250ml/500ml------------------20/40\n\n");

}

void order()
{
    int n,in,q,se;
    char r;
    printf("Enter your name: ");
    scanf("%s",&s1[count].name);
    s1[count].on = 1+count;
    menu();
    s1[count].food = n;
    s1[count].price = 0;
    s1[count].food = 0;

    again:
    printf("How many items you want to order? ");
    scanf("%d",&n);

    while(n--)
        {
        printf("\nEnter chosen item code\n");
        scanf("%d",&in);

        switch(in){
    case 1 :
        {
        printf("Enter the size of Chicken Pizza: 1. 12inch  2. 14inch  3. 16inch\n");
        scanf("%d",&se);
        printf("Enter the required quantity of chosen item : ");
        scanf("%d",&q);
        s1[count].food = s1[count].food+q;
        if(se==1)
            s1[count].price = s1[count].price+(750*q);
        else if(se==2)
            s1[count].price = s1[count].price+(975*q);
        else
            s1[count].price = s1[count].price+(1250*q);
        break;
    }
      case 2 :
        {
        printf("Enter the size of burger: 1. 200gm  2. 300gm\n");
        scanf("%d",&se);
        printf("Enter the required quantity of chosen item : ");
        scanf("%d",&q);
        s1[count].food = s1[count].food+q;
        if(se==1)
            s1[count].price =  s1[count].price+(130*q);
        else
            s1[count].price =  s1[count].price+(180*q);
        break;
    }
    case 3 :
        {
        printf("Enter the amount of chicken: 1. 2 pcs  2. 6 pcs  3. 12 pcs\n");
        scanf("%d",&se);
        printf("Enter the required quantity of chosen item : ");
        scanf("%d",&q);
        s1[count].food = s1[count].food+q;
        if(se==1)
            s1[count].price = s1[count].price+(85*q);
        else if(se==2)
            s1[count].price = s1[count].price+(320*q);
        else
            s1[count].price = s1[count].price+(790*q);
        break;
    }
    case 4 :
        {
        printf("Enter the size of grilled chicken:  1. Half  2. Full\n");
        scanf("%d",&se);
        printf("Enter the required quantity of chosen item : ");
        scanf("%d",&q);
        s1[count].food = s1[count].food+q;
        if(se==1)
            s1[count].price = s1[count].price+(120*q);
        else
            s1[count].price = s1[count].price+(240*q);
        break;
    }
    case 5 :
        {
        printf("Enter the size of Noodles: 1. half  2. full\n");
        scanf("%d",&se);
        printf("Enter the required quantity of chosen item : ");
        scanf("%d",&q);
        s1[count].food = s1[count].food+q;
        if(se==1)
            s1[count].price = s1[count].price+(50*q);
        else
            s1[count].price = s1[count].price+(100*q);
        break;
    }
    case 6 :
        {
        printf("Enter the size of Veg. Manchurian: 1. half  2. full\n");
        scanf("%d",&se);
        printf("Enter the required quantity of chosen item : ");
        scanf("%d",&q);
        s1[count].food = s1[count].food+q;
        if(se==1)
            s1[count].price = s1[count].price+(60*q);
        else
            s1[count].price = s1[count].price+(110*q);
        break;
    }
    case 7 :
        {
        printf("250 ml of OREO SHAKE\n");
        printf("Enter the required quantity of chosen item : ");
        scanf("%d",&q);
        s1[count].food = s1[count].food+q;
        s1[count].price = s1[count].price+(180*q);
        break;
    }
    case 8 :
        {
        printf("Enter the Soft Drinks size: 1. 250ml  2. 500ml\n");
        scanf("%d",&se);
        printf("Enter the required quantity of chosen item : ");
        scanf("%d",&q);
        s1[count].food =  s1[count].food+q;
        if(se==1)
            s1[count].price = s1[count].price+(65*q);
        else
            s1[count].price = s1[count].price+(120*q);
        break;
    }
    case 9 :
        {
        printf("250 mg of Cappuccino\n");
        printf("Enter the required quantity of chosen item : ");
        scanf("%d",&q);
        s1[count].food = s1[count].food+q;
        s1[count].price = s1[count].price+(70*q);
        break;
    }
    case 10 :
        {
        printf("Enter the size of Fruit Juice: 1. 250ml  2. 500ml\n");
        scanf("%d",&se);
        printf("Enter the required quantity of chosen item : ");
        scanf("%d",&q);
        s1[count].food = s1[count].food+q;
        if(se==1)
            s1[count].price = s1[count].price+(20*q);
        else
            s1[count].price = s1[count].price+(40*q);
        break;
    }
    default :
        {
        printf("Chosen invalid item code.\n");
        printf("  Choose valid item code.\n");
        n++;
    }
        }
    }

    printf("Do you want to order anything else?(y/n)\n");
    scanf("%c",&r);
    getchar();

    if(r=='y')
        goto again;
    printf("\nNumber of food ordered : %d\n",s1[count].food);
    printf("\nThank you for your order. Your bill is %dRs. \n",s1[count].price);
    printf("\n   Please wait while we prepare the food.\n\n");
    count++;
}
int serve()
{
    if(count==0){
        printf("Please order first.\n\n");
        return 0;
    }
    if(sc==count) {
        printf("   All orders served.\n\n");
        return 0;
    }
    printf("Order no.%d by %s is ready\n",s1[sc].on,s1[sc].name);
    printf("   Enjoy your meal.\n\n");
    sc++;
}
void view()
{
    printf("Total order taken: %d\n",count);
    printf("Total number of order served: %d\n",sc);
    l=count-sc;
    printf("Number of Currently waiting to be served: %d\n",l);
    printf("Food being prepared for order no.%d.\n\n",s1[sc].on);
}

int main()
{
    while(1){
        printf("Welcome to SFO cafe\n");
        printf("1. Order(o)\n2. Serve(s)\n3. View(v) \n4. Exit(e)\n");
        printf("Choose service by entering reqired character or alphabet(for example order-o) : ");
        char ch;
        scanf(" %c",&ch);
        getchar();
        switch (ch){
            case 'o' : {
                order ();
                break;
            }
            case 's' : {
                serve();
                break;
            }
            case 'v' : {
                view();
                break;
            }
            case 'e' : {
                printf("    You are exited now.   ");
                printf("\n      Thank you!!!    ");
                return 0;
            }
        }
    }
}

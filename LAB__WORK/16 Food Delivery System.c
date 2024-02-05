#include<stdio.h>

int main()
{
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Food Delivery System \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    
    printf("\n\n\xB2\xB2\xB2\xB2\xB2 Menu \xB2\xB2\xB2\xB2\xB2");
    
    int order, quantity, total, AllTotal=0;
    char next;
    
    do {
        printf("\n\n1. Pizza --- Rs.- 180");
        printf("\n2. Burger --- Rs.- 50");
        printf("\n3. Sandwich --- Rs.- 80");
        printf("\n4. Samosa --- Rs.- 40");
        
        printf("\n\nSelect your Order :- ");
        scanf("%d", &order);
        
        printf("Enter Quantity :- ");
        scanf("%d", &quantity);
        
        switch(order) {
            case 1: total = 180 * quantity;
                    break;
            case 2: total = 50 * quantity;
                    break;
            case 3: total = 80 * quantity;
                    break;
            case 4: total = 40 * quantity;
                    break; 
            default: printf("\nPlease Select a valid Order.");
        }
        
        AllTotal = AllTotal + total;
        
        printf("\n\nYour Total Bill :- %d", AllTotal);
        
        // Consume the newline character from the buffer
        printf("\n\nDo you want to Order more ? :- ");
        scanf(" %c", &next);
        
    } while (next == 'Y' || next == 'y');
    
    printf("\n\nThank you for Order.");
    
    return 0;
}

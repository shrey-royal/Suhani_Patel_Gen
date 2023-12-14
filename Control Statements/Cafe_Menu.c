#include<stdio.h>
#include<stdlib.h>  //standard library for system() function

int main() {
    int choice;

    system("cls");
    printf("-------------------------------------\n");
    printf("           Suhani's Cafe             \n");
    printf("-------------------------------------\n\n\n");
    
    printf("\n1. Oleato");
    printf("\n2. Hot Teas");
    printf("\n3. Frappuccino Blended Beverages");
    printf("\n4. Iced Teas");
    printf("\n5. Hot Coffees");
    printf("\n6. Hot Drinks");
    printf("\n7. Cold Coffees");
    printf("\n8. Cold Drinks");
    printf("\nPlease Select any one option: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("\n1. Oleato Gingerbread Oatmilk Latte");
            printf("\n2. Iced Matcha Tea Latte with Oleato Golden Foam");
            printf("\n3. Dragon Drink Starbucks Refreshers Beverage with Oleato Golden Foam");
            printf("\nEnter your choice: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    printf("\nOleato Gingerbread Oatmilk Latte - $20");        
                    break;

                case 2:
                    printf("\nIced Matcha Tea Latte with Oleato Golden Foam - $22");        
                    break;

                case 3:
                    printf("\nDragon Drink Starbucks Refreshers Beverage with Oleato Golden Foam - $30");        
                    break;
                
                default:
                    printf("\nInvalid Oleato Selection!");
                    break;
            }
            break;

        case 2:
            printf("\n1. Caffe Americano");
            printf("\n2. Featured Dark Roast Caffe Verona");
            printf("\n3. Featured Medium Roast Pike Place Roast");
            printf("\nEnter your choice: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    printf("\nCaffe Americano - $10");        
                    break;

                case 2:
                    printf("\nFeatured Dark Roast Caffe Verona - $12");  
                    break;

                case 3:
                    printf("\nFeatured Medium Roast Pike Place Roast - $15");        
                    break;
                
                default:
                    printf("\nInvalid Hot Teas Selection!");
                    break;
            }
            break;
            
        default:
            printf("\nInvalid Drink Selection!");
            break;
    }





    return 0;
}
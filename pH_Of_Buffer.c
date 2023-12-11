#include <stdio.h>

int main() {
    float pH;
          
            while(1)
            { printf("Enter the pH of the buffer: ");
            scanf("%f", &pH);     
            if (pH>14 || pH<=0)
            {
                printf("invalid pH\n");

            }
            else{

            

            switch ((int)pH) {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                    printf("Acidic\n");
                    break;   
                case 7:
                if (pH==7)
                 {   printf("Neutral\n");
                 }
                 else {
                    printf("Basic\n");
                 }
                    break;
                case 8:
                case 9:
                case 10:
                case 11:
                case 12:
                case 13:
                case 14:
                    printf("Basic\n");
                    break;
                default:
                printf("Invalid pH, enter pH again\n");
            }
            break;
                //goto insert_pH;
                
                

}
 
            }
            
        
          


        return 0;
    }

    


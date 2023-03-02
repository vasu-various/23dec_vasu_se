    #include <stdio.h>  
    void main()  
    {  
        int i, j, m = 1; 
        for (i = 1; i <= 6; i++)  
        {  
            for (j = 1; j <= i; j++)  
            {  
                printf( "* ");  
            }  
            printf("\n");  
        }  
        for (i = 6-1; i >= 1; i--)  
        {  
            for (j = 1; j <= i; j++)  
            {  
                printf ("* ");  
            }  
            printf("\n");  
        }  
     
    }  

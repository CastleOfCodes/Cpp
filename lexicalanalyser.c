#include<stdio.h>
#include<ctype.h>
#include<string.h>
void main()
{
    int i, j, ic = 0, cc = 0, oc = 0, m;
    char identifiers[30], constants[30], operators[30], b[30];
    printf("Enter the string:");
    scanf("%[^\n]",&b);
    for(i = 0; i < strlen(b); i ++)
    {
        if (isspace(b[i]))
        {
            continue;
        }
        else if (isalpha(b[i]))
        {
            identifiers[ic] = b[i];
            ic++;
        }
        else if (isdigit(b[i]))
        {
            m = (b[i] - '0');
            i = i + 1;
            while (isdigit(b[i]))
            {
                m = (m * 10) +(b[i] - '0');
                i++;
            }
            i = i - 1;
            constants[cc] = m;
            cc++;
            

        }
        else
        {
            if(b[i] == '*')
            {
                operators[oc] = '*';
                oc++;
            }
            else if (b[i] == '/')
            {
                operators[oc] = '/';
                oc++;
            }
            else if (b[i] == '+')
            {
                operators[oc] = '+';
                oc++;
            }
            else if (b[i] == '-')
            {
                operators[oc] = '-';
                oc++;
            }
            
        }
        
        
        
        
    }

    printf("Identifiers:");
    for ( j = 0; j < ic; j++)
    {
        printf("%c ",identifiers[j]);
    }
    printf("\nConstants:");
    for ( j = 0; j < cc; j++)
    {
        printf("%d ",constants[j]);
    }
    printf("\nOperators:");
    for ( j = 0; j < oc; j++)
    {
        printf("%c ",operators[j]);
    }
    

    
}

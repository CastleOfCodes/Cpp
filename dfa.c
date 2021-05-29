#include<stdio.h>
void main()
{
    int num_state, i, q, q0, finalstate[20], state;
    int trans_table[10][10], str_len, str[20], tmp, flag =0;
    printf("Enter the number of states:");
    scanf("%d", &num_state);
    printf("Enter the transitions:");
    for(i = 0; i < num_state; i ++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &trans_table[i][j]);
        }
        
    }
    printf("Enter the initial state:");
    scanf("%d", &q0);
    printf("Enter the number of final state:");
    scanf("%d",&q);
    printf("Enter the final states:");
    for ( i = 0; i < q; i++)
    {
        scanf("%d",&finalstate[i]);
    }
    printf("Enter the size of input string:");
    scanf("%d",&str_len);
    printf("Enter the string:");
    for ( i = 0; i < str_len; i++)
    {
        scanf("%d", &str[i]);
    }
    state = q0;
    for ( i = 0; i < str_len; i++)
    {
        tmp = str[i];
        state = trans_table[state][tmp];        
    }
    
for ( i = 0; i < q; i++)
{
    if (state = finalstate[i])
    {
        printf("Accepted");
        flag = 1;
    }
    else
    {
        printf("Not accepted");
    }
    
    
}

     
}
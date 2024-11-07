#include <stdio.h>
#include "libft.h"

int main(void)
{
    char *str;
	str = malloc(20);
	
    
    // Print the original string
    printf("Original string: %s\n", str);
    
    // Use ft_memset to fill the first 5 characters with 'A'
    ft_memset(str,'\0',4);
	ft_memset(str, '3', 3);
	ft_memset(str, '2', 2);
	ft_memset(str, '1', 1);
	
    
    // Print the modified string
    printf("Modified string: %s\n", str);

    return 0;
}


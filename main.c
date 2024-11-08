#include <stdio.h>
#include "libft.h"
#include <string.h>

/*int main(void)		FT_MEMSET
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
} */
/*
int main()
{
	char *s = "furkan";

	printf("%s",(char *)ft_memchr((void *)s,'k',6));
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d",ft_memcmp(argv[1],argv[2],3));
		printf("%d",memcmp(argv[1],argv[2],3));
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
    char src[] = "123456";
    char dest[50]; // Ensure it's large enough to hold the copied content

    // Using ft_memcpy to copy src to dest
    ft_memcpy((void *)dest, (void *)src, ft_strlen(src) + 1); // +1 to include the null terminator

    // Display the result
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    // Test case where dest or src is NULL
    return 0;
}*/
#include <stdio.h>
#include "libft.h"

// Example function to apply: converts characters to uppercase.
void	to_uppercase(unsigned int index, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32; // Convert lowercase to uppercase
}

int main()
{
	char str[] = "hello, world!";
	printf("Original string: %s\n", str);

	// Apply ft_striteri with to_uppercase function
	ft_striteri(str, to_uppercase);

	printf("Modified string: %s\n", str); // Expect "HELLO, WORLD!"
	return 0;
}



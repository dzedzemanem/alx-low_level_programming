#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main-Entry point
 *Return:Always 0 (success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
print("is negative\n");
}
else if (n > 0)
{
print("is positive\n");
}
else
}
print("is zero\n");
}
return (0);
}

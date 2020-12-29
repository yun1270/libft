void ft_bzero(void *b, size_t n)
{
    char* pb = (char*)b;

    while (n--)
        pb[n] = 0;
}


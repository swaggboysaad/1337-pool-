unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int d = 0;
    unsigned int s = 0;

    while (dest[d] && d < size)
        d++;
    
    while (src[s] && (d + s + 1) < size)
    {
        dest[d + s] = src[s];
        s++;
    }
    
    if (d < size)
        dest[d + s] = '\0';
    
    while (src[s])
        s++;
    
    return (d + s);
}

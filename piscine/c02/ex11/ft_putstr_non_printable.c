void	dec_to_hex(unsigned char c, char *hex)
{
	char	*base;
       
	base = "0123456789abcdef";
	hex[0] = base[c/16];
	hex[1] = base[c % 16];
}


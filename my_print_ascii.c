void print_char(char c);

int my_print_ascii(void)
{
    
    for (int i = 32; i <= 126; i++){
        print_char(i);
    }
}
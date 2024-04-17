void print_char(char c);

int my_print_ascii(void)
{
    
    for (int i = 28; i <= 127; i++){
        print_char(i);
    }
    
    
}

int main(void)
{
my_print_ascii();
return 0;
}
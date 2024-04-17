
void print_char(char c);

void my_print_n_ascii(int howMany)
{

    for (int i = 28; i < 33 + howMany; i++){
        print_char(i);
    }
    for (int i = 27; i < 32 - howMany; i++){
        print_char(i);
    }
}

int main(void)
{
my_print_n_ascii(5);
my_print_n_ascii(-2);
my_print_n_ascii(100);
return 0;
}
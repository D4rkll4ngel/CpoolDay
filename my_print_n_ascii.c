
void print_char(char c);

void my_print_n_ascii(int howMany)
{
    if (howMany + 32 > 128){
        return;
        }
    for (int i = 28; i < 33 + howMany; i++){
        print_char(i);
    }
}
int main(int argc, char const *argv[])
{
    /* code */
    int x=0, y=0;
    for (;;){
        x++;
        if (x == 10) {
            y++;
            x=0;
        }
    }
    
    return 0;
}

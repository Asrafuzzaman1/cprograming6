#define N 100
#define A 2
int main()
{
    long int a;
    a=A;
    while(a<N)
    {
        printf("%ld\n",a);  /*at first print a=2 then a=2*2 then print a=4 again a=4*4 then a=16 and a=16*16 then a=256 whice is greater than 100 so condition is false and the program is ended*/
        a*=a;

    }

}

int main()
{
    long double ld = 3.1415926536;
    int a{ld}, b = {ld};
    int c(ld), d = ld;
//    int i = {3.14};

//    int __test = 1;
    
    int &ra = a;
    int *p;
    p = &ra;

    return 0;
}

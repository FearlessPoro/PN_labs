int conditiontest2(int test1, int test2)
{
    int result = test1;
    int p = test1 - test2;
    if (p<=0)
    {
        result = 0;
        if (p < 0)
        result = test2;
    }
    return result;
}
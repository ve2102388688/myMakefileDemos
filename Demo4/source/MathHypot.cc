/**
 * hypot - Calculate the \sqrt(a^2+b^2).
 * @param a: a.
 * @param b: b.
 *
 * @return \sqrt(a^2+b^2).
 */
double hypot(double a, double b)
{
    double res = a * a + b * b;
    double x = res / 2;                 // 设置初值

    // 迭代最大次数
    for(int i = 0; i<1000; ++i) {
        double y = (x + res / x) / 2;   // 迭代公式
        double absX_Y = (x > y) ? x - y : y - x;
        if (absX_Y < 0.000001)
            return y;
        x = y;
    }
    return x;
}
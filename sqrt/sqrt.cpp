/*************************************************************************
    > File Name: sqrt.cpp
    > Author: wangjw
    > Mail: 
    > Created Time: 二  5/30 21:28:07 2023
 ************************************************************************/


#include <iostream>
#include "sqrt.h"

double sqrt(double x) //自己实现的开平方根函数
{
    if (x <= 0) {
        return 0;
    }

    double result = x;

    // do ten iterations
    for (int i = 0; i < 10; ++i) {
        if (result <= 0) {
            result = 0.1;
        }
        double delta = x - (result * result);
        result = result + 0.5 * delta / result;
        // std::cout << "Computing sqrt of " << x << " to be " << result << std::endl;
    }
    return result;
}

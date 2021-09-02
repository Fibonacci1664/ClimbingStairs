#include<iostream>
#include <vector>

std::vector<int> fibSeq;

// Recursion is taking too long for leetcode, find another way!
int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}

void createFibSequence()
{
    fibSeq.push_back(0);
    fibSeq.push_back(1);

    for (int i = 2; i < 45; ++i)
    {
        fibSeq.push_back(fibSeq[i - 1] + fibSeq[i - 2]);
    }
}

int climbStairs(int n)
{
    return fib(n + 1);
}

int main()
{
    // TEST CASES
    /*int test1 = 2;
    int test2 = 3;
    int test3 = 5;
    int test4 = 7;
    int test5 = 16;
    int test6 = 4;
    int test7 = 42;

    int ans = 0;

    for (int i = 0; i < 45; ++i)
    {
        ans = climbStairs(i);

        std::cout << "With " << i << " number of stairs, there are " << ans << " possible ways to climb them.\n";
    }*/

	return 0;
}
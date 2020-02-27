#include "stdio.h"

#include "LeetCodePractice.h"

void TestP1();

int  main()
{
    TestP1();
}

void TestP1()
{
    vector<int> vecIn{2, 7, 11, 15};
    int nSum = 9;

//    vector<int> vecResult = P1twoSum01(vecIn, nSum);
     vector<int> vecResult = P1twoSum03(vecIn, nSum);
    for (size_t i=0; i<vecResult.size(); ++i)
        printf("%d  ", vecResult[i]);
    printf("\n");

}

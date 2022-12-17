# Community Course » Prefix sums and difference arrays » Step 2

## Finding the sum on a segment and generalization for other operations

Let's immediately apply prefix sums on an example problem.

### Task: request the sum of a line segment

An array of integers is given, and queries like "find the sum on the half-interval from position `l` to position `r`" come in. Need to answer requests in `O(1)`.

### Answer

Let's initially calculate an array of prefix sums before answering queries. Then if in all requests `l` was equal to zero, then the answer to the request would be simply the prefix sum `br`.

But how to act if l≠0? The prefix sum brbr contains all the elements we need, but there are still extra ones: `a0,a1,…,al−1`. But the sum of these elements is just `bl`. Thus, the identity is fulfilled:

`al+al+1+…+ar−1=br−bl`

That is, to answer the query for finding the sum on the half-interval, you just need to subtract the two pre-calculated prefix sums from each other.

```c++
int getSum(int left, int right) { // [left, right)
    return b[right] - b[left];
}
```






[main content](https://codeforces.com/edu/course/3/lesson/10/2 'in russian language')
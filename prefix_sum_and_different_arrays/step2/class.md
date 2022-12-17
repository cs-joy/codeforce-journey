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

Pay attention to what beautiful formulas we get: the sum on the half-interval `[l,r)` is `br−bl`. Such beauty is achieved precisely due to the fact that we use half-intervals: and requests are given in the form of half-intervals, and prefix sums.

If prefix sums were calculated in the form `bi=a0+a1+…+ai`, then unpleasant `±1` would appear in the formula, in which it is easy to get confused: `br−bl−1`, and the case when `l=0` would become extreme, it would have to be analyzed separately.






[main content](https://codeforces.com/edu/course/3/lesson/10/2 'in russian language')
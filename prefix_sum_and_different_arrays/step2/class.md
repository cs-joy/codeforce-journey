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


### Prefix minima and xors

Let's ask ourselves a question: 
- for what operations can prefix amounts be used?
- Not only for addition?
- What properties must an operation have in order to use prefix sums?

In fact, it is necessary that the function that we consider on the segment be reversible, which is equivalent to the fact that it should be possible to restore the value on the segment using two prefixes. And the operations of minimum and maximum are irreversible. It is not possible to get the meaning of the minimum of a segment by the meaning of the minimum of a prefix. For example, if the element at position `0` in the array is the smallest, then all prefix minimums will be equal to this element, but the minimums on some segments are not related to it at all.

![img](https://github.com/cs-joy/codeforce-journey/blob/main/prefix_sum_and_different_arrays/step2/minMax.PNG)

But besides the sum, there are other operations that are reversible. One of the most popular is perhaps the `“bitwise XOR”` operation, which is also called `“xor”` and is denoted by `⊕`.

At the same time, it is even more convenient to use prefix sums for `xor`. The identity `x⊕x=0` is satisfied for any number `x`, which means that the operation `xor` is inverse to itself, so that the formula for calculating `bitwise exclusive or` on a segment is:

`al⊕al+1⊕…⊕ar−1=br⊕bl`


### Advanced Applications

Let's solve a couple more problems in which we need prefix sums.

### Problem: zero sum subsegment

Given an array. It is necessary for `O(nlog⁡n)` to find any of its non-empty subsegment with zero sum of elements.

#### Answer

As we already know, the sums on the segments are the differences of the prefix sums. Therefore, the fact that the sum on a segment is equal to zero is equivalent to the fact that the prefix sums of its ends are equal.

Thus, we have reduced the problem of finding a zero-sum subsegment to the problem of finding two identical elements in an array of prefix sums. To do this, you can, for example, sort the array of prefix sums and look for matching elements among neighboring. Or you can use a hash table (unordered_map in C++), and then the asymptotics of the solution will be completely `O (n)`.

#### Exercise

Given two arrays of the same length. It is necessary to find such a subsegment so that the sum of the elements of the first array on this subsegment coincides with the sum of the elements of the second array on this subsegment. Asymptotic O(n).


#### Task: Grasshopper






[main content](https://codeforces.com/edu/course/3/lesson/10/2 'in russian language')
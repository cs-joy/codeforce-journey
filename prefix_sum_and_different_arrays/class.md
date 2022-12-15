# Community Course » Prefix sums and difference arrays » Step 1

## Definition and construction

### Definition:

**The prefix sums of the array** [a0,a1,a2,…,an−1][a0,a1,a2,…,an−1] is the array [b0,b1,b2,…,bn][b0,b1,b2,… ,bn] defined as follows:
```
b0=0 
b1=a0
b2=a0+a1
b3=a0+a1+a2
…
bn=a0+a1+…+an−1
```

### Power of half-intervals

Note that `bi` is the sum of the first `i` elements of `ai`. Sometimes prefix sums are defined in such a way that `bi = a0 + a1 +…+ ai`, but this method is inconvenient in practice, as we will see below.

In this example, you can get acquainted with a very important concept in algorithms: it is almost always better to use half-intervals instead of segments. For example, in this case `bi` is the sum of the elements of the array `a` on the half-interval `[0,i)`, which in practice will be more convenient than storing the sum on the interval `[0,i]` in `bi`.

It is also worth remembering that the length of the array `b` is one more than the length of the array `a`.


#### Recurrent formula

The formula for `bi` can be written recursively:

```
b0 = 0 
bi + 1 = bi + ai    for all i ≥ 0
```
From the recursive formula, it immediately becomes clear how to calculate the array of prefix sums in O(n):

```cpp
vector<int> findPrefixSums(vector<int>& a) {
    int n = a.size();
    vector<int> prefixSums(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefixSums[i + 1] = prefixSums[i] + a[i];
    }
    return prefixSums;
}
```
Note that the elements of the prefix sum array are the sums of a large number of elements of the original array, so be careful with overflow. And in general, throughout this topic, you may encounter overflow, so be always on the lookout!

In addition, there is the `std::partial_sum` function built into C++, which just counts prefix sums. An example of her work:

```c++
vector<int> arr = {1, 2, 3, 4, 5};
vector<int> prefixSums(n + 1, 0);
partial_sum(arr.begin(), arr.end(), prefixSums.begin() + 1);
for (int elem : prefixSums) {
    cout << elem << endl;
}
```
Note that the partial_sum function itself does not leave zero at the beginning, so we have to do it ourselves by adding one to prefixSums.begin().


### Visualization method
We already have two intuitions for understanding `bi`: the sum of the first `i` elements of the original array and the sum of the elements of the original array on the half-interval `[0,i)`. Let's look at another way of thinking about this. You can imagine that the elements of the array are in cells, and the prefix sums are in between them - on partitions. And they contain the sums of everything that is in front of this partition:
![img](https://github.com/cs-joy/codeforce-journey/blob/main/prefix_sum_and_different_arrays/visual.PNG)








> [Reference](https://codeforces.com/edu/course/3/lesson/10)
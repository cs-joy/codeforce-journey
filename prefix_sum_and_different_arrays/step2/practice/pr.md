# A. Find the sum on the segment

test time limit:  3 seconds
memory limit per test: 256 megabytes
input: standard input
output standard output


Given an array aa. There are requests to search for the sum on the segment. You need to answer them.

### Input data

- The first line of the input contains one integer `n` (1≤n≤106) — the number of array elements.

- The second line of the input contains `n` integers `ai` (−109≤ai≤109) — the elements of the array `a`.

- The third line of the input contains a single integer q (1≤q≤106) — the number of requests to find the sum on the segment.

- Each of the next `q` lines contains two integers `li` and `ri` (1≤li≤ri≤n) — the boundaries of the array segment where the sum is to be found.


### Output

For each query, on a separate line print the sum of elements in the corresponding segment of the array (including borders).


#### Examples

- input data
```
2
10 30
3
1 1
2 2
1 2
```
- output
```
10
30
40
```


- input data
```
5
-1 -2 3 0 4
5
1 5
1 2
4 4
3 4
2 5
```
- output
```
4
-3
0
3
5
```

- input data
```
7
1 1 1 1 1 1 1
9
1 7
2 6
3 4
2 5
5 7
6 6
3 3
2 7
1 1
```
- output
```
7
5
2
4
3
1
1
6
1
```
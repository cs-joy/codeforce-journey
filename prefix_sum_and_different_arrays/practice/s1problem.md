# Code & components for pages
./src/* 
  ├─ src/assets - # Minified images, fonts, icon files
  ├─ src/components - # Individual smaller components
  ├─ src/fragments - # Larger chunks of a page composed of multiple components
  ├─ src/layouts - # Page layouts used for different types of pages composed of components and fragments
  ├─ src/page - # Custom pages or pages composed of layouts with hardcoded data components, fragments, & layouts
  ├─ src/pages/* - # Next.js file based routing
  │  ├─ _app.js - # next.js app entry point
  │  ├─ _document.js - # next.js document wrapper
  │  ├─ global.css - #  Global CSS styles
  │  └─ Everything else... - # File based routing
  └─ src/utils - # Utility functions used in various places
# A. Building prefix sums

<div align="center">
<table>
<tbody>
<td align="center">
<img width="2000" height="0"><br>
<sub>test time limit 3 seconds</sub><br>
<sub>memory limit per test 256 megabytes</sub><br>
<sub>input: standard input</sub><br>
<sub>output: standard output</sub><br>
<img width="2000" height="0">
</td>
</tbody>
</table>
</div>


Given an array a. Output its array of prefix sums. In other words, print `0, a1, a1+a2, ……, a1+a2+…+an`.

##### Input data

The first line of the input contains one integer nn (1≤n≤1061≤n≤106) — the number of array elements.
The second line of the input contains `n` integers `ai` (−109≤ai≤109−109≤ai≤109) — the elements of the array `a`.

##### Output

In a single line print an array of prefix sums of array `a`.

##### Examples


- **input data**
    - 1
    - 178
        - **output**
            - 0 178
- **input data**
    - 7
    - 0 1 2 3 4 5 6
        - **output**
            - 0 0 1 3 6 10 15 21
- **input data**
    - 5
    - -1 -2 3 0 4
        - **output**
            - 0 -1 -3 0 0 4 


> [main article](https://codeforces.com/edu/course/3/lesson/10/1/practice/contest/324365/problem/A 'in russian language')
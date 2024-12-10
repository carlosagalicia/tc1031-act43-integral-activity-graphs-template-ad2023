![Tec de Monterrey](images/logotecmty.png)
# Act 4.3 - Comprehensive Graph Activity (Competency Evidence)

## <span style="color: rgb(26, 99, 169);">What Do I Have to Do?</span>
In this repository, you will find the input files as well as the expected outputs to test your implementation. You will also find a "main.cpp" file. You must implement your solution in this file. At the top of the file, include your personal information in comments. For example:
```
// =========================================================
// File: main.cpp
// Author: Edward Elric - A00123456
// Date: 01/01/2021
// =========================================================
```
<span style="text-decoration: underline;">Individually</span>, develop the solution for the following problem:

A graph *G* is a set of points *V*(*G*), together with a set of edges *E*(*G*), where each element of *E*(*G*) is an unordered pair of distinct points in *V*(*G*).

**Example 1:** Let *G* be a graph where *V*(*G*) = {*a*, *b*, *c*, *d*} and *E*(*G*) = {(*a*, *b*), (*b*, *c*), (*c*, *d*), (*d*, *b*)}. The following figure gives a representation of *G*.

![A representation of the graph *G*](images/image01.png)

Note that *G* contains the "cycle", {(*b*, *c*), (*c*, *d*), (*d*, *b*)}. A graph without cycles is called a tree. A path in a graph *G* is an alternating sequence of points and edges (starting and ending with a point) such that all points in the path are distinct. In the graph of Example 1, {*a*, (*a*, *b*), *b*, (*b*, *c*), *c*, (*c*, *d*), *d*} is a path.

**Fact:** Any two points in a tree are connected by a unique path.

A graph is said to be connected if every pair of points is connected by a path. The graph in Example 1 is connected. If a graph is not connected, it consists of "subgraphs" that are connected. Each of these subgraphs is called a connected component of graph *G*.

A graph in which every connected component is a tree is called a forest, as shown in the following figure.

![A forest with three trees](images/image02.png)

An extreme case worth mentioning is when one of the component trees has a single point with no edges attached to it. Such a tree resembles an isolated point. We will call this an acorn. We are now ready to define the problem.

**Problem:** Given a forest, write a program to count the number of trees and acorns.

## <span style="color: rgb(26, 99, 169);">**Input**</span>
The forest description consists of two parts:
1. A list of tree edges (one per line, given as an unordered pair of uppercase letters, delimited by a row of 4 asterisks).
2. A list of points in the tree (these will be given on a single line with a maximum of 26 corresponding to uppercase letters, A..Z).

## <span style="color: rgb(26, 99, 169);">**Output**</span>
Your program must print the number of trees and the number of acorns in a sentence, for example:

```
There are x tree(s) and y acorn(s).
```

where *x* and *y* are the numbers of trees and acorns, respectively.

**Note:** A forest may have no trees and only acorns, only trees and no acorns, or anything in between, so keep your eyes open and don't miss the forest for the trees!

Let *G* be the graph whose edges and points are given by the test case in the sample input. The following figure shows a representation of it.

![Graphical representation of the test case](images/image03.png)

## <span style="color: rgb(26, 99, 169);">**Sample Input**</span>
```
(A,B)
(B,C)
(B,D)
(D,E)
(E,F)
(B,G)
(G,H)
(G,I)
(J,K)
(K,L)
(K,M)
****
A,B,C,D,E,F,G,H,I,J,K,L,M,N
```

## <span style="color: rgb(26, 99, 169);">**Sample Output**</span>
```
There are 2 tree(s) and 1 acorn(s).
```

To test your implementation, compile your program with the command:
```
g++ -std=c++11 main.cpp -o app
```
Then, test your solution with each of the input files provided in this repository (`input1.txt`, `input2.txt`, `input3.txt`, `input4.txt`). The expected results are in the files `output1.txt`, `output2.txt`, `output3.txt`, and `output4.txt`. To perform the tests, you can use the following commands. For example, to test with the file "input1.txt":
```
./app < input1.txt > mysolution1.txt
diff mysolution1.txt output1.txt
```
If the second command produces no output, you know your results are as expected.

Finally, conduct individual research and reflection on the importance and efficiency of different sorting and searching algorithms in a problem situation like this, generating a document titled **"ReflexAct4.3.pdf"**.

## <span style="color: rgb(26, 99, 169);">**How Is My Evidence Evaluated?**</span>

- **80%** - For each functionality, the evaluation will be:
    - **Excellent (80%)** - correctly passes all test cases.
    - **Very Good (60%)** - correctly passes 75% of test cases.
    - **Good (40%)** - correctly passes 50% of test cases.
    - **Insufficient (20%)** - correctly passes less than 50% of test cases.

- **10%** - The code must follow the coding standards specified in the document: <span class="instructure_file_holder link_holder">[coding_standard_link](estandar.pdf)</span>.
- **10%** - Function names in the application must be respected.

## <span style="color: rgb(26, 99, 169);">**Where Do I Submit It?**</span>
This activity is part of your final course grade as well as the portfolio of evidence for the competencies to be developed in the course. Therefore, individually:
* Submit the corresponding files for the sorting and searching algorithms in the appropriate section of this platform, along with the individual reflection document (**ReflexAct4.3.pdf**).
* Create a personal folder named **TC1031(Final_Portfolio)** to prepare for the portfolio of competencies submission at the end of the course. This folder must contain 5 subfolders:
    * Act1.3 
    * Act2.3
    * Act3.4
    * **Act4.3** - place your files that solved <span style="text-decoration: underline;">activity 4.3</span> along with the individual reflection document (**ReflexAct4.3.pdf**).
    * Act5.2
